#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n<7){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
