// Write a C++ program to find sum of all even numbers in given range using recursion.

#include<iostream>
using namespace std;

int sum (int n)
{		if(n !=0)
		return n + sum(n-2);  
      else
      return 0;
}
 
int main()
{
		int n,result;
		cout<< "Enter the natural number";
		cin>>n;
		result= n+ sum (n-2);
		cout<< n << "+" << sum (n-2) << "=" << result;

		return 0;
}
