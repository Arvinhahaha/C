/*
1.����һ�����̶�ά���� 
2.�������ӵķ�ʽ�������������� 
3.ÿ�ν������²���ӡҳ�� 
4.���ӿ�������������� 
5.��ʼ������ 
6.������Ӯ������һ�������һ����һ�������һ���Ļ��߶Խ��������һ���� 
����ֵ x��ʾ��һ�Ӯ
	   o��ʾ���Ի�Ӯ
	   q��ʾ����
	   ������ʾδ��ʤ�� 
*/ 
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>


//���峤��� 
#define M 5
#define N 5

//���ַ�������� 
char chess_board[M][N];

//���峤�� 
int m,n;
using namespace std;
//��ʼ����
int menu(){
	cout<<"======================="<<endl;
	cout<<"1.begin !"<<endl;
	cout<<"2.save and exit !"<<endl;
	cout<<"Please choice it"<<endl;
	int choice=0;
	cin>>choice;
	return choice; 
} 

//��ʼ������
void Init(){
	for(int m=0;m<M;m++)
	{
		for(int n=0;n<N;n++)
			chess_board[m][n]=' ';
	}
	//����ʱ���
	srand((unsigned int)time(0));
} 
 
// ��ӡ����
void Print(){
	cout<<" --- --- --- --- --- "<<endl;
	for(int i=0;i<M;i++)
	{
		printf("| %c | %c | %c | %c | %c |\n", chess_board[i][0],	chess_board[i][1], chess_board[i][2],	chess_board[i][3], chess_board[i][4]);
		if ("row!= MAX_ROW-1"){
		printf(" --- --- --- --- --- \n");
		}
	}
	system("pause");	
} 

//ѡ������ 
void PlayerMove(){
	cout<<"����������"<<endl;
	while(1){
		cout<<"�����������ӵ�λ������"<<endl;
		cin>>m,n; 
		if(m<0||m>=M||n<0||n>=N)
		{
			cout<<"���겻����"<<endl; 
			continue;
		}
		if(chess_board[m][n]!=' '){
			cout<<"�����ѱ�ռ��"<<endl;
			continue; 
		}
		chess_board[m][n]='x';
		break;
	}
} 

//��������
void ComputerMove(){
	cout<<"��������"<<endl;
	while(1){
		m=rand()%5;
		n=rand()%5;
		if(chess_board[m][n]!=' '){
			continue;
		}
		chess_board[m][n]='o';
		break;
	}
	cout<<"����������� !"<<endl; 
} 

//�ж������Ƿ����ˣ�����1�����򷵻�0 
int IsFull(){
	for(int i=0;i<M;i++)
		{
			for(int j=0;j<N;j++)
				{
					if(chess_board[i][j]==' '){
						return 0;
					}
				}
		}
		return 1;
} 
//�ж���Ӯ 
char JudgeWinner(){
	//�� 
	for(int i=0;i<M;i++)
	if(chess_board[i][0]==chess_board[i][1]&&chess_board[i][1]==chess_board[i][2]&&chess_board[i][3]==chess_board[i][4])
	return chess_board[i][0];
	//��
	for(int j=0;j<N;j++)
	if(chess_board[0][j]==chess_board[1][j]&&chess_board[1][j]==chess_board[2][j]&&chess_board[2][j]==chess_board[3][j]&&chess_board[3][j]==chess_board[4][j])
	return chess_board[0][j];
	 //�Խ�
	 if (chess_board[0][0] == chess_board[1][1] &&
		chess_board[0][0] == chess_board[2][2] &&
		chess_board[0][0] == chess_board[3][3] &&
		chess_board[0][0] == chess_board[4][4]){
		return chess_board[0][0];
	}
	if (chess_board[0][4] == chess_board[1][3] &&
		chess_board[0][4] == chess_board[2][2] &&
		chess_board[0][4] == chess_board[3][1] &&
		chess_board[0][4] == chess_board[4][0]){
		return chess_board[0][4];
	}
	if(IsFull()){
		return 'q';
	}
	return ' ';
} 

//game

void game(){
	//1.��ʼ������
	Init();
	char winner = ' ';
	while (1){
		// 2.��ӡ����
		Print();
		//3.�������
		PlayerMove();
		//4.���ʤ��
		winner = JudgeWinner();
		if (winner != ' '){
			//ʤ���ѷ� 
			break;
		}
		//5.��������
		ComputerMove();
		//6.���ʤ���󷵻ص�2����ѭ��
		winner = JudgeWinner();
		if (winner != ' '){
			//ʤ���ѷ�
			break;
		}
	}
	Print();
	if (winner == 'x'){
		printf("��Ӯ��!\n");
	}
	else if (winner == 'o'){
		printf("�ⶼ����,����̫�ʺ�����Ϸ!\n");
	}
	else if (winner == 'q'){
		printf("ƽ��!���͵������忪!\n");
	}
	else{
		printf("�������bug��!\n");
	}
}
int main()
{
	while(1)
	{
		int choice=menu();
		if(choice==1)
		game();
		else if(choice==0)
		{
			printf("лл�ټ�"); 
		}
		else cout<<"����������"<<endl; 
	}
	system("pause");
	return 0;
 } 



