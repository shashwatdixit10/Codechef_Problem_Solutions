#include <iostream>
using namespace std;
#define mod 998244353

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long a;
        cin>>a;
        
        long long b=0;
        for(int i=0;i<a;i++){
            long long s;
            cin>>s;
           b += s;
           b=b%mod;
        }
        b=b*(b-1);
        b=b%mod;
        cout<<b<<endl;
    }
	return 0;
}
