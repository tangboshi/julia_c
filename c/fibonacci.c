#include <stdio.h>
#include "fibonacci.h"

int main(int argc, char** argv)
{
  for(int i = 0; i < 275; i++)
  {
    int ergebnis = calculate_iteratively(i);
    printf("%d\n\n", ergebnis);
  }
}
