// Que Link:- https://www.codechef.com/problems/MNMX

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    long long int n;
	    cin>>n;
	    
	    long long int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    long long int min=INT_MAX;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(min>a[i])
	        {
	            min=a[i];
	        }
	    }
	    
	    cout<<(min*(n-1))<<endl;
	    
	}
	return 0;
}
