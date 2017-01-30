#include <iostream>
using namespace std;
/************快速排序算法***********************/
template <class T>
void quickSort(T data[],int p,int r)
{
	int position = 0;
	if(p<r)
	{
		position = partition(data,p,r);         		//返回划界元素的最终位置
		quickSort(data,p,position-1);          	//对划分的子序列进行递归操作
		quickSort(data,p+1,r);
	}
}
/*************序列划分函数**********************/
template<class T> int partition(T data[],int p,int r)
{
	int position;
	T temp = data[r];
	int i = p-1;
	for(int j=p;j<r;j++)
	{
		if(data[j] <= temp)                     //发现小于划界元素的键值时
		{                                    //交换元素i+1和元素j的值
			i+=1;
			exchange(&data[i],&data[j]);
		}

	}
	exchange(&data[i+1],&data[r]);
	return i+1;
}
/**************元素值交换函数*******************/
template <class T> void exchange(T *a,T *b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int data[] = {23,56,44,32,78,2,10};
	int length = 7;
	for(int i = 0;i<length;i++)
		cout<<data[i]<<" ";
	cout<<endl;
	quickSort(data,0,6);
	for(int i = 0;i<length;i++)
		cout<<data[i]<<" ";
	cout<<endl;
	return 0;
}
