#include <iostream>
#include "hasen.hh"
#define ZEIT 40

using namespace std;

int main(int argc, char** argv)
{
  Hase spitzohr;
  spitzohr.setFortpflanzung(1);
  spitzohr.setReife(1);
  spitzohr.setMonateBisReife(0);
  spitzohr.setTod(0);
  spitzohr.setPopulation(1);
  spitzohr.setWurfgroesse(1);

  int anzahlHasen;

  cout << "Soviele Hasen hoppeln umher: " << endl;

  for(int i = 0; i < ZEIT; i++)
  {
    anzahlHasen = spitzohr.calc(i);
    cout << "Monat " << i << ": " << anzahlHasen << endl;
    cout << "_________________________________________" << endl;
  }
  return 0;
}
