// Que Link:- https://www.codechef.com/problems/FLOW005

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    
	    while(n>0)
	    {
	        if(n>=100)
	        {
	           c+=n/100;
	           n=n%100; 
	        }else if(n>=50){
	           c+=n/50;
	           n=n%50;
	            
	        }else if(n>=10){
	           c+=n/10;
	           n=n%10;
	           
	        }else if(n>=5){
	           c+=n/5;
	           n=n%5;
	            
	        }else if(n>=2){
	           c+=n/2;
	           n=n%2;
	            
	        }else{
	           c+=n/1;
	           n=n%1;
	        }
	    }
	    
	    cout<<c<<endl;
	    
	}
	
	return 0;
}
