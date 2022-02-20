// Que Link:- https://www.codechef.com/problems/FLOW011

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int s;
	    cin>>s;
	    
	    double gross;
	    
	    if(s<1500)
	    {
	        double hra=s*0.1;
	        double da=s*0.9;
	        gross=s+hra+da;
	    }else{
	        double da=s*0.98;
	        gross=s+500+da;
	    }
	    
	    cout<<setprecision(2)<<fixed;
	    cout<<gross<<endl;
	    
	    
	}
	
	return 0;
}
