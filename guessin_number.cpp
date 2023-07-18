#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int random,user_guess, count=1;
	srand(time(0));
	random=1+(rand()%100);
	cout<<"Guess the number between [1-100]: ";
	cin>>user_guess;
	cout<<endl;
	while(user_guess!=random)
	{
		if(user_guess>random)
		{
			cout<<"your guess is greater than the number!!"<<endl;
			cout<<endl;
			cout<<"Guess the number again : ( : ";
			cin>>user_guess;
			cout<<endl;
		}
		else
		{
			cout<<"your guess is lesser than the number!!"<<endl;
			cout<<endl;
			cout<<"Guess the number again : ( : ";
			cin>>user_guess;
			cout<<endl;
		}
		count++;
	}
	cout<<"yahoo!! your guess is right.. number: "<<user_guess<<endl;
	
	cout<<"yahoo!! your guess is right in : "<<count<<" chances"<<endl;	
}



