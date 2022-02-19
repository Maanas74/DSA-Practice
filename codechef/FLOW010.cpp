// Que Link:- https://www.codechef.com/problems/FLOW010

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    char a;
	    cin>>a;
	    
	    if(a=='B' || a=='b')
	    {
	        cout<<"BattleShip"<<endl;
	    }else if(a=='C' || a=='c'){
	        cout<<"Cruiser"<<endl;
	    }else if(a=='D' || a=='d'){
	        cout<<"Destroyer"<<endl;
	    }else{
	        cout<<"Frigate"<<endl;
	    }
	    
	}
	
	return 0;
}
