#include <iostream>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c;
  if (a % b == c) {
    x = 1;
    y = -(a / b);
  } else {
    x = -(b / a);
    y = 1;
  }
  cout << x << " " << y << endl;
}