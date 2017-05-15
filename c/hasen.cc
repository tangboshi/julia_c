#include "hasen.hh"
#include "hasen_helper.hh"
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

Hase::Hase(){}

Hase::Hase(int fortpflanzung = 1, int reife = 1, int monateBisReife = 0, int tod = 0, int population = 1, int wurfgroesse = 1) :
  fortpflanzung(fortpflanzung),
  reife(reife),
  monateBisReife(monateBisReife),
  tod(tod),
  population(population),
  wurfgroesse(wurfgroesse)
{}

Hase::~Hase(){}

int Hase::calc(const unsigned int monate)
{
  unsigned int length;

  if(fortpflanzung < tod && tod > 0)
    length = tod;
  else
    length = fortpflanzung;

  int history[length];

  // Initialisiere den Array mit Nullen
  // Diese Funktion stammt aus string.h
  memset(history, 0, sizeof(history));

  int currentFib  =  population;
  int nextFib     =  population;

  static int j = 0;

  if(monateBisReife > 0)
  {
    monateBisReife -= 1;
    history[j%length] = population;
    if(tod > 0)
      history[j%length] -= history[(j - tod)%length];
    if(population <= 0)
    {
      cout << "Die Hasen sind leider ausgestorben!" << endl;
      cout << endl;
      return 0;
    }
    cout << "history: ";
    printArray(history, length);
    return population;
    j++;
  }

  for(int i=0; i < monate; i++)
  {
    nextFib = currentFib + wurfgroesse * history[(i - fortpflanzung) % length];
    if(tod > 0)
      nextFib -= history[(i - tod)%length];
    history[i % length] = currentFib;
    currentFib = nextFib;
  }
  cout << "history: ";
  printArray(history, length);
  return currentFib;
}
