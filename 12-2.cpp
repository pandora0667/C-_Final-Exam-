#include <iostream> 
#include <fstream> 
using namespace std; 

int main()
{ 
	ifstream fin; 
	fin.open("student.txt"); 
	if(!fin)
	{
		cout << "No exist File" << endl;
		return 0; 
	} 

	char name[10], dept[20]; 
	int sid; 

	fin >> name; 
	fin >> sid; 
	fin >> dept; 

	cout << name << endl; 
	cout << sid << endl; 
	cout << dept << endl; 
	
	fin.close(); 
}
