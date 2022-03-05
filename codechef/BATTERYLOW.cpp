// Que Link:- https://www.codechef.com/problems/BATTERYLOW

#include <iostream>
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
	    
	    if(n<=15)
	    {
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	    
	}
	
	return 0;
}
