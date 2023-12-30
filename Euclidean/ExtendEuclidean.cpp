#include <iostream>
using namespace std;

int extgcd(int a, int b, int x, int y) {
    int c = a;
    if (b != 0) {
        c = extgcd(b, a % b, y, x);
        y -= (a / b) * x;
    } else {
        x = 1;
        y = 0;
    }
    return c;
}
int main() {
    int a, b;
    cin >> a >> b;
    int x, y;
    
}