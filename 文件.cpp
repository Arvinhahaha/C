#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fpl,*fp2; //定义两个文件指针变量fpl和fp2
	fpl=fopen("D:\\f1.txt","r"); //以只读模式打开文件 fl.txt
	if (NULL==fpl) //以返回值fpl判断是否打开成功，如果为NULL表示失败
	{
    printf ("Failed to open the file !\n");
    exit (0) ; //终止程序，stdlib .h头文件中
	}
	fp2=fopen ("f2.txt","a") ; //以追加写入的模式打开文件f2 .txt
	if(NULL==fp2)
	{
    printf ("Failed to open the file !\n");
    exit (0);
	}
	fclose (fpl); //关闭fpl指针对应文件（fl.txt)的流
	fclose (fp2); //关闭fp2指针对应文件（f2.txt)的流
} 
