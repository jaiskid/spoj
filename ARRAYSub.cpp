#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000001];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int k;
	cin>>k;
	deque<int> Q(k);
	int i;
	for(i=0;i<k;i++){
	while(!Q.empty()&&arr[i]>=arr[Q.back()])
	Q.pop_back();
	Q.push_back(i);
	}
	for(;i<n;i++){
	cout<<arr[Q.front()]<<" ";
	while(!Q.empty()&&(Q.front()<=i-k))
	Q.pop_front();
	while(!Q.empty()&&arr[i]>=arr[Q.back()])
	Q.pop_back();
	Q.push_back(i);
	}
	cout<<arr[Q.front()];
	return 0;
}