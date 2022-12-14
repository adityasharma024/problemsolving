#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    int sum=0;
    cout<<"The number of terms:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=fact(i);
    }
    cout<<"The sum is:"<<sum;
}