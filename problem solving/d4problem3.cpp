#include<iostream>
using namespace std;
int mean(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum/n;
}
int median(int a[],int n){
   
    if(n%2!=0){
        return a[n/2+1];
            
    }

    
    return a[n/2];
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<mean(a,n)<<endl;
    cout<<median(a,n)<<endl;
}