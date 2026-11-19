#include <iostream>
#include <fstream>
#include <string>
#include "FileCreator.h"

int main()
{
	string filename;
	cout << "Enter the name of the file to create: ";
	getline(cin, filename);
	
	FileCreator File(filename);
	File.WriteHeader();

	for (int i = 0; i < 5; i++)
	{
		string storename;
		double jan, feb, mar, apr;

		cout << "Enter the store name: ";
		getline(cin >> ws, storename);

		cout << "Enter the sales for January: ";
		cin >> jan;

		cout << "Enter the sales for February: ";
		cin >> feb;

		cout << "Enter the sales for March: ";
		cin >> mar;

		cout << "Enter the sales for April: ";
		cin >> apr;	


		File.WriteFile(storename, jan, feb, mar, apr);
		cin.ignore();
	}
	File.CloseFile();
	cout << "Successfully created the file: " << filename << endl;

}