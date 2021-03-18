/*
1.定义一个棋盘二维数组 
2.电脑落子的方式用随机数随机生成 
3.每次结束重新并打印页面 
4.落子控制由坐标来完成 
5.初始化坐标 
6.五子棋赢的条件一行有五个一样的一列有五个一样的或者对角线有五个一样的 
返回值 x表示玩家会赢
	   o表示电脑会赢
	   q表示和棋
	   ‘’表示未分胜负 
*/ 
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>


//定义长宽高 
#define M 5
#define N 5

//用字符数组代表 
char chess_board[M][N];

//定义长宽 
int m,n;
using namespace std;
//开始界面
int menu(){
	cout<<"======================="<<endl;
	cout<<"1.begin !"<<endl;
	cout<<"2.save and exit !"<<endl;
	cout<<"Please choice it"<<endl;
	int choice=0;
	cin>>choice;
	return choice; 
} 

//初始化程序
void Init(){
	for(int m=0;m<M;m++)
	{
		for(int n=0;n<N;n++)
			chess_board[m][n]=' ';
	}
	//设置时间戳
	srand((unsigned int)time(0));
} 
 
// 打印函数
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

//选手下棋 
void PlayerMove(){
	cout<<"该你下棋了"<<endl;
	while(1){
		cout<<"请您输入落子的位置坐标"<<endl;
		cin>>m,n; 
		if(m<0||m>=M||n<0||n>=N)
		{
			cout<<"坐标不合理"<<endl; 
			continue;
		}
		if(chess_board[m][n]!=' '){
			cout<<"坐标已被占用"<<endl;
			continue; 
		}
		chess_board[m][n]='x';
		break;
	}
} 

//电脑下棋
void ComputerMove(){
	cout<<"电脑落子"<<endl;
	while(1){
		m=rand()%5;
		n=rand()%5;
		if(chess_board[m][n]!=' '){
			continue;
		}
		chess_board[m][n]='o';
		break;
	}
	cout<<"电脑落子完毕 !"<<endl; 
} 

//判断棋盘是否满了，返回1，否则返回0 
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
//判断输赢 
char JudgeWinner(){
	//行 
	for(int i=0;i<M;i++)
	if(chess_board[i][0]==chess_board[i][1]&&chess_board[i][1]==chess_board[i][2]&&chess_board[i][3]==chess_board[i][4])
	return chess_board[i][0];
	//列
	for(int j=0;j<N;j++)
	if(chess_board[0][j]==chess_board[1][j]&&chess_board[1][j]==chess_board[2][j]&&chess_board[2][j]==chess_board[3][j]&&chess_board[3][j]==chess_board[4][j])
	return chess_board[0][j];
	 //对角
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
	//1.初始化棋盘
	Init();
	char winner = ' ';
	while (1){
		// 2.打印棋盘
		Print();
		//3.玩家落子
		PlayerMove();
		//4.检测胜负
		winner = JudgeWinner();
		if (winner != ' '){
			//胜负已分 
			break;
		}
		//5.电脑落子
		ComputerMove();
		//6.检测胜负后返回到2继续循环
		winner = JudgeWinner();
		if (winner != ' '){
			//胜负已分
			break;
		}
	}
	Print();
	if (winner == 'x'){
		printf("你赢了!\n");
	}
	else if (winner == 'o'){
		printf("这都输了,您不太适合这游戏!\n");
	}
	else if (winner == 'q'){
		printf("平局!您和电脑五五开!\n");
	}
	else{
		printf("代码好像bug了!\n");
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
			printf("谢谢再见"); 
		}
		else cout<<"你输入有误"<<endl; 
	}
	system("pause");
	return 0;
 } 



