#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fpl,*fp2; //���������ļ�ָ�����fpl��fp2
	fpl=fopen("D:\\f1.txt","r"); //��ֻ��ģʽ���ļ� fl.txt
	if (NULL==fpl) //�Է���ֵfpl�ж��Ƿ�򿪳ɹ������ΪNULL��ʾʧ��
	{
    printf ("Failed to open the file !\n");
    exit (0) ; //��ֹ����stdlib .hͷ�ļ���
	}
	fp2=fopen ("f2.txt","a") ; //��׷��д���ģʽ���ļ�f2 .txt
	if(NULL==fp2)
	{
    printf ("Failed to open the file !\n");
    exit (0);
	}
	fclose (fpl); //�ر�fplָ���Ӧ�ļ���fl.txt)����
	fclose (fp2); //�ر�fp2ָ���Ӧ�ļ���f2.txt)����
} 
