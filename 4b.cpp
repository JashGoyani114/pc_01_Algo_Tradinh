#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
   
int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	v.push_back(x);
}
vector<int> diff;
for(int i=1;i<n;i++){
	diff.push_back(v[i]-v[i-1]);
}

	int profit=0;
	vector<int> b,s;
	bool bought=false;
	
for(int i=0;i<diff.size();i++){
	if(diff[i]>0){
		profit+=diff[i];
	}
	if(diff[i]>0){
		b.push_back(v[i]);
		s.push_back(v[i+1]);
	}
}
cout<<profit;

return 0;
}