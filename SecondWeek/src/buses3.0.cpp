/*#include <map>
#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

void checkbus(set<string>& current,map <set<string>, int>& bus,int& count){
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
	set<string> current;
	map <set<string>, int> bus;
	cin >> Q;
	int count = 1;
	for(int i = 1; i <= Q; i++ ){
		int quaty;
		cin>> quaty;
		for(int j = 0; j < quaty; j++){
			string comand;
			cin>> comand;
			current.insert(comand);
		}
		checkbus(current, bus, count);
	}
	return 0;
}
*/
