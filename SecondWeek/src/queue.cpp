#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countWorry(const vector<int>& v){
	int n = 0;
	for(int i : v)
		if(i  == 1)
			n += i;
	return n;
}

/*int main(){
	int oper;
	cin>> oper;
	vector<int> queue;
	vector<int> result;
	for(int i = 0; i < oper; i++){
		string command;
		int people;
		cin>>command;
		if(command != "WORRY_COUNT")
			cin>>people;
		if(command == "WORRY")
			queue[people] = 1;
		else{
			if(command == "QUIET")
				queue[people] = 0;
			else{
				if(command == "COME"){
					int count = queue.size() + people;
					if(count >= 0)
						queue.resize(count);
					else
						queue.resize(0);
				}
				else{
					if(command == "WORRY_COUNT"){
						result.push_back(countWorry(queue));
					}
				}
			}
		}

	}
	for(int& i : result)
		cout<<i<<endl;
	return 0;
}
*/
