#pragma once
#include<vector>
#include"Employee.hpp"
#include"EmployeeManager.hpp"
//#include"File.hpp"

using namespace std;

class Fulltime: public EmployeeManager, public Employee {
private:
	int count;
	int Rank;
	double salaryPerRank;
public:
	Fulltime();
	Fulltime(string name, int id, int count, int Rank, double salaryPerRank);
	
	// count
	int getCount();
	void setCount(int count);

	// rank
	int getRank();
	void setRank(int Rank);

	// salary
	double getSalaryPerRank();
	void setSalaryPerRank(double salaryPerRank);
	
	// Employee Override
	double calculateSalary() override;
	void display() override;

	// Rank
	bool promote(int count, int Rank);
	bool demote(int count, int Rank, int num);

};