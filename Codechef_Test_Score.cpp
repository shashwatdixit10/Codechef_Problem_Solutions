#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    int N,X,Y;
    for(int i=0;i<t;i++){
        cin>>N>>X>>Y;
        if(X>Y && Y!=0){
            cout<<"NO"<<endl;
        }
        else if(X>Y && Y==0){
            cout<<"YES"<<endl;
        }
        else if(X==0 && Y==0){
            cout<<"YES"<<endl;
        }
        else if(X<=Y && Y%X==0){
            cout<<"YES"<<endl;
        }
        else if(X<=Y && Y%X!=0){
            cout<<"NO"<<endl;
        }
        }
    
	return 0;
}
