#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << '*';
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i=0; i<n; i++){
        for (int j=5; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }

    for (int i=0; i<n; i++){
        for (int j=1; j<n-i; j++){
            cout << " ";
        }
        for (int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i=0; i<n; i++){
        
        for (int j=1; j<=i; j++){
            cout << " ";
        }
        for (int j=5; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for (int i=1; i<=n; i++) {
       for (int j=1; j<=n-i; j++) {
            cout << " ";
       }

       for (int k=1; k<=2*i-1; k++) {
            cout << "*";
       }

       for (int j=1; j<=n-i; j++) {
            cout << " ";
       }
       cout << endl;
    }

    cout << endl;

    int i, j, k = n;
    // 2nd logic
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if(j >= k){
                cout << "* ";
            }else{
                cout << " ";
            }
        }
        k--;
        cout << endl;
    }
}

void pattern8(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << " ";
        }

        for (int j=2*n-1; j>=2*i-1; j--) {
            cout << "*";
        }

        for (int j=1; j<=i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;
    int i, j, k = n;
    // 2nd logic
    for (i=0; i<=n; i++) {
        for (j=n; j>=0; j--) {
            if(j >= k){
                cout << " ";
            }else{
                cout << "* ";
            }
        }
        k--;
        cout << endl;
    }
}

void pattern9(int n) {
     for (int i=1; i<=n; i++) {
       for (int j=1; j<=n-i; j++) {
            cout << " ";
       }

       for (int k=1; k<=2*i-1; k++) {
            cout << "*";
       }

       for (int j=1; j<=n-i; j++) {
            cout << " ";
       }
       cout << endl;
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<i; j++) {
            cout << " ";
        }

        for (int j=2*n-1; j>=2*i-1; j--) {
            cout << "*";
        }

        for (int j=1; j<i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    // left wing
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0; i<5; i++){
        for(int j=5; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    // left wing 2nd logic 
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }

    // right wing
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout << " ";
        }
        for(int j=n; j>=i; j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    // right wing 2nd logic 
    // for (int i=1; i<=2*n-1; i++) {
    //     int stars = i;
    //     if(i > n) stars = 2*n - i;
    //     for (int j=n; ) {

    //     }
    // }

}

void butterfly(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=2*n; j>2*i; j--){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout << "*";
        }
        for(int j=1; j<=2*i; j++){
            cout << " ";
        }
        for(int j=n; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n) {
    int start = 1;
    for (int i=1; i<=n; i++){
        if(i%2 == 0) start = 0;
        else start = 1;
        for(int j=1; j<=i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=1; j<=2*(n-i); j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << i;
        }
        cout << endl;
    }
}

void pattern13(int n) {
    int x=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            x = x + 1;
            cout << x << " ";
        }
        cout << endl;
    }
}


void pattern14(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<= 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n) {
    for(int i=n; i>0; i--) {
        for(char ch='A'; ch< 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A' + i;
        for(int j=0; j<=i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern17(int n) {
    for(int i=0; i<n; i++) {
        int lastvalue = 'A'+i;
        for(int j=n; j>i+1; j--) {
            cout << " ";
        }
        for(char ch='A'; ch<=lastvalue; ch++) {
            cout << ch;
        }
        for(char ch=lastvalue-1; ch>='A'; ch-- ) {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern18(int n) {
    for(int i=1; i<=n; i++){
        for(char ch='E'; ch>='E'-(n-i); ch--){
            cout << ch;
        }
        cout << endl;
    }
    cout << endl;
    for(int i=1; i<=n; i++){
        for(char ch='E'; ch>'E'-i; ch--){
            cout << ch;
        }
        cout << endl;
    }
    cout << endl << endl;
    for(int i=1; i<=n; i++){
        char startvalue = 'A'+(n-i);
        // cout << startvalue;
        for(char ch=startvalue; ch<='E'; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern19(int n) {
    for(int i=0; i<=n;i++){
        for(int j=n; j>i; j--){
            cout << " ";
        }
        for(int j=1; j<2*i; j++){
            cout << "*";
        } 
        for(int j=n; j>i; j--){
            cout << " ";
        }
        cout<< endl;
    }
    for(int i=1; i<=n;i++){
        for(int j=1; j<i; j++){
            cout << " ";
        }
        for(int j=2*n; j>=2*i; j--){
            cout << "*";
        } 
        for(int j=1; j<i; j++){
            cout << " ";
        }
        cout<< endl;
    }
}

void pattern20(int n) {
    for(int i=0; i<n;i++){
        for(int j=n; j>i; j--){
            cout << "*";
        }
        for(int j=1; j<=2*i; j++){
            cout << " ";
        } 
        for(int j=n; j>i; j--){
            cout << "*";
        }
        cout<< endl;
    }
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=2*n; j>2*i; j--){
            cout << " ";
        } 
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout<< endl;
    }
}

void rectangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=1; j++){
            cout << "*";
        }
        if(i == 1 || i == n){
            for(int j=1; j<=n-2; j++){
                cout << "*";
            }
        }else{
            for(int j=1; j<=n-2; j++){
                cout << " ";
            } 
        }
        for(int j=1; j<=1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void numbersquare(int n){
    for(int i=0; i<2*n-1; i++){
       for(int j=0; j<2*n-1; j++){
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - i;
            int left = (2*n -2) - j;

            cout << (n - min(min(top,bottom),min(left,right)));
       }
       cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern1(n);
    cout << endl;
    pattern2(n);
    cout << endl;
    pattern3(n);
    cout << endl;
    pattern4(n);
    cout << endl;
    pattern5(n);
    cout << endl;
    pattern6(n);
    cout << endl;
    pattern7(n);
    cout << endl;
    pattern8(n);
    cout << endl;
    pattern9(n);
    cout << endl;
    pattern10(n);
    cout << endl;
    butterfly(n);
    cout << endl;
    pattern11(n);
    cout << endl;
    pattern12(n);
    cout << endl;
    pattern13(n);
    cout << endl;
    pattern14(n);
    cout << endl;
    pattern15(n);
    cout << endl;
    pattern16(n);
    cout << endl;
    pattern17(n);
    cout << endl;
    pattern18(n);
    cout << endl;
    pattern19(n);
    cout << endl;
    pattern20(n);
    cout << endl;
    butterfly(n);
    cout << endl;
    rectangle(n);
    cout << endl;
    numbersquare(n);
    return 0;
}