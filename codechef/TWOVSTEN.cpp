//Que Link:- https://www.codechef.com/problems/TWOVSTEN

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
	    
	    if(n%10==0){
	        cout<<0<<endl;
	    }else if(n%5==0){
	        cout<<1<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
	
	return 0;
}
