// Que Link:-https://www.codechef.com/FEB222C/problems/XORPAL/


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
	    string s;
	    cin>>s;
	    
	    if(n==2 || n%2!=0)
	    {
	        cout<<"YES"<<endl;
	    }else{
	        
	        int c=0,d=0;
	        
	        for(int i=0;i<n;i++)
	        {
	            if(s[i]=='0')
	            {
	                c++;
	            }else{
	                d++;
	            }
	        }
	        
	        if(c==d || (c%2==0 && d%2==0)){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	
	return 0;
}
