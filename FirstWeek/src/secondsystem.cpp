#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	int x;
	vector<int> twonum ={};
	cin>>n;
	while(n !=1){
		x = n % 2;
		twonum.push_back(x);
		n/=2;
	}
	twonum.push_back(1);
	for(int i = 0; i< twonum.size();i++){
		int j=twonum.size()-i-1;
		cout<<twonum[j];
	}
	return 0;
}
