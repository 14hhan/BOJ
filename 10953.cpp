#include <iostream>
using namespace std;

int main() {
  int t, a, b;
  char comma;

  cin >> t;
  while (t--) {
    cin >> a >> comma >> b;
    cout << a + b << '\n';
  }
}
