#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,k;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i<n;i++){
        for(k=2;k<i;k++){

            if(i%k==0){
                cout<<"";
                break;

            }
        }
        if(k==i){
            cout<<k<<endl;
            }
    }

    
    
    return 0;
}