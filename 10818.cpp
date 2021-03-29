#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  vector<int> v;
  cin >> n;

  while(n--) {
    int m;
    cin >> m;
    v.push_back(m);
  }

  // min/max_element returns an iterator
  cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end());
}
