// Que Link:- https://www.codechef.com/problems/FLOW009

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int q,p;
	    cin>>q>>p;
	    
	    double total=q*p;
	    
	    if(q>=1000)
	    {
	        total=total-(total*0.1);
	    }
	        
	    cout<<setprecision(10)<<fixed;
	    cout<<total<<endl;
	}
	
	return 0;
}
