// Que Link:- 

#include <bits/stdc++.h>
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
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    unordered_set<int> s={1,2,3,4,5,6,7};
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s.find(a[i])!=s.end())
	        {
	            s.erase(a[i]);
	        }
	        c++;
	        if(s.empty())
	        {
	            break;
	        }
	        
	    }
	    cout<<c<<endl;
	}
	
	return 0;
}
