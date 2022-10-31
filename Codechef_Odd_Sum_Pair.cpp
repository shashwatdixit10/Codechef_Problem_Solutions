#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int A,B,C;
    for(int i=0;i<t;i++){
        cin>>A>>B>>C;
        if(A%2==0 && B%2==0 && C%2==0){
            cout<<"NO"<<endl;
        }
        else if(A%2!=0 && B%2!=0 && C%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
	
}
