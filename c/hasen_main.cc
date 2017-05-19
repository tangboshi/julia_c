#include <iostream>
#include "hasen.hh"
#define ZEIT 40

using namespace std;

int main(int argc, char** argv)
{
  Hase spitzohr;
  spitzohr.setFortpflanzung(6);
  spitzohr.setReife(6);
  spitzohr.setMonateBisReife(0);
  spitzohr.setTod(36);
  spitzohr.setPopulation(1);
  spitzohr.setWurfgroesse(2);

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
