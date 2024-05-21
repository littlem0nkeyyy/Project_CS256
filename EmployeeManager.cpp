#include<iostream>
#include"EmployeeManager.hpp"

using namespace std;

EmployeeManager::EmployeeManager() {}
EmployeeManager::EmployeeManager(string name, int id) {
	this->name = name;
	this->id = id;
}
void EmployeeManager::setName(string name) {
	this->name = name;
}
string EmployeeManager::getName() {
	return name;
}
void EmployeeManager::setId(int id) {
	this->id = id;
}
int EmployeeManager::getId() {
	return id;
}
