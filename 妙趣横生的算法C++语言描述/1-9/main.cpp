#include<iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue<int> queue = Queue<int>(6);    //创建队列结构
	for(int i = 0;i<6;i++)                   //循环插入数据
		queue.insert(i*3);
	for(int i = 0;i<6;i++)
	{
		int temp = queue.delElement();     //出队并输出数据
		cout<<temp<<" ";
	}
	cout<<endl;
	return 0;
}
