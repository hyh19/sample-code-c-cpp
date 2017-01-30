#include <iostream>
using namespace std;

void insertSort(int[],int);

int main()
{
	int data[9] = {0,43,35,1,87,99,67,78,100};    
	int length = 9;  
	cout<<"The oraginal array is:"<<endl;
	for(int i = 1;i<length;i++)
		cout<<data[i]<<" ";
	cout<<endl;
	insertSort(data,length);   
	cout<<"The result of insertion sorting is:"<<endl;
	for(int i = 1;i<length;i++)                   
		cout<<data[i]<<" ";
	cout<<endl;
	return 0;
}

void insertSort(int d[],int n)      
{
	int i,j;
	for(j = 2;j<n;j++)
	{
		d[0] = d[j];
		i=j-1;
		while(i>0 && d[i]>d[0])
		{
			d[i+1] = d[i];
			i--;
		}
		d[i+1] = d[0];
	}
}

