// Que Link:- https://www.codechef.com/problems/EXAMTIME

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3],b[3];
	    int total1=0,total2=0;
	    
	    for(int i=0;i<3;i++)
	    {
	        cin>>a[i];
	        total1+=a[i];
	    }
	    
	    for(int i=0;i<3;i++)
	    {
	        cin>>b[i];
	        total2+=b[i];
	    }
	    
	    
	    if(total1<total2){
	        cout<<"SLOTH"<<endl;
	    }else if(total1>total2){
	        cout<<"DRAGON"<<endl;
	    }else{
	        
	        bool flag=true;
	        
	        for(int i=0;i<3;i++)
	        {
	            if(a[i]<b[i])
	            {
	                flag=false;
	                cout<<"SLOTH"<<endl;
	                break;
	            }else if(a[i]>b[i]){
	                flag=false;
	                cout<<"DRAGON"<<endl;
	                break;
	            }
	        }
	        
	        if(flag)
	        {
	            cout<<"TIE"<<endl;
	        }
	        
	    }
	    
	}
	
	return 0;
}
