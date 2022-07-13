#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n : "; 
	cin>>n;
	
	int arr[n];
	for(int i = 0 ; i < n ; i++)
		cin>>arr[i];
	cout<<endl;

	//delete number = 0
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i] == 0){
			for(int j = i ; j < n - 1 ; j++)
			{
				arr[j] = arr[j+1];
			}
			i--;
			n--;
		}	
	}	
	//sort
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1 ; j < n ; j++){
			//sort negative numbers at the beginning descending
			if(arr[j]<0||arr[i]<0)
			{
				if(arr[j]>arr[i])
				{
				swap(arr[i] , arr[j]);
				}
			}		
			//sort positive numbers at the end descending
			if(arr[i]>0||arr[j]>0)
			{
				if(arr[i]>arr[j])
				{
				swap(arr[i] , arr[j]);
				}
			}
			
		}
	}
	
	for(int i = 0 ; i < n ; i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
