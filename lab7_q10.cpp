//Write a C++ program to generate nth Fibonacci term using recursion.

#include<iostream>
using namespace std;

int fibonacci(int n)
{
		if ((n==0||n==1))
		 { return 1;
       }
		else
		 { return (fibonacci(n-1)+fibonacci(n-2));}
}

int main()
{	
		int n,i;
		cout<<"Input the number of terms for Fibonacci Series:";
		cin>>n;
      cout<<"Fibonacci Series is as follows";
 
      while(i<n)
{
        cout<<"i"<<fibonacci(i);
        i++;
}
 
    return 0;
}
