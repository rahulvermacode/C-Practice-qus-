#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter the charracter"<<endl;
    cin>>c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        cout<<"it's a vowel"<<endl;
    }
    else{
        cout<<"it's a consonant";
    }
    return 0;
}