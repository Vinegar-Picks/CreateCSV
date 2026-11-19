#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class FileCreator
{
private:
	ofstream MyFile;
public:
	FileCreator(string filename);
	void WriteFile(string , double , double, double, double);
	void WriteHeader();
	void CloseFile();
};

