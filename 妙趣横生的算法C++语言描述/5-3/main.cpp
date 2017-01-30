#include <iostream>
using namespace std;

void bubbleSort(int[],int);
void swap(int*,int*);
int main()
{
	int data[10] = {23,43,23,19,87,65,78,90,7,10};
	//bubbleSort(data,10);
	cout<<"排序前的数组为："<<endl;
	for(int i = 0;i<10;i++)
		cout<<data[i]<<" ";

	cout<<endl;
	bubbleSort(data,10);

	cout<<"排序后的数组为："<<endl;
	for(int i = 0;i<10;i++)
		cout<<data[i]<<" ";

	cout<<endl;
	return 0;
}


void swap(int *a,int *b)
{

	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;

	//	int temp;
	//	temp = *a;
	//	*a = *b;
	//	*b = temp;
	//	cout<<a<<" "<<b<<endl;
}

void bubbleSort(int data[],int n)
{
	int flag;
	int i=1,j;
	do
	{
		flag = 0;
		for(j = 0;j+1<n;j++)
		{
			if(data[j]>data[j+1])
			{

				swap(data[j],data[j+1]);
				flag = 1;
			}
		}
		i++;
	}while(i<n && flag == 1);
}
