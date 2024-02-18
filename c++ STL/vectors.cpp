#include<bits/stdc++.h>
using namespace std;

// Vectors
void explainVectors() {

    vector<int> v;

    v.push_back(1); // add 1 into container
    v.emplace_back(1); // this also add 1 into container

    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2); // syntax is difference, but work same add pairs in container

    vector<int> v(6, 40);

    vector<int> v(5);

    vector<int> v1(5, 20); // 5 times 20 {20,20,20,20,20}
    vector<int> v2(v1); // copy v1 into v2 container

    // it's dynamic in size we add element usinf push_back, emplace_back and it's automatically increase size of vector

    // Access elements in vector

    vector<int>::iterator it = v.begin(); // {20, 10, 15, 6, 7}
    // iterator points directly to the memeory address not element

    it++; // it = pointing to memory, shifted by 1 
    cout << *(it) << " "; // result is 10

    it = it + 2;
    cout << *(it) << " ";

    vector<int> vec1; 
    vector<int> vec2;
    vector<int> vec3;

    vector<int>::iterator it1 = vec1.end();

    vector<int>::iterator it2 = vec2.rend(); // never used generally,  reverse end

    vector<int>::iterator it3 = vec3.rbegin();// '' everything in reverse order


    cout << v[0] << " " << v.at(0);

    cout << v.back() << " "; // {10,20,30} element at 30 = v.back


    for (vector<int>::iterator it = v.begin(); it != v.end(); it++ ) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it : v) { // for each loop 
        cout << it << " ";
    }

    //  how to use iterator in vectore, decalre vectore, print iterator

    // {10, 20, 14, 22}
    


    


}