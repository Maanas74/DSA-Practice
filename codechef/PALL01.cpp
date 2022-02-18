// Que Link:- https://www.codechef.com/problems/PALL01

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int c=n,sum=0;
	    
	    while(n>0)
	    {
	        sum=(sum*10)+n%10;
	        n=n/10;
	    }
	    
	    if(sum==c)
	    {
	        cout<<"wins"<<endl;
	    }else{
	        cout<<"loses"<<endl;
	    }
	    
	}
	
	return 0;
}
