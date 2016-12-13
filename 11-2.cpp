#include <iostream> 
using namespace std; 

void get1() { 
	cout << "cin.get()로 <enter>키 까지 입력받고 출력합니다."<< endl; 
	int ch; 

	while((ch = cin.get()) != '\0') { 
		cout.put(ch); 
		if( ch == '\n')
			break; 
	}
} 

void get2() { 
	cout << "cin.get()로 <enter>키 까지 입력받고 출력합니다."<< endl; 
	char ch; 

	while(true) 
	{ 
		cin.get(ch);
		if(cin.eof()) break; 
		cout.put(ch); 

		if(ch == '\n')
			break; 
	}
}

int main()
{
	get1(); 
	get2(); 
}
