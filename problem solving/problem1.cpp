#include<iostream>
using namespace std;
int main(){
    int BS,Da,hra,df;
    cout<<"Enter the grade of employee"<<endl;
    char ch;
    cin>>ch;
    cout<<"Enter the basic Salary of the employee"<<endl;
    cin>>BS;
    int allow;
    if(ch=='A'){
        allow=1700;

    }
    else if(ch=='B'){
        allow=1500;
    }
    else {
        allow=1300;
    }
    hra=0.2*BS;
    Da=0.5*BS;
    df=0.11*BS;
    int total=BS+hra+allow-df;
    cout<<total<<endl;

}