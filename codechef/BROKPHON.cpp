//Que Link:- https://www.codechef.com/problems/BROKPHON

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
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int c=-2,d=0;
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]!=a[i+1] && c!=i-1)
	        {
	            d+=2;
	            c=i;
	        }else if(a[i]!=a[i+1]){
	            d++;
	            c=i;
	        }
	    }
	    
	    cout<<d<<endl;
	    
	}
	
	return 0;
}
