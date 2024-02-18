#include<bits/stdc++.h>
using namespace std;

int findminimum(int x, int y) {
    if(x >= y) return x;
    return y;
}

void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;


}

int main() {
    int x;
    int y;
    cin >> x >> y;
    int min = findminimum(x,y);
    cout << min << endl;

    int num = 10;
    int arr[num];
    doSomething(arr[num], num);
    cout << num << endl;
    return 0;
}