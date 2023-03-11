#include <iostream>
using namespace std;

//Fibonacci using recursion & memoization
int Fib(int *ptr, int n)
{

  if(ptr[n] != -1) //base condition also & checking if value exits in array
  {
    return ptr[n];
  }

  ptr[n] = Fib(ptr, n-1) + Fib(ptr, n-2); //recursion call & memoization
  return ptr[n];
}
int main()
{
  int n;

  cout << "Give me an n: ";
  cin >> n;
  
  //dynamic array to keep track of fibonacci series
  int *p = new int[n+1];

  //initializing the dynamic array with -1
  for(int i= 2; i<n+1; i++){
    p[i] = -1;
  }
  p[0] = 0;
  p[1] = 1;

  cout << Fib(p, n) << endl;
  free(p);
  p = NULL;
  
}
output:
Give me an n: 8
21
