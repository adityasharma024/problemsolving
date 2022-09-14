#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the sides of triangle"<<endl;
    cin>>side1>>side2>>side3;
    if(side1==side2&&side2==side3){
        cout<<"Equilateral Triangle"<<" ";

    }
    if(((side1==side2)||(side2==side3))&&(side3!=side1)){
        cout<<"isoceles triangle"<<endl;

    }
    else if(side1!=side2&&side2!=side3&&side3!=side1){
        cout<<"scalene Triangle"<<endl;
    }
}