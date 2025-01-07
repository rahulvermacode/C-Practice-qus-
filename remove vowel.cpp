// #include<iostream>
// using namespace std;

// int main()
// {
//     char str[100];
//     cout<<"enter the string"<<endl;
//     cin.get(str,100);
//     cout<<str;

//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    cout<<"After removing vowels your strig become: ";
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='A'){
            continue;
        }
        else if (str[i]=='e'||str[i]=='E'){
            continue;
        }
        else if (str[i]=='i'||str[i]=='I'){
            continue;
        }
        else if (str[i]=='o'||str[i]=='O')
        {
            continue;
        }
        else if (str[i]=='u'||str[i]=='U')
        {
            continue;
        }
        else{
            cout<<str[i];
        }

    }
    return 0;
}
