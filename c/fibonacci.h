int calculate_recursively(int n)
{
  if( n == 0 || n == 1)
    return 1;
  else
    return calculate_recursively(n-1) + calculate_recursively (n-2);
}

int calculate_iteratively(int n)
{
  int tmp, currentFib = 1, nextFib = 1;
  for(int i=0; i < n; i++)
  {
    tmp = nextFib;
    nextFib += currentFib;
    currentFib = tmp;
  }
  return currentFib;
}
