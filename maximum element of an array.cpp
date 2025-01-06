#include<iostream>
using namespace std;

int main()
{
    int n,max=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Max value is "<<max;
    
    return 0;
}