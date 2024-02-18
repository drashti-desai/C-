#include<bits/stdc++.h>
using namespace std;

int main() {
    // write program to get number is even or odd
    int num;
    cin >> num;
  
    if(num % 2 == 0){
        cout << "Number is even";
    }else{
        cout << "Number is Odd";
    }

    // Write a program to person is eligible to get driving licence or not 
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "Person is eligible for issuing driving licence";
    }else if(age < 18) {
        cout << "Person isn't eligible to apply for driving licence";
    }

    // Write a program for school grading system 
    //  Below 25 - 'F'
    //  25 to 44 - 'E'
    //  45 to 59 - 'D'
    //  59 to 65 - 'C'
    //  65 to 79 - 'B'
    //  80 to 100 - 'A'
    // Ask user to enter marks and give grades correspondly
    int marks;
    cin >> marks;

    if(marks < 25) {
        cout << "Grade F";
    }else if(25 <= marks <= 44) {
        cout << "Grade E";
    }else if(44 < marks <= 59) {
        cout << "Grade D";
    }else if(59 < marks <= 65) {
        cout << "Grade C";
    }else if(65 < marks <= 79) {
        cout << "Grade B";
    }else if(80 <= marks <= 100) {
        cout << "Grade A";
    }

    // Take age from user and decide eligibility for job 
    int age;

    if(age < 18){
        cout << "Not eligible for job";
    }else if(age <= 57){
        cout << "Eligible for job";
        if(age >= 55){
            cout << ", but retirement soon";
        }
    }else{
        cout << "retirement time";
    }
    
    return 0;

}