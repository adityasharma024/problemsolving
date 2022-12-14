#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch=='a','e','i','o','u'){
        cout<<"vowel"<<endl;
    }
    else if(ch!='a','e','i','o','u')
    cout<<"consonent"<<endl;
}