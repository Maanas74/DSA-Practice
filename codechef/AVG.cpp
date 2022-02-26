// Que Link:- https://www.codechef.com/problems/AVG

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k,v;
	    cin>>n>>k>>v;
	    
	    long long int sum=0;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    
	    n=n+k;
	    v=v*n;
	    
	    v=v-sum;
	    
	    if(v<=0 || v%k!=0)
	    {
	        cout<<-1<<endl;
	    }else{
	        cout<<v/k<<endl;
	    }
	    
	    
	}
	
	return 0;
}
