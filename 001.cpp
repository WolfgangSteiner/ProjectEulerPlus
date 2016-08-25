#include <iostream>
using namespace std;

long long calc(int n)
{
  long long sum = 0;
  const long long n_3 = n%3 ? n/3 : n/3 - 1;
  sum += n_3 * (n_3 + 1) / 2 * 3;

  const long long n_5 = n%5 ? n/5 : n/5 - 1;
  sum += n_5 * (n_5 + 1) / 2 * 5;

  const long long n_15 = n%15 ? n/15 : n/15 - 1;
  sum -= n_15 * (n_15 + 1) / 2 * 15;

  return sum;
}

int main() {
  int t;
  cin >> t;

  int n;
  while (cin >> n)
  {
    cout << calc(n) << endl;
  }

  return 0;
}
