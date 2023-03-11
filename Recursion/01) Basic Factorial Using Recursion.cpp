#include <iostream>
using namespace std;

//Recursion Basics using Factorial
int Factorial(int n)
{
  cout << "I am calculating F("<<n<<")\n";
  if(n == 0)
  {
    return 1;
  }

  int F = n * Factorial(n-1);
  cout << "Done ! F("<<n<<") = "<<F<<"\n";
  return F;
}

int main() 
{
  int n;
  cout << "Give me an n: ";
  cin >> n;

  int result = Factorial(n);
  cout << result;
  
}

output:
Give me an n: 5
I am calculating F(5)
I am calculating F(4)
I am calculating F(3)
I am calculating F(2)
I am calculating F(1)
I am calculating F(0)
Done ! F(1) = 1
Done ! F(2) = 2
Done ! F(3) = 6
Done ! F(4) = 24
Done ! F(5) = 120
