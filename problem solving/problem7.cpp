#include<iostream>
using namespace std;
int main(){
    float temp;
    cout<<"Please enter the temperature recorded"<<endl;
    cin>>temp;
    if(temp<0){
        cout<<"Freezing Weather"<<endl;



    }
    if(temp>=0&&temp<10){
        cout<<"Very cold Weather"<<endl;

    }
    if(temp>=10&&temp<20){
        cout<<"Cool Weather"<<endl;
    }
    if(temp>=20&& temp<30){
        cout<<"Normal Weather"<<endl;
    }
    else if(temp>=30){
        cout<<"Hot weather"<<endl;
    }
}