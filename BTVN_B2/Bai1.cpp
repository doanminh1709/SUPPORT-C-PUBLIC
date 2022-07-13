#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n : "; cin>>n;
	
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	cin>>arr[i];
//after sort
	for(int i = 0 ; i < n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	int cnt = 0;
	int mark1 , mark2;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
			if(arr[i] % 2 == 1){
				cnt++;
				if(cnt == 1){
					mark1 = i;
				}else{
					mark2 = i;
					break;
				}
			} 
		}
	
//cach 1	
//	int temp = arr[mark1];
//	arr[mark1] = arr[mark2];
//	arr[mark2] = temp;
//cach 2
    swap(arr[mark1] , arr[mark2]);
	for(int i = 0 ; i < n ; i++)
		cout<<arr[i]<<" ";
		
	return 0;
 } 
