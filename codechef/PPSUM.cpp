// Que Link:- https://www.codechef.com/problems/PPSUM

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int d,n;
	    cin>>d>>n;
	    
	    int sum=0,z=n;
	    for(int i=0;i<d;i++)
	    {
	        sum=0;
	        for(int i=1;i<=z;i++)
	        {
	            sum+=i;
	        }
	        z=sum;
	    }
	    
	    cout<<sum<<endl;
	}
	
	return 0;
}
