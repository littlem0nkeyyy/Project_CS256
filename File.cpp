#include<fstream>
#include<iostream>
#include"File.hpp"

using namespace std;

void WriteBossFile(Boss* boss) {
	string name = boss->getName();
	int id = boss->getId();

	string idStr = to_string(id);
	
	string filePath = "Boss/" + idStr + ".txt";

	ofstream file(filePath);

	file << name << endl;
	file << idStr << endl;

	file.close();
}
void WriteFullFile(Fulltime* fullTime) {
	string name = fullTime->getName();
	int id = fullTime->getId();
	int count = fullTime->getCount();
	int Rank = fullTime->getRank();
	double salaryPerRank = fullTime->getSalaryPerRank();

	string idStr = to_string(id);

	string filePath = "Fulltime/" + idStr + ".txt";

	ofstream file(filePath);

	file << name << endl;
	file << idStr << endl;
	file << count << endl;
	file << Rank << endl;
	file << salaryPerRank << endl;

	file.close();
}
void WritePartFile(Parttime* partTime) {
	string name = partTime->getName();
	int id = partTime->getId();
	int hours = partTime->getHours();
	double salaryPerHour = partTime->getSalaryPerHour();

	string idStr = to_string(id);

	string filePath = "Parttime/" + idStr + ".txt";

	ofstream file(filePath);

	file << name << endl;
	file << idStr << endl;
	file << hours << endl;
	file << salaryPerHour << endl;

	file.close();
}