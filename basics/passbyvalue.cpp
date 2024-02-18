#include<bits/stdc++.h>
using namespace std;

void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void changeString(string s) {
    int len = s.size();
    s[len-1] = 'x';
    cout << s << endl;
}

int main() {
    int num = 10;
    // string s = 'Drashti';
    doSomething(num);
    // changeString(s);
    cout << num << endl;
    // cout << s << endl;
    return 0;
}