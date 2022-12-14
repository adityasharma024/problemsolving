#include<bits/stdc++.h>
using namespace std;
int isPrime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    
    {    
          
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}
void  printprimes(int lowerlimit,int upperlimit){
    if(lowerlimit<=upperlimit){
        if(isPrime(lowerlimit)){
            cout<<lowerlimit<<endl;

        }
        lowerlimit++;
    }
    

}
int main(){
    int m,n;
    cin>>m>>n;
   printprimes(m,n);


}