#include"Boss.hpp"
#include<iostream>

using namespace std;

Boss::Boss() {}
Boss::Boss(string name, int id): EmployeeManager(name, id) {
}
void Boss::display() {
	cout << "This is boss information!" << endl;
	cout << "Name: " << Boss::getName() << endl;
	cout << "Id: " << Boss::getId() << endl;
}