#include <iostream> 
using namespace std; 

class Base { 
public : 
	virtual void f() { cout << "Base::f() called" << endl; }  
}; 

class Derived : public Base { 
public : 
	virtual void f() { cout << "Derived::f() called" << endl; }  
}; 

int main()
{
	Derived d, *pDer; 
	pDer = &d; 
	pDer -> f(); 

	Base *pBase; 
	pBase = pDer; // 업 캐스팅 
	pDer -> Base::f();
	pBase -> f();
} 

