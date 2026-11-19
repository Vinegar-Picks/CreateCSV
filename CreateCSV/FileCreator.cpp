#include <iostream>
#include <fstream>
#include <string>
#include "FileCreator.h"

FileCreator::FileCreator(string filename)
{
	MyFile.open(filename + ".csv");
}	
void FileCreator::WriteFile(string storename, double jan, double feb, double mar, double apr)
{
	double total = jan + feb + mar + apr;
	MyFile << storename << "," << jan << "," << feb << "," << mar << "," << apr << "," << total << endl;
}
void FileCreator::WriteHeader()
{
	MyFile << "Store Name, January, February, March, April,Total" << endl;
}
void FileCreator::CloseFile()
{
	MyFile.close();
}