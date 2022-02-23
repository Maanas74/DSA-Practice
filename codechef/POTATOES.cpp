// Que Link:- https://www.codechef.com/problems/POTATOES

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
	    
	    int i=1;
	    int sum=x+y;

	    while(true)
	    {
	        bool flag=true;
	        sum++;
	        
	        for(int j=2;j<=sum/2;j++)
	        {
	            if(sum%j==0)
	            {
	                flag=false;
	                break;
	            }
	        }
	        
	        if(flag)
	        {
	            break;
	        }
	        i++;
	        
	    }
	    
	    cout<<i<<endl;
	    
	}
	
	return 0;
}
