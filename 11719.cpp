#include <iostream>
using namespace std;

int main() {
  string str;
  int i = 100;

  while (i--) {
    getline(cin, str);
    cout << str << '\n';
  }
}
