#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0){
	    t--;
	    int n;string s;
	    cin>>n>>s;
	    if(n%2!=0){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    vector <pair<int,int>> v;
	    for(int i='a';i<='z';i++){
	        v.push_back({0,i});
	    }
	    int temp;
	    for(int i=0;i<s.size();i++){
	        temp = s[i];
	        v[(temp-97)].first+=1;
	    }
	    sort(v.begin(),v.end());
	    if(v.back().first>s.size()/2){
	        cout<<"NO"<<endl;
			continue;
	    }
	    cout<<"YES"<<endl;
		char ns[n+1];
		if(ns[n]=='\0') cout<<"true;";
		int i=0;
		bool t = true;
		while(v.size()!=0){
			if(v.back().first==0){break;}
			for(i;i<n && v.back().first!=0;v.back().first-=1){
				ns[i]=v.back().second;
				if (t)i+=1;
				else {i-=1;}
				if(i>=n/2 && t){
				i=n-1;
				t=false;
				}
			}
			v.pop_back();
		}
		// ns[n]='\0';
		if(ns[n]=='\0') cout<<"true;";
		cout<<ns<<endl;
	}
	return 0;
}
