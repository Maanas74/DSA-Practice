#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    cout<<x/y<<endl;
	}
	
	return 0;
}
