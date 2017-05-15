#include <iostream>

void printArray(int arr[], int iterations)
{
  for(int i=0; i < iterations; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
