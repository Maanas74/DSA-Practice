// Que Link:- https://www.codechef.com/problems/TRICOIN

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
	    
	    long long int i=1,sum=0;
	    
	    while(n>sum)
	    {
	        sum+=i;
	        if(n>=sum)
	        {
	        i++;
	        }
	    }
	    
	    cout<<i-1<<endl;
	}
	
	return 0;
}
