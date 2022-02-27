// Que Link:- 

#include <iostream>
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
	    int n=s.length();
	    if(n==1)
	    {
	        cout<<"YES"<<endl;
	    }else{
	    string l="",r="";
	    int i=1,j=n-1;
	    while(l.length()<n)
	    {
	        l+=s[i];
	        r+=s[j];
	        if(i==(n-1))
	        {
	            i=0;
	        }else{
	            i++;
	        }
	        if(j==(n-1)){
	            j=0;
	        }else{
	            j++;
	        }
	    }
	    
	    if(l==r)
	    {
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    }
	}
	
	return 0;
}
