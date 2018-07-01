#include <iostream>

using namespace std;


int divisors(int n)
{
  int factor = 2;
  int noFactors = 0;
  while(n>1){
    if (n % factor == 0){
      noFactors++;
      n /= factor;
      cout << "Divisor: " << factor << endl;
    } else {
      factor++;
    }
  }
  return noFactors+2;
}

int sepDivisors(int n)
{
  int factor = 2;
  int noFactors = 0;
  while(factor <= n){
    if (n % factor == 0){
      noFactors++;
      //cout << "Divisor: " << factor << endl;
    }
    factor++;
  }
  return noFactors;
}



int main()
{

  int k = 0;
  int sum = k;
  int n = 0;
  int maks;

  cout <<"Tast inn tall" << endl;
  cin >> maks;

  cout << "Jobber"<<endl;
  while (n < maks) {
    k++;
    sum = sum + k;
    n = sepDivisors(sum);
  }
  cout << "Antall divisorer er " << n << " for tallet " << sum << endl;

return 0;
}
