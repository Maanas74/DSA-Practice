// Que Link:- https://www.codechef.com/problems/DIET

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    long long int sum=0,c=0;
	    for(int i=0;i<n;i++)
	    {
	        if((sum+a[i])<k)
	        {
	            c=i+1;
	            break;
	        }else{
	            sum+=a[i]-k;
	        }
	    }
	    
	    if(c==0)
	    {
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<" "<<c<<endl;
	    }
	    
	}
	
	return 0;
}
