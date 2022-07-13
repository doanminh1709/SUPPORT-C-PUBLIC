#include<iostream>
using namespace std;

int main()
{
	float score;
	cout<<" Enter your score : ";
	cin>>score;
	
	if(score >= 0 && score < 5)
	{
		cout<<"Grade F ";
	}
	else if(score > 5 && score <= 7.0)
	{
		cout<<"Grade C ";
	}
	else if(score >= 7.0 && score < 9)
	{
		cout<<"Grade B";
	}
	else if(score >= 9.0 && score <= 10)
	{
		cout<<"Grade A";
	}
	else{
		cout<<"Score invaid , enter again";
	}
	return 0;
 } 
