#include <iostream>
using namespace std;

int main() {
    int t,a,b,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>x>>y;
        if(b-a>=0 && x>=b-a){
            cout<<"Yes"<<endl;
        }
        else if(b-a<=0 && y>=abs(b-a)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
