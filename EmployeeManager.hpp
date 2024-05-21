#pragma once 
#include<string>
#include<ctime>
#include<cstdlib>


using namespace std;

class EmployeeManager {
private:
	string name;
	int id;
public:
	EmployeeManager();
	EmployeeManager(string name, int id);
	void setName(string name);
	string getName();
	void setId(int id);
	int getId();
};