#pragma once
#include<fstream>
#include<iostream>
#include"Employee.hpp"
#include"EmployeeManager.hpp"
#include "Boss.hpp"
#include"Fulltime.hpp"
#include"Parttime.hpp"

void WriteBossFile(Boss* boss);
void WriteFullFile(Fulltime* fullTime);
void WritePartFile(Parttime* partTime);

