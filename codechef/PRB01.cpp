// Que Link:- https://www.codechef.com/problems/PRB01

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    
	    bool flag=true;
	    
	    for(long long int i=2;i<n;i++)
	    {
	        if(n%i==0)
	        {
	            flag=false;
	            break;
	        }
	    }
	    
	    if(n==1)
	    {
	        cout<<"no"<<endl;
	    }else if(flag)
	    {
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    
	}
	
	return 0;
}
