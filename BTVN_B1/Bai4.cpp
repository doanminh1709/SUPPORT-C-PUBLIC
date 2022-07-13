#include<iostream>
using namespace std;

int main()
{
	//4.1
	int n = 1;
	do{
		if(n % 10 == 0 && n % 3 == 0){
			cout<<n<<endl;
		}	
		n++;
	}while(n < 1000);
	
	//4.2
	int a;
	do{
		cout<<" Enter a : "; 
		cin>>a;
	}while(!(10 <= a && a <= 100));
	cout<<"a = "<<a;
	
	return 0;
}
