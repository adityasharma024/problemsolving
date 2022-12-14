#include<iostream>
#include<math.h>
using namespace std;
/*int summation(int x,int n){
    int total=0;
    for(int i=1;i<=n;i++){
         total=total+pow(x,i)/i;
    }
    return total;
}*/
int main(){
    int x,n;
    cout<<"Enter the values of X and N"<<endl;
    cin>>x>>n;
    int sum=1;
    int fact=1;
    int power=1;
    int s=1;
    for(int i=1;i<=2*n-1;i++){
        fact*=i;
        power=power*x;
        if(i%2!=0){
            sum+=sum+(power/fact)*s;
            s=s*-1;
        }
    }
    cout<<sum<<endl;
}