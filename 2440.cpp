#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int i = n + 1;
    while(i--)
      cout << '*';
    cout << '\n';
  }
}
