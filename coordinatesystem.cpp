#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the values of xand y"<<endl;
    cin>>x>>y;
    if(x>0&&y>0){
        cout<<"first quadrent"<<endl;
    }
    if(x<0&&y>0){
        cout<<"secod quadrent"<<endl;
    }
    if(x<0&&y<0){
        cout<<"Third quadrent"<<endl;
    }
    if(x>0&&y<0){
        cout<<"fourth quadrent"<<endl;
    }

}