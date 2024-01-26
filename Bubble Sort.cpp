
#include<iostream>
using namespace std;
main(){
	int arr[5],a,b,temp;
	for(a=0;a<5;a++)
	{
		cout<<"Masukkan Jumlah "<<a+1<<" Angka :";
		cin>>arr[a];
	}
	for(a=0;a<4;a++)
	{
		for(b=a+1;b<5;b++)
		{
			if(arr[b]<arr[a])
			{
				temp=arr[b];
				arr[b]=arr[a];
				arr[a]=temp;
			}
		}
	}
	cout<<"\nArry after sorting in ascending order\n";
	for(a=0;a<5;a++){
		cout<<arr[a]<<" ";
	}
}
