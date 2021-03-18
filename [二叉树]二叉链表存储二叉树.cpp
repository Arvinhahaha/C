#include<stdio.h>
#include<malloc.h>
 
#define MAX 101
typedef struct BiTNode{
 
    char data;
    struct BiTNode *LeftChild,*RightChild;
 
 
}*Bitree,BiTree;
 
typedef struct Stack_{
 
   Bitree elem[MAX];/*存放二叉树结点指针*/
   int top;
 
}*Stack,STACK;
 
 
/*---------------------------------------------*/
/*声明栈操作*/
void init_(Stack s);/*初始化栈*/
void push_(Stack s,Bitree T);
void pop_(Stack s,Bitree *T);/*返回结点指针，所以Bitree *，指向指针的指针*/
int getTop(Stack s,Bitree *T);/*返回结点指针，所以Bitree *，指向指针的指针*/
/*getTop返回值为int是因为下面出现这样代码while(getTop(&S,&p)&&p)需要有返回值*/
int stackempty(Stack s);/*判断栈空*/
 
/*---------------------------------------------*/
/*声明二叉树操作*/
void CreatBitree(Bitree *T); /*二叉树的创建*//*返回结点指针，所以Bitree *，指向指针的指针*/
void PreOrderTraverse(Bitree T);/*先序遍历二叉树*/
void InOrderTraverse1(Bitree T);/*第一种中序遍历二叉树*/
void InOrderTraverse2(Bitree T);/*第二种遍历二叉树*/
 
/*---------------------------------------------*/
 
int main()
{
 
  Bitree T;/*建立二叉树头结点指针*/
 
 
     CreatBitree(&T);/*T为指针，&T为它的地址，到了函数里面(*T)才代表这里的T*/
 
      PreOrderTraverse(T);
           printf("\n");/*先序遍历完后换行*/
        InOrderTraverse1(T);
 
         InOrderTraverse2(T);
 
         return 0;
 
}
 
/*======================栈操作声明=================*/
void init_(Stack s)/*初始化栈*/
{
  s->top=0;
}
/*----------------------------------------*/
void push_(Stack s,Bitree T)
{
 
  s->elem[s->top++]=T;
 
}
/*----------------------------------------*/
void pop_(Stack s,Bitree *T)
{
 (*T)=s->elem[--s->top];
}
/*----------------------------------------*/
int stackempty(Stack s)/*判断栈空*/
{
 
  if(s->top==0)
   return 1;
   else
   return 0;
 
}
/*----------------------------------------*/
int getTop(Stack s,Bitree *T)/*返回结点指针*/
{
  (*T)=s->elem[s->top-1];
   return 1;
}
/*=================================================*/
 
/*====================二叉树操作===================*/
void CreatBitree(Bitree *T) /*二叉树的创建*/
{
    char ch;
 
    scanf("%c",&ch);
    if(ch==' ')/*如果输入为空格，那么该指针T指向节点为空不存在，所以T=BULL*/
      (*T)=NULL;
      else
      {
 
         /*否则为该节点分配空间*/
          (*T)=(Bitree)malloc(sizeof(BiTree));
          (*T)->data=ch;/*结点赋值*/
          /*递归创建T的左孩子*/
          CreatBitree(&(*T)->LeftChild);
          /*递归创建T的右孩子*/
          CreatBitree(&(*T)->RightChild);
 
      }
return ;
}
/*-----------------------------------------*/
void PreOrderTraverse(Bitree T)/*先序遍历二叉树*/
{
    if(T)
     {
       printf("%c ",T->data);
        PreOrderTraverse(T->LeftChild);
        PreOrderTraverse(T->RightChild);
 
     }
}
/*-----------------------------------------*/
void InOrderTraverse1(Bitree T)/*第一种中序遍历二叉树*/
{
    STACK S;
    init_(&S);
 
      while(T||!stackempty(&S))
        {
 
          if(T)
           {
             push_(&S,T);
             T=T->LeftChild;
           }
           else
           {
             pop_(&S,&T);
             printf("%c ",T->data);
             T=T->RightChild;
           }
        }
        /*输出完换行*/
        printf("\n");
        return ;
}
/*-----------------------------------------*/
void InOrderTraverse2(Bitree T)/*第二种遍历二叉树*/
{
  STACK S;
  Bitree p;
  init_(&S);
 
     push_(&S,T);
       while(!stackempty(&S))
        {
          while(getTop(&S,&p)&&p)
             push_(&S,p->LeftChild);
 
           pop_(&S,&p);
             if(!stackempty(&S))
               {
                  pop_(&S,&p);
                   printf("%c ",p->data);
                   push_(&S,p->RightChild);
               }
        }
 
 
}
