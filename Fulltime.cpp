#include<iostream>
#include"Fulltime.hpp"


using namespace std;

Fulltime::Fulltime() {}
Fulltime::Fulltime(string name, int id, int count, int Rank, double salaryPerRank): EmployeeManager(name, id) {
	this->count = count;
	this->Rank = Rank;
	this->salaryPerRank = salaryPerRank;
}
int Fulltime::getCount() {
	return count;
}
void Fulltime::setCount(int count) {
	this->count = count;
}
int Fulltime::getRank() {
	return Rank;
}
void Fulltime::setRank(int Rank) {
	this->Rank = Rank;
}
double Fulltime::getSalaryPerRank() {
	return salaryPerRank;
}
void Fulltime::setSalaryPerRank(double salaryPerRank) {
	this->salaryPerRank = salaryPerRank;
}
double Fulltime::calculateSalary() {
	return double(Rank) * 8 * salaryPerRank;
}
void Fulltime::display() {
	cout << "This is fulltime employee information!" << endl;
	cout << "Name: " << Fulltime::getName() << endl;
	cout << "Id: " << Fulltime::getId() << endl;
	cout << "Rank: " << Fulltime::getRank() << endl;
	cout << "Salary: " << Fulltime::calculateSalary() << endl;
}

bool Fulltime::promote(int count, int Rank) {
	if (count < 0 && Rank < 0) {
		return false;
	}
	else {
		int result = count / 356;
		Rank = Rank + result;
		Fulltime::setRank(Rank);
	}
	return true;
}

bool Fulltime::demote(int count, int Rank, int num) {
	if (count < 0 && Rank < 0) {
		return false;
	}
	else {
		count = count - 356 * num;
		Rank = Rank - num;
	}
	Fulltime::setCount(count);
	Fulltime::setRank(Rank);
	return true;
}