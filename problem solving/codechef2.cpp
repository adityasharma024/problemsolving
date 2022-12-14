#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a==0||b==0||c==0||d==0||(a+b)==0)||(a+c)==0||(a+d)==0||(b+c)==0||(b+d)==0||(a+b+c+d)==0||(a+b+c)==0||(a+c+d)==0||(a+b+d)==0||(b+c+d)==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
