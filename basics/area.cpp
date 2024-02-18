#include <iostream>
using namespace std;

float triArea(float base, float height) {
    float area;
    area = ((base) * (height)) / 2;
    cout << area;
    return 0;
}

int main () {
    float b;
    float h;
    cin >> b;
    cin >> h;
    triArea(b,h);
    return 0;
}


