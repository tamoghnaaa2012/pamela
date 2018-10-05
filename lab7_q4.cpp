//Write a C++ program to find sum of all natural numbers between 1 to n using recursion

#include<iostream>
using namespace std;

int sum (int n)
{		if(n != 0)
      return n + sum(n - 1);
      else
      return 0;
}
 
int main()
{
		int n,result;
		cout<< "Enter the natural number";
		cin>>n;
		result= n+ sum (n-1);
		cout<< n << "+" << sum (n-1) << "=" << result;

		return 0;
}
