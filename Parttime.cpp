#include<iostream>
#include"Parttime.hpp"

using namespace std;

Parttime::Parttime() {}
Parttime::Parttime(string name, int id, double salaryPerHour, double hours): EmployeeManager(name, id) {
	this->salaryPerHour = salaryPerHour;
	this->hours = hours;
}
double Parttime::getSalaryPerHour() {
	return salaryPerHour;
}
void Parttime::setSalaryPerHour(double salaryPerHour) {
	this->salaryPerHour = salaryPerHour;
}
double Parttime::getHours() {
	return hours;
}
void Parttime::setHours(double hours) {
	this->hours = hours;
}
double Parttime::calculateSalary() {
	return hours * salaryPerHour;
}
void Parttime::display() {
	cout << "Name: " << Parttime::getName() << endl;
	cout << "Id: " << Parttime::getId() << endl;
	cout << "Hours: " << hours << endl;
	cout << "Salary: " << Parttime::calculateSalary() << endl;
}