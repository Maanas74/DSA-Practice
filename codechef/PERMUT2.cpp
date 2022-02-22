//Que Link:- https://www.codechef.com/problems/PERMUT2

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	while(n!=0){
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int b[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        b[a[i]-1]=i+1;
	    }
	    
	    bool flag=false;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=b[i])
	        {
	            flag=true;
	            break;
	        }
	    }
	    
	    if(flag)
	    {
	        cout<<"not ambiguous"<<endl;
	    }else{
	        cout<<"ambiguous"<<endl;
	    }
	    
	    cin>>n;
	    
	}
	
	
	return 0;
}
