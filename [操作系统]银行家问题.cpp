/*
* ��������Դ����(Available)��ϵͳ���Է������Դ 
* ����������MAX�������������Դ��Ҫ 
* �������Allocation���������Ѿ���õ���Դ 
* �������Need):���̻���Ҫ��õ���Դ 
*/ 
#include<iostream>
using namespace std;
//ȫ�ֱ�������
int Available[100];
int Max[50][100];
int Allocation[50][100];
int Need[50][100];
int Request[50][100];
int Finish[50];
int p[50];
//m������ n����Դ 
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
