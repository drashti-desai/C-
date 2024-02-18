#include<bits/stdc++.h>
using namespace std;

// Pairs 
void explainPair() {

    pair<int, int> p = {1,3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p1 = {1, {5, 8}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second;

    pair<int, int> arr[] = {{1,2}, {4,7}, {9,0}};

    cout << arr[1].second;


}