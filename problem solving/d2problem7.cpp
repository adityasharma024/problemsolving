#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++)
        {
            for(j=1;j<=4-i;j++)
            {
                cout<<" ";
            }
            for(j=i;j>0;j--)
            {
                cout<<"*";
        
            }
            for(j=2;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
}