#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n<=100){
            cout<<n<<endl;
        }
        else{
            cout<<n-10<<endl;
        }
    }
	return 0;
}
