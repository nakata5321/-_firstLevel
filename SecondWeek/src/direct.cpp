/*#include<iostream>
#include <map>
#include<string>

using namespace std;

void change_capital(map<string, string>& direct,const string& country, const string& city){
	if(direct.count(country) == 0){//страны не сущ.
		direct[country] = city;
		cout<< "Introduce new country " << country << " with capital " << city << endl;
	}
	else{//страна сущ.
		if(direct[country] == city)// то же название
			cout<< "Country " << country << " hasn't changed its capital" << endl;
		else{//новое название
			string old_cap = direct[country];
			direct[country] = city;
			cout<< "Country " << country <<  " has changed its capital from ";
			cout<< old_cap << " to " << city << endl;
		}
	}
}

void rename_country(map<string, string>& direct, const string& old_country_name, const string& new_country_name){
	if((new_country_name == old_country_name) || (direct.count(old_country_name) == 0) || (direct.count(new_country_name) == 1))
		cout<< "Incorrect rename, skip" << endl;
	else{
		direct[new_country_name] = direct[old_country_name];
		direct.erase(old_country_name);
		cout<<"Country " << old_country_name << " with capital " << direct[new_country_name];
		cout<<" has been renamed to "<< new_country_name << endl;
	}
}

void about_country(map<string, string>& direct, const string& country){
	if(direct.count(country) == 0)
		cout<< "Country " << country << " doesn't exist" << endl;
	else
		cout<< "Country " << country << " has capital " << direct[country] << endl;
}

void dump(const map<string, string>& direct){
	if(direct.size() == 0)
		cout<<"There are no countries in the world" << endl;
	else{
		for(const auto& m : direct){
			cout<< m.first << "/" << m.second << " ";
		}
		cout << endl;
	}
}

int main(){
	map <string, string> countries;
	int Q;
	cin>> Q;
	for(int i = 0; i < Q; i++){
		string command;
		string country;
		string capital;
		string new_name, old_name;
		cin>> command;
		if(command == "CHANGE_CAPITAL"){//выполнение команды CHANGE_CAPITAL
			cin>> country >> capital;
			change_capital(countries, country, capital);
		}
		if(command == "RENAME"){//выполнение команды RENAME
			cin>> old_name >> new_name;
			rename_country(countries, old_name, new_name);
		}
		if(command == "ABOUT"){//выполнение команды ABOUT
			cin>> country;
			about_country(countries, country);
		}
		if(command == "DUMP")//команда dump
			dump(countries);
	}
	return 0;
}
*/
