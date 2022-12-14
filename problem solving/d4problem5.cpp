#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int fact=1,sum=0,power=1,s=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        power=power*i;
        sum=sum+(power/fact)*s;
        s=s*-1;
    }
    cout<<sum<<endl;
}
