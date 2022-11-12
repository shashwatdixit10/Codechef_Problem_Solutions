#include <iostream>
using namespace std;

int main() {
int t,x,y;
cin>>t;
for(int i=0;i<t;i++){
    cin>>x>>y;
    if(x==y || x<y){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
	return 0;
}
