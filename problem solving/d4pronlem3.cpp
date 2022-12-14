#include<bits/stdc++.h>
using namespace std;
int factorial(int x,int y){
    if(y==1||y==0){
        return x;
    }
    else{
        factorial(x*y,y-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(1,n)<<endl;

}