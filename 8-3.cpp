#include <iostream> 
#include <string> 
using namespace std; 

class TV { 
	int size; 
public : 
	TV() { size = 20; } 
	TV(int size) { this -> size = size; } 
	int getSize() { return size; } 
}; 

class WideTV : public TV { 
	bool videoIn; 
public : 
	WideTV(int size, bool videoIn) : TV(size) { 
		this -> videoIn = videoIn; 
	} 
	bool getVideoIn() { return videoIn; } 
}; 

class SmartTV : public WideTV { 
	string ipAdder; 
public : 
	SmartTV(string ipAdder, int size) : WideTV(size, true) { 
		this -> ipAdder = ipAdder; 
	} 
	
	string getIpAdder() { return ipAdder; } 
}; 

int main()
{ 
	SmartTV htv("192.168.0.1" , 55); 
	cout << "size = " << htv.getSize() << endl; 
	cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl; 
	cout << "IP = " << htv.getIpAdder() << endl; 
} 
