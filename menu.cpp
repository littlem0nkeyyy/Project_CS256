#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cstdio>
#include<algorithm>
#include"EmployeeManager.hpp"
#include"Employee.hpp"
#include"Boss.hpp"
#include"Fulltime.hpp"
#include"Parttime.hpp"
#include"File.hpp"

using namespace std;

int generatedId(int id) {
	id = 100000 + rand() % 900000;
	return id;
}

int main() {
	cout << "-----------Welcome------------" << endl;
	cout << "1. Add new employee!" << endl;
	cout << "2. Remove employee by Id!" << endl;
	cout << "3. Display information!" << endl;
	cout << "4. Demote/Premote fulltime employee!" << endl; 

	vector<Boss*> b;
	vector<Fulltime*> ft;
	vector<Parttime*> pt;
	
	int choice;
	cout << "Choose your choice: ";
	cin >> choice;
	while (true) {
		if (choice  == 1) {
			cout << "1. Boss!" << endl;
			cout << "2. Fulltime!" << endl;
			cout << "3. Parttime!" << endl;

			int opt1;
			cout << "Please choose your option: ";
			cin >> opt1;
			while (true) {
				string name;
				int id;
				if (opt1 == 1) {
					cout << "Name: ";
					cin >> name;
					cout << "Id: " << generatedId(id);

					Boss* boss = new Boss(name, id);
					b.push_back(boss);

					WriteBossFile(boss);
				}
				else if (opt1 == 2) {
					int count;
					double salaryPerRank;
					cout << "Name: ";
					cin >> name;
					cout << "Id: " << generatedId(id);
					cout << "Count: ";
					cin >> count;
					int Rank;
					cout << "Rank: " << count / 365;
					cout << "SalaryPerRank: ";
					cin >> salaryPerRank;

					Fulltime* f = new Fulltime(name, id, count, Rank, salaryPerRank);
					ft.push_back(f);

					WriteFullFile(f);
				}
				else if (opt1 == 3) {
					double hours;
					double salaryPerHour;
					cout << "Name: ";
					cin >> name;
					cout << "Id: " << generatedId(id);
					cout << "Hour: ";
					cin >> hours;
					cout << "SalaryPerHour: ";
					cin >> salaryPerHour;

					Parttime* p = new Parttime(name, id, salaryPerHour, hours);
					pt.push_back(p);

					WritePartFile(p);
				}
				else {
					break;
				}
			}
		}
		else if (choice == 2) {
			int idRemove;
			cout << "Type id to remove employee: ";
			cin >> idRemove;
			for (int i = 0; i < ft.size(); i++) {
				if (i == idRemove) {
					ft.erase(std::remove_if(ft.begin(), ft.end(), i), ft.end());
				}
			}

			for (int i = 0; i < pt.size(); i++) {
				if (i == idRemove) {
					
					pt.erase(remove_if(pt.begin(), pt.end(), i), pt.end());
				}
			}
			for (int i = 0; i < b.size(); i++) {
				if (i == idRemove) {
					b.erase(remove_if(b.begin(), b.end(), i), b.end());
				}
			}
			cout << "Remove success!" << endl;
		}
		else if (choice == 3) {
			cout << "1. Boss" << endl;
			cout << "2. Fulltime" << endl;
			cout << "3. Parttime" << endl;

			int opt2;
			cout << "Choose your option: ";
			cin >> opt2;

			while (true) {
				if (opt2 == 1) {
					for (int i = 0; b.size(); i++) {
						b[i]->display();
					}
				}
				else if (opt2 == 2) {
					for (int i = 0; ft.size(); i++) {
						ft[i]->display();
					}
				}
				else if (opt2 == 3) {
					for (int i = 0; pt.size(); i++) {
						pt[i]->display();
					}
				}
				else {
					break;
				}
			}
		}
	else if (choice == 4) {
			cout << "1. Premote!" << endl;
			cout << "2. Demote!" << endl;
			int opt3;
			cin >> opt3;
			while (true) {
				if (opt3 == 1) {
					int idpre;
					cout << "Please choose id to premote: ";
					cin >> idpre;
					int counttopremote;
					cin >> counttopremote;
					for (int i = 0; i < ft.size(); i++) {
						if (i == idpre) {
							ft[i]->promote(counttopremote, ft[i]->getRank());
						}
						Fulltime* ft1 = new Fulltime(ft[i]->getName(), ft[i]->getId(), ft[i]->getCount(), ft[i]->getRank(), ft[i]->getSalaryPerRank());
						WriteFullFile(ft1);
					}
				}
				else if (opt3 == 2) {
					int idde;
					cout << "Please choose id to demote: ";
					cin >> idde;
					int indextode;
					cin >> indextode;
					for (int i = 0; ft.size(); i++) {
						if (i = idde) {
							ft[i]->demote(ft[i]->getCount(), ft[i]->getRank(), indextode);
						}
						Fulltime* ft2 = new Fulltime(ft[i]->getName(), ft[i]->getId(), ft[i]->getCount(), ft[i]->getRank(), ft[i]->getSalaryPerRank());
						WriteFullFile(ft2);
					}
				}
				else {
					break;
				}
			}
		}
		else {
			break;
		}
	}
	return 0;
}