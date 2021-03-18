#include<stdio.h>
#include<stlib.h>
#include<iostream>
#include<windows.h>
#define ERROR 0
#define OVERFLOW -1
#define OK 1
#define MAXSIZE 10000
using namespace std;
typedef struct {
	int *elem;
	int length;
}sqlist;
typedef Status int;
sqlist L;
Status InitList(Sqlist &L)
{
	L.elem=new int[MAXSIZE];
	if(!L.elem) exit(OVERFLOW);
	L.length=0;
	return OK;
}
Status GetElem(sqlist L,int i,int *e)
{
	if(i<0&&i>L.length) return ERROR;
	e=elem[i-1];
	return OK;
}
Status LocatElem(Sqlist L,int e)
{
	for(int i=0;i<L.length;i++)
	{
		if(L[i]==e)
		return i+1;
		return 0;
	}
}
