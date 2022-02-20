// Que link:- https://www.codechef.com/problems/FLOW016

#include <iostream>
using namespace std;

int gcd(long long int c,long long int d)
{
    if(c==0){
        return d;
    }
    
    if(d==0){
        return c;
    }
    
    if(c>d){
        return gcd(c%d,d);
    }else{
        return gcd(c,d%c);
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    
	    long long int gcd_no=gcd(a,b);
	    long long int lcm_no=((a*b)/gcd_no);
	    
	    cout<<gcd_no<<" "<<lcm_no<<endl;
	}
	
	return 0;
}
