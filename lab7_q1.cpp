// Write a C++ program to find power of any number using recursion

#include<iostream>
using namespace std;
int calculatepower(int base,int powerRaised)
	{ 
		if (powerRaised != 0)
			return (base*calculatepower(base, powerRaised-1));
		else
			return 1;
}

int main()
{
		int base ,powerraised,result;
		cout<< "Enter the base number";
		cin>> base;

		cout<< "Enter the power number(positive integer)";
		cin>> powerraised;
		 
		result = calculatepower (base,powerraised);
		cout<< base << "^" << powerraised << "=" << result;
		
		return 0;
}

