#pragma once
#include"Employee.hpp"
#include"EmployeeManager.hpp"

using namespace std;

class Parttime: public EmployeeManager, public Employee {
private:
	double salaryPerHour;
	double hours;
public:
	Parttime();
	Parttime(string name, int id, double salaryPerHour, double hours);
	double getSalaryPerHour();
	void setSalaryPerHour(double salaryPerHour);
	double getHours();
	void setHours(double hours);
	double calculateSalary() override;
	void display() override;
};