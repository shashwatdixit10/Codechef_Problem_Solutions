#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,A,B,C;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>A>>B>>C;
        if(A+B==C){
            cout<<"Yes"<<endl;
        }
        else if(A+C==B){
            cout<<"Yes"<<endl;
        }
        else if(B+C==A){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

	return 0;
}
