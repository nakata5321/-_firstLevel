/*#include<iostream>
#include <map>
#include<string>
#include <vector>

using namespace std;

void newBus(map<string, vector<string>>& buses,map<string, vector<string>>& stops, const int& count, const string& bus){
	for(int i = 0; i < count; i++){
		string stop;
		cin>> stop;
		buses[bus].push_back(stop);
		stops[stop].push_back(bus);
	}
}

void busesForStop(map<string, vector<string>>& stops,const string& stop){
	if(stops.count(stop) == 0)
		cout<< "No stop" << endl;
	else{
		for(const auto& word : stops[stop])
			cout<< word << " ";
		cout<< endl;
	}
}

void stopsForBus(map<string, vector<string>>& buses,map<string, vector<string>>& stops,const string& bus){
	if(buses.count(bus) == 0)
		cout<< "No bus"<< endl;
	else{
		for(const string& word : buses[bus]){
			int countBus = stops[word].size();
			if((countBus == 1) && (stops[word][0] == bus)){
				cout << "Stop " << word <<": ";
				cout << "no interchange"<< endl;
			}
			else{
				cout << "Stop " << word <<": ";
				for(const string& name : stops[word]){
					if(name != bus)
						cout<< name << " ";
				}
				cout<< endl;
			}
		}
	}
}

void allBuses(map<string, vector<string>>& buses){
	if(buses.size() == 0)
		cout<< "No buses"<< endl;
	else{
		for(const auto item : buses){
			cout<< "Bus " << item.first <<": ";
			for( const string& word : item.second)
				cout<< word << " ";
			cout<< endl;
		}
		cout << endl;
	}
}

int main(){
	map <string, vector<string>> buses;
	map <string, vector<string>> stops;
	int Q;
	cin>> Q;
	for(int i = 0; i < Q; i++){
		string command;
		string bus;
		string stop;
		int stopCount;
		cin>> command;
		if(command == "NEW_BUS"){//выполнение команды  NEW_BUS
			cin>> bus >> stopCount;
			newBus(buses, stops, stopCount, bus);
		}
		if(command == "BUSES_FOR_STOP"){//выполнение команды BUSES_FOR_STOP
			cin>> stop;
			busesForStop(stops, stop);
		}
		if(command == "STOPS_FOR_BUS"){//выполнение команды STOPS_FOR_BUS
			cin>> bus;
			stopsForBus(buses, stops, bus);
		}
		if(command == "ALL_BUSES")//команда ALL_BUSES
			allBuses(buses);
	}
	return 0;
}
*/
