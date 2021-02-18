// Custom Exception.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<exception>

using namespace std;

class MyException:public exception  {
public: 
	virtual const char* what() const throw() {
		return "Something Bad Happened!";
	}
};
	

int main()
{
	return 0;
}

