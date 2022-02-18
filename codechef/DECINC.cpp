// Que Link:- https://www.codechef.com/problems/DECINC

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
	cin>>n;
	    
	if(n%4==0)
	{
	    n++;
	    cout<<n<<endl;
	}else{
	    n--;
	    cout<<n<<endl;
	}
	
	return 0;
}
