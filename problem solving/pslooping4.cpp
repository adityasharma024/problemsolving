#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    char ch;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            ch='E'-(i-j-2);
            
            cout<<ch<<" ";
            ch--;
            
            
            

            
            
           
            
        }
        
        cout<<endl;
    }
   
    
}