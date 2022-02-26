// Que Link:- https://www.codechef.com/problems/EVENPSUM 

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--){
        
        long long int a,b;
        cin>>a>>b;
        
        if(a%2!=0 && b%2!=0)
        {
            cout<<((a*b)+1)/2<<endl;
        }else{
            cout<<(a*b)/2<<endl;
        }
        
    }
    
	return 0;
}
