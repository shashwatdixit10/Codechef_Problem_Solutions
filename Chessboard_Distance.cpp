#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,z,x,c,v,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>z>>x>>c>>v;
        a=abs(z-c);
        b=abs(x-v);
        if(a>b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
	return 0;
}
