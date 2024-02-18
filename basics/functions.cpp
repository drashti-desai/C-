#include<bits/stdc++.h>
using namespace std;

// why we are using functions 
// 1. Each and evry function we use to perform task 
// 2. Functions are used to modularise code 
// 3. Functions are used to increase readibility of code 
// 4. Functions are usually helps to write reapeated code for one 
// time and we can use that code multiple time 

// Functions types - this functions return nothing
// void 
// return 
// parameterised 
// non perameterised 

void printstring() {
    cout << "Hey Darshti";
}

int getsum(int x, int y) {
    int sum = x + y;
    return sum;
}


int main () {
    printstring();

    int x;
    int y;
    cin >> x >> y;
    int sum = getsum(x,y);
    cout << sum;
    return 0;
}

