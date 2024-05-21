#pragma once

using namespace std;

class Employee {
public:
	virtual void display();
	virtual double calculateSalary() = 0;
};