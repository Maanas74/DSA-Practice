// Que Link:- https://www.codechef.com/problems/REMISS

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    if(a>b)
	    {
	        cout<<a<<" "<<a+b<<endl;
	    }else{
	        cout<<b<<" "<<a+b<<endl;
	    }
	    
	}
	
	return 0;
}
