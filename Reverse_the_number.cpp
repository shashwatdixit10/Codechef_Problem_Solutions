#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        int reverse=0,remain;
        cin>>n;
        while(n!=0){
            remain = n%10;
            reverse = reverse *10 + remain;
            n /=10;
        }
        cout<<reverse<<endl;
        
    }
}
