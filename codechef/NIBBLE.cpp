// Que Link:- https://www.codechef.com/LTIME105C/problems/NIBBLE

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
	    
	    if(n%4==0)
	    {
	        cout<<"Good"<<endl;
	    }else{
	        cout<<"Not Good"<<endl;
	    }
	}
	
	return 0;
}
