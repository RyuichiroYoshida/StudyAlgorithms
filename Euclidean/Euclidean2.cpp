#include <iostream>
using namespace std;

int Euclid(int x, int y) {
  if (y == 0) {
    return x;
  }
  return Euclid(y, x % y);
}
int main() {
  int count, x;
  cin >> count >> x;
  for (size_t i = 1; i < count; i++)
  {
    int y;
    cin >> y;
    x = Euclid(x, y);
  }
  cout << x << endl;
}