// Que Link:- https://www.codechef.com/problems/MISSP

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    unordered_set<int> a;
	    int n;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a.empty())
	        {
	            int b;
	            cin>>b;
	            a.insert(b);
	        }else{
	            int c;
	            cin>>c;
	            if(a.find(c)==a.end())
	            {
	                a.insert(c);
	            }else{
	                a.erase(c);
	            }
	        }
	    }
	    
	    unordered_set<int> :: iterator i;
	    
	    for(i=a.begin();i!=a.end();i++)
	    {
	        cout<<*i<<endl;
	    }
	    
	}
	
	return 0;
}
