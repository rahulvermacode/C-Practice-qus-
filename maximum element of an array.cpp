#include<iostream>
using namespace std;

int main()
{
    int max=0,n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The given array is ";
    cout<<"[ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;

    max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Max value of the given array : "<<max;
    
    
    return 0;
}