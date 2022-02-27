// Que Link:- https://www.codechef.com/problems/SC31

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
	    
	    string s[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=0;j<10;j++)
	        {
	         if(s[i][j]==s[i+1][j])
	         {
	             s[i+1][j]='0';
	         }else{
	             s[i+1][j]='1';
	         }
	        }
	    }
	    
	    int c=0;
	    for(int i=0;i<10;i++)
	    {
	        if(s[n-1][i]=='1')
	        {
	            c++;
	        }
	    }
	    
	    cout<<c<<endl;
	    
	}
	
	return 0;
}
