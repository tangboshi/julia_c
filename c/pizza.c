#define PI 3.141
#include <stdio.h>

typedef struct
{
  float radius;
}Pizza;

float area(Pizza* pizza)
{
  float area = pizza->radius * pizza->radius * PI;
  printf("Pizza ist gross: %f\n", area);
  return area;
}

int saturated(float pizza_area, float guest_area, int guests)
{
  printf("Gastbedarf ist: %f\n", guest_area*guests);
  if ( guest_area * guests < pizza_area )
    return 1;
  else
    return 0;
}

int main ()
{
  Pizza pizzaHawai;
  pizzaHawai.radius = 32;
  int ok = saturated(area(&pizzaHawai),100,100);

  if(ok)
    printf("Gäste sind satt geworden, hurra!\n");
  else
    printf("Gäste haben dem Gastgeber die Haare vom Kopf gefressen.");

  return 0;
}
