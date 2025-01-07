#include<iostream>
using namespace std;

int main()
{
    int r,k=1;
    cout<<"Enter the number of rows "<<endl;
    cin>>r;
    cout<<"the required Floyd'd triangle"<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(j<=i){
                cout<<k<<" ";
                k++;

            }
            else{
                cout<<" ";
            }


        }
        cout<<"\n";
    }
    return 0;
}
// #include<iostream>
// using namespace std;

// int main()
// {
//     int r, k = 1;
//     cout << "Enter the number of rows: ";
//     cin >> r;
//     for (int i = 1; i <= r; i++) {
//         for (int j = 1; j <= r; j++) {
//             if (j <= i) {
//                 cout << k << " ";
//                 k++;
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }
