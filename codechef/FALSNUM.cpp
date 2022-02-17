// Que link:- https://www.codechef.com/problems/FALSNUM

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    
	    if(s[0]=='1')
	    {
	        s="10"+s.substr(1,s.length());
	    }else{
	        s="1"+s;
	    }
	    cout<<s<<endl;
	}
	
	return 0;
}
