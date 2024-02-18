#include<bits/stdc++.h>
using namespace std;

// pattern5(int n) {
//     for (int i=0; i<n; i++){
//         for (int j=n; j>i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

int main() {
    // int n;
    // cin >> n;
    
    // pattern5(n);

    // for (int i=0; i<5; i++){
    //     for (int j=5; j>i; j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<5; i++){
        for(int j=5; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }
     
    // for (int i=1; i<=5; i++) {
    //     for (int j=5; j<0; j++) {
    //         // cout << " ";
    //         for (int k=1; k<=5-i+1; k++) {
    //             cout << "*";
    //         }
    //         // cout << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
