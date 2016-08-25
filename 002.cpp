#include <iostream>
using namespace std;

long long calc(long long n)
{
  long long sum = 0;
  long long fibonacci = 1;
  long long last_value = 1;

  while (fibonacci < n)
  {
    long long temp = fibonacci;

    if (fibonacci % 2 == 0)
    {
      sum += fibonacci;
    }

    fibonacci += last_value;
    last_value = temp;
  }

  return sum;
}


int main() {
  int t;
  cin >> t;

  long long n;
  while (cin >> n)
  {
    cout << calc(n) << endl;
  }

  return 0;
}
