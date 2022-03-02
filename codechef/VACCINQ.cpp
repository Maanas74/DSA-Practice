// Que Link:- https://www.codechef.com/problems/VACCINQ

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n,p,x,y;
	    
	    cin>>n>>p>>x>>y;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    long long int sum=0;
	    for(int i=0;i<p;i++)
	    {
	        if(a[i]==0)
	        {
	            sum+=x;
	        }else{
	            sum+=y;
	        }
	    }
	    
	    cout<<sum<<endl;
	}
	
	return 0;
}
