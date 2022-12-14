#include<bits/stdc++.h>
using namespace std;
int perfect(int m,int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        for(int j=0;j<=i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<perfect(1,n)<<endl;

}