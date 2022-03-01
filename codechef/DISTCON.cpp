// Que Link:- https://www.codechef.com/LTIME105C/problems/DISTCON

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int d;
	cin>>d;
	
	if(d%2!=0)
	{
	    cout<<-1<<endl;
	}else{
	    
	    int P[4][2]={{0,0},{1,1},{1,-1},{2,0}};
	    
	    d=d/2;
	    
	    for(int i=0;i<4;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	            P[i][j]*=d; 
	            cout<<P[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    
	}
	
	return 0;
}
