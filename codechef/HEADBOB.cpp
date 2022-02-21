//Que Link:- https://www.codechef.com/problems/HEADBOB

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
	    
	    int c=0,d=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='I')
	        {
	            c++;
	        }else if(s[i]=='Y'){
	            d++;
	        }
	    }
	    
	    if(c!=0)
	    {
	        cout<<"INDIAN"<<endl;
	    }else if(d!=0){
	        cout<<"NOT INDIAN"<<endl;
	    }else{
	        cout<<"NOT SURE"<<endl;
	    }
	    
	}
	
	return 0;
}
