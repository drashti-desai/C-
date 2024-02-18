#include<bits/stdc++.h>
using namespace std;

int main(){
    // // for loop 
    // int n;
    // cin >> n;
    // for(int i =1; i<=n; i++){
    //     cout << "Drashti " << i << endl;
    // }
    // return 0;

    // for(int i =5; i>0; i--){
    //     cout << i << endl;
    // }

    int i1 = 5;
    while(i1>0){
        cout << i1 << endl;
        i1--;
    }

    int i2 = 5;
    do {
        cout << "print once before check condition " << i2 << endl;
        i2--;
    }while(i2>3);

    return 0;

}