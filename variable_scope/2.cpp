#include <iostream>

using namespace std;



int main() {

	// your code goes here

	int t; cin>>t;

	while(t--) {

	    string a; cin>>a;

	    int cnt1=0;int cnt0=0;

	    for(int i=0;i<a.size();i++) {

	        if(a[i]&1==1) cnt1++;

	        

	        else cnt0++;

	        //cout<<cnt1<<" "<<cnt0<<endl;

	    }

	    if(cnt1==1||cnt0==1) 

	    cout<<"Yes"<<endl;

	    else cout<<"No"<<endl;

	}

	return 0;

}

