#include<iostream>
using namespace std;
int series(int n){
   int s=1,sum=0;
   int fact=1;
   for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+i/fact;
        s=s*-1;
        
    }
    cout<<sum<<endl;
   


}
int main(){
    int n;
    cin>>n;
    series(n);

}