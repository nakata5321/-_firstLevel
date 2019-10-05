/*#include <iostream>
#include<vector>
#include <string>

using namespace std;

void addJob(vector<vector<string>>& jobs, const int& day, const string& job){
	jobs[day-1].push_back(job);
}

void nextMonth(vector<vector<string>>& jobs, int& numberOfMonth, const vector<int>& months){
	int lastMonth = months[numberOfMonth - 1];
	if(numberOfMonth == 12)
		numberOfMonth = 0;
	numberOfMonth++;
	int currentMonth = months[numberOfMonth - 1];
	if( currentMonth > lastMonth ){
		jobs.resize(currentMonth);
	}
	else{
		vector<vector<string>> stp(currentMonth);
		for(int i = 0; i < currentMonth; i++){
			stp[i] = jobs[i];
		}
		for(int i = 0; i < (lastMonth - currentMonth); i++){
			stp[currentMonth-1].insert(end(stp[currentMonth-1]), begin(jobs[currentMonth + i]), end(jobs[currentMonth + i]));
		}
		jobs.clear();
		jobs = stp;
	}
}

void dumpI(vector<vector<string>>& jobs, const int& day){
	cout<< jobs[day-1].size() << " ";
	for(string& x : jobs[day - 1])
		cout<< x << " ";
	cout<< endl;
}

int main(){
	vector<vector<string>> jobs(31);
	int numberOfMonth = 1;
	vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int Q;
	cin>> Q;
	for(int i = 0; i<Q; i++){
		string command;
		int number;
		string job;
		cin>> command;
		if(command != "NEXT")
			cin>> number;
		if(command == "ADD")
			cin>> job;
		if(command == "ADD"){
			addJob(jobs, number, job);
		}
		else{
			if(command == "NEXT"){
				nextMonth(jobs, numberOfMonth, months);
			}
			else{// command DUMP
				dumpI(jobs, number);
			}
		}
	}
	return 0;
}

*/
