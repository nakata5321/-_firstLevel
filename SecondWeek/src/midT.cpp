#include <iostream>
#include<vector>

using namespace std;

/*int main(){
	int qty_days, count = 0, sum = 0;
	vector<int> findDays;
	cin>> qty_days;
	vector<int> temperature(qty_days);
	for(int i = 0; i<qty_days; i++){
		cin>>temperature[i];
		sum+=temperature[i];
	}
	int midTemp = sum/qty_days;
	for(int i = 0; i<qty_days; i++){
		if(temperature[i] > midTemp){
			count ++;
			findDays.push_back(i);
		}
	}
	cout<< count << endl;
	for(int& i : findDays)
		cout<< i << " ";
	return 0;
}
*/
