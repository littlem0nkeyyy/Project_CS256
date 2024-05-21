#pragma once
#include"EmployeeManager.hpp"
#include<string>

using namespace std;

class Boss: public EmployeeManager {
public :
	Boss();
	Boss(string name, int id);
	void display();
};