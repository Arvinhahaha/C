/*
* 可利用资源向量(Available)：系统可以分配的资源 
* 最大需求矩阵（MAX）：进程最大资源需要 
* 分配矩阵（Allocation）：进程已经获得的资源 
* 需求矩阵（Need):进程还需要获得的资源 
*/ 
#include<iostream>
using namespace std;
//全局变量定义
int Available[100];
int Max[50][100];
int Allocation[50][100];
int Need[50][100];
int Request[50][100];
int Finish[50];
int p[50];
//m个进程 n类资源 
int m,n; 
int Safe()
{
	int i,j,l=0;
	int Work[100];
	for(i=0;i<m;i++)
	Work[i]=Available[i];
	for(i=0;i<m;i++)
	Finish[i]=0;
	for(i=0;i<m;i++)
	{
		if(Finish[i]==1)
		continue;
		else {
			for(j=0;j<n;j++)
			{
				if(Need[i]>Work[i])
				break;
			}
			
		}
	}
 } 
