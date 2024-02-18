#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Drashti";
    cout << s[0];
    int len = s.size();
    s[len-1] = 'x';
    cout << " updated string " << s;
    return 0;
}