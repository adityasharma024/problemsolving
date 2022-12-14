#include<iostream>
using namespace std;
/*int pallindrome(int n){
    int sum=0;
    while(n!=0){
        int r=n%10;
        sum=sum*10+r;
        n=n/10;
        
    }
    return sum;
} */

// by tail recursion
int pallindrome(int m,int r,int n){
    if((m==r)&&(n==0)){
        return(1);
    }
    if((m!=r)&&(n==0)){
        return(0);
        
    }
    pallindrome(m,r*10+n%10,n/10);
    

}


int main(){
    int n;
    cin>>n;
    cout<<pallindrome(n,0,n);

}