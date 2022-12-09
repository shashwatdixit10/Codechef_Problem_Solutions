#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    map<char, int>m;
	    int temp=0;
	    if((str.length())%2==1)
	    cout<<"No"<<endl;
	    else{
	        for(int i=0; i<str.length(); i++){
	            m[str[i]]++;
	        }
	        for(auto i:m){
	            if(i.second%2){
	                temp=1;
	                cout<<"No"<<endl;
	                break;
	            }
	        }
	        if(!temp)
	        cout<<"Yes"<<endl;
	        
	    }
	}
	return 0;
}
