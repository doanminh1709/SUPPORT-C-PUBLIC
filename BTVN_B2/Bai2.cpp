#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	int arr[n];
	for(int i = 0 ; i < n ; i++)
		cin>>arr[i];
	
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i] > 0 && pow(sqrt(arr[i]) , 2) == arr[i])
		sum+=arr[i];	
	}	
		cout<<"Sum = "<<sum;	
	return 0;
}
