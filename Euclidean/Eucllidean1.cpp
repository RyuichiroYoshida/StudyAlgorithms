#include <iostream>
using namespace std;

int Euclid(int x, int y) {
  if (y == 0) {
    return x;
  }
  return Euclid(y, x % y);
}
int main() {
  int x, y;
  cin >> x >> y;
  cout << Euclid(x, y) << endl;
}