#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Node{
	char data;
	struct Node* lchild;
	struct Node* rchild;
}; 

//½¨Ê÷ 
Node *Create_tree()
{
	char ch=getchar();
	Node *l = new Node;
	if(ch==' '){
		return NULL;
	}
	else {
		l->data=ch;
		l->lchild=Create_tree();
		l->rchild=Create_tree();
	}
	return l;
}

//Ç°Ğò±éÀú
void pre_order(Node *&p)
{
	if(p)
	{
		cout<<p->data<<" ";
		pre_order(p->lchild);
		pre_order(p->rchild); 
	}
 }
 void mid_order(Node *p)
 {
 	if(p)
 	{
 		mid_order(p->lchild);
 		cout<<p->data<<" ";
 		mid_order(p->rchild);
	 }
  }
void post_order(Node *p)
{
	if(p)
	{
	post_order(p->lchild);
	post_order(p->rchild);
	cout<<p->data<<" ";	
	}
}
int main()
{
	Node *p;
	p=Create_tree();
	pre_order(p);
	cout<<endl;
	mid_order(p);
	cout<<endl;
	mid_order(p);
	cout<<endl;
//	post_order(p);
//	cout<<endl;
	return 0;
}
