#include <iostream>
using namespace std;

int main() {
  int x, y, day, days = 0;
  cin >> x >> y;

  for (int i = 1; i < x; i++) {
    switch(i) {
      case 1: {
        days += 31;
        break;
      }
      case 2: {
        days += 28;
        break;
      }
      case 3: {
        days += 31;
        break;
      }
      case 4: {
        days += 30;
        break;
      }
      case 5: {
        days += 31;
        break;
      }
      case 6: {
        days += 30;
        break;
      }
      case 7: {
        days += 31;
        break;
      }
      case 8: {
        days += 31;
        break;
      }
      case 9: {
        days += 30;
        break;
      }
      case 10: {
        days += 31;
        break;
      }
      case 11: {
        days += 30;
        break;
      }
      case 12: {
        days += 31;
        break;
      }
    }
  }
  days += y;

  day = days % 7;
  switch(day) {
    case 0: {
      cout << "SUN";
      break;
    }
    case 1: {
      cout << "MON";
      break;
    }
    case 2: {
      cout << "TUE";
      break;
    }
    case 3: {
      cout << "WED";
      break;
    }
    case 4: {
      cout << "THU";
      break;
    }
    case 5: {
      cout << "FRI";
      break;
    }
    case 6: {
      cout << "SAT";
      break;
    }
  }
}
