#include<iostream>
using namespace std;
long long int marbles(int n,int m){
	if(m>n-m)
	m=n-m;
	long long int ans=1;
	for(int i=0;i<m;i++){
	ans=ans*(n-i)/(i+1);
	}
	return ans;
}
int main(){
	int t;cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	cout<<marbles(n-1,m-1)<<endl;
	}
}