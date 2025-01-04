#include<iostream>
using namespace std;

int main()
{ 
    int year;
    cout<<"Enter the year";
    cin>>year;
    if(year%400==0 && year%4==0 && year%100==0){
        cout<<"thise is a leap year";
    }
    else if(year%400!=0 && year%100==0 &&year%4==0){
        cout<<"Not a leap year";
    }
    else if(year%400!=0 && year%100!=0 && year%4==0){
        cout<<"leap year";
    }
    else{
        cout<<"theis is not a leap year";
    }








    return 0;
}
// #include <iostream>

// using namespace std;

// bool isLeapYear(int year) {
//     // A year is a leap year if:
//     // 1. It is divisible by 4 and not divisible by 100, OR
//     // 2. It is divisible by 400
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     int year;

//     cout << "Enter a year: ";
//     cin >> year;

//     if (isLeapYear(year)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }
