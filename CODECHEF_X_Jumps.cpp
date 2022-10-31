#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x,y,z,w;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        z=x/y;
        w=x%y;
        cout<<z+w<<endl;
    }
	return 0;
}
