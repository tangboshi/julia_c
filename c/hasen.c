#include <stdio.h>
#include <string.h>
#define ZEIT 40 //Monate

// Ohne das typedef müsste ich immer struct Hasenart tippen...
typedef struct
{
  int fortpflanzung;             // Das Intervall zwischen zwei Würfen
  int reife;                     // Das Intervall zwischen Geburt und Geschlechtsreife
  int monateBisReife;            // 0: Hase ist geschlechtsreif
  int tod;                       // Das Intervall zwischen Geburt und Tod; <= 0: unsterblich
  int population;                // Die Anzahl an Hasen zum Zeitpunkt 0
  int wurfgroesse;               // Anzahl an HasenPAAREN pro Wurf.
}Hasenart;

// Hasenart ist mir immer noch zu viel Tipparbeit...
typedef Hasenart Hase;

// Gibt alle Werte eines int-Arrays der Länge iterations aus.
void printArray(int arr[], int iterations)
{
  for(int i=0; i < iterations; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int calc(Hase* bunny, int monate)
{
  unsigned int length;

  if(bunny->fortpflanzung < bunny->tod && bunny->tod > 0)
    length = bunny->tod;
  else
    length = bunny->fortpflanzung;

  int history[length];

  // Initialisiere den Array mit Nullen
  // Diese Funktion stammt aus string.h
  memset(history, 0, sizeof(history));

  int currentFib  =  bunny->population;
  int nextFib     =  bunny->population;

  static int j = 0;

  if(bunny->monateBisReife > 0)
  {
    bunny->monateBisReife -= 1;
    history[j%length] = bunny->population;
    if(bunny->tod > 0)
      history[j%length] -= history[(j - bunny->tod)%length];
    if(bunny->population <= 0)
    {
      printf("Die Hasen sind leider ausgestorben!\n\n");
      return 0;
    }
    printf("history: ");
    printArray(history, length);
    return bunny->population;
    j++;
  }

  for(int i=0; i < monate; i++)
  {
    nextFib = currentFib + bunny->wurfgroesse * history[(i - bunny->fortpflanzung) % length];
    if(bunny->tod > 0)
      nextFib -= history[(i - bunny->tod)%length];
    history[i % length] = currentFib;
    currentFib = nextFib;
  }
  printf("history: ");
  printArray(history, length);
  //printf("currentFib: %d\n", currentFib);
  //printf("nextFib: %d\n", nextFib);
  return currentFib;
}

int main(int argc, char** argv)
{
  // Äquivalent zum unteren ist:
  // Hase langohr = {1,1,0,0,1,1};
  // Das ist schlecht lesbar, dafür aber kompakter
  // Bei der unteren Varianten kann man auch Array-Werte nicht antasten.
  Hase spitzohr;
  spitzohr.fortpflanzung  = 1;
  spitzohr.reife          = 1;
  spitzohr.monateBisReife = 0;
  spitzohr.tod            = 0;
  spitzohr.population     = 1;
  spitzohr.wurfgroesse    = 1;

  int anzahlHasen = 0;

  printf("Soviele Hasen hoppeln umher:\n");

  for(int i = 0; i < ZEIT; i++)
  {
    anzahlHasen = calc(&spitzohr, i);
    printf("Monat %d: %d\n", i, anzahlHasen);
    printf("_________________________________________\n");
  }
  return 0;
}
