// Que Link:-

#include <iostream>
#include <cmath>
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
	        if(n>=2048)
	        {
	           c+=n/2048;
	           n=n%2048; 
	           
	        }else if(n>=1024){
	            
	           c+=n/1024;
	           n=n%1024;
	            
	        }else if(n>=512){
	           c+=n/512;
	           n=n%512;
	           
	        }else if(n>=256){
	           c+=n/256;
	           n=n%256;
	            
	        }else if(n>=128){
	           c+=n/128;
	           n=n%128;
	            
	        }else if(n>=64){
	           c+=n/64;
	           n=n%64; 
	        }else if(n>=32){
	           c+=n/32;
	           n=n%32;
	            
	        }else if(n>=16){
	           c+=n/16;
	           n=n%16;
	           
	        }else if(n>=8){
	           c+=n/8;
	           n=n%8;
	            
	        }else if(n>=4){
	           c+=n/4;
	           n=n%4;
	            
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
