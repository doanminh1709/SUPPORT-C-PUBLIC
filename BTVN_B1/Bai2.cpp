#include<iostream>
using namespace std;

int main()
{
	int year , month;
	cout<<" Enter year : ";
	cin>>year;
	
	cout<<" Enter month : ";
	cin>>month;
	
	switch(month)
	{
		case 1: case 3: case 5: case 6: case 8: case 10: case 12:
			{
			cout<<" Has 31 days";
			break;
			}
		case 2:
			{
			 if(year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
			 {
			 	cout<<" Has 29 days";
			 }
			 else{
			 	cout<<" Has 28 days";	
			 }		
			 break;
			}	
		case 4: case 7: case 9: case 11:
			{
				cout<<" Has 30 days";
				break;
			}
		default:
		{
			cout<<" Month invalid";
			break;	
		}	
	}
	
	return 0;
}
