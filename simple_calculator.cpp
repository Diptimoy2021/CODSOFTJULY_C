#include<iostream>
using namespace std;

int main()
{
	float num_1,num_2;
	char operation;
	cout<<"Enter the first number: ";
	cin>>num_1;
	cout<<endl;
	cout<<"Enter the second number: ";
	cin>>num_2;
	cout<<endl;
	cout<<" Type + for Addition , Type - for Subtraction, Type * for Multiplication , Type / for Division: ";
	cin>>operation;
	cout<<endl;
	switch(operation)
	{
		case '+' : 	cout<<num_1<<"+"<<num_2<<"="<<num_1+num_2<<endl;
					break;
		case '-' : 	cout<<num_1<<"-"<<num_2<<"="<<num_1-num_2<<endl;
					break;
		case '*' : 	cout<<num_1<<"*"<<num_2<<"="<<num_1*num_2<<endl;
					break;
		case '/' : 	cout<<num_1<<"/"<<num_2<<"="<<num_1/num_2<<endl;
					break;
		default  : cout<<"Invalid input"<<endl;
	}	
	
}
