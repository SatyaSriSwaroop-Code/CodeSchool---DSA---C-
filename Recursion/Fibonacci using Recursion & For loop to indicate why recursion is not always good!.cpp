#include <iostream>
using namespace std;

//if you do fib(40) for both the fibonacci fucntions below, Fib using for loop gives the answer faster compared to Fib using recursion!
//It is due to the same repetitive calls in recursion the process becomes extremely time consuming approximately to O(2*n) wheras for loop Fib only takes O(n)!

//Fibonaci using recursion
int Fib(int n)
{
  if(n <= 1)
  {
    return n;
  }
  return Fib(n-1) + Fib(n-2);
}
int main()
{
  int n;
  cout << "Give me an n: ";
  cin >> n;
  int result = Fib(n);
  cout << result;
}


//Fibonaci Using For Loop
int Fib(int n){
  if(n <= 1){
    return n;
  }
  int F1 = 0, F2 = 1, F;
  
  for(int i=2; i<=n; i++)
    {
      F = F1 + F2;
      F1 = F2;
      F2 = F;
    }
  return F;
}
int main()
{
  int n;
  cout << "Give me an n: ";
  cin >> n;
  int result = Fib(n);
  cout << result;
}

