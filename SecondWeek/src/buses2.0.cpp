/*#include <map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void checkbus(vector<string>& current,map <vector<string>, int>& bus,int& count){
	if(bus.count(current) == 1)
		cout<< "Already exists for "<< bus[current]<< endl;
	else{
		bus[current] = count;
		cout<< "New bus "<< count<<endl;
		count++;
	}
	current.clear();
}

int main(){
	int Q;
	vector<string> current;
	map <vector<string>, int> bus;
	cin >> Q;
	int count = 1;
	for(int i = 1; i <= Q; i++ ){
		int quaty;
		cin>> quaty;
		for(int j = 0; j < quaty; j++){
			string comand;
			cin>> comand;
			current.push_back(comand);
		}
		checkbus(current, bus, count);
	}
	return 0;
}
*/
