#include <iostream>
using namespace std;

int main() {
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        if(z>=y){
            cout<<x<<endl;
        }
        else if((y%z)==0){
            cout<<x*(y/z)<<endl;
        }
        else{
            cout<<((y/z)+1)*x<<endl;
        }
    }
	return 0;
}
