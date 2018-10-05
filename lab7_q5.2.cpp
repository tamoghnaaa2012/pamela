// Write a C++ program to find sum of all odd numbers in given range using recursion.

#include<iostream>
using namespace std;

int sum (int n)
{		if(n%2==0)
		return n + sum(n-2);  
      else
      return n+sum(n-2);
}
 

int main()
{
		int n,result;
		cout<< "Enter the odd number";
		cin>>n;
		result= sum (n);
		cout<< n << "+" << sum  << "=" << result;

		return 0;
}
