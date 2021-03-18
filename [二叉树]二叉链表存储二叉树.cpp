#include<stdio.h>
#include<malloc.h>
 
#define MAX 101
typedef struct BiTNode{
 
    char data;
    struct BiTNode *LeftChild,*RightChild;
 
 
}*Bitree,BiTree;
 
typedef struct Stack_{
 
   Bitree elem[MAX];/*��Ŷ��������ָ��*/
   int top;
 
}*Stack,STACK;
 
 
/*---------------------------------------------*/
/*����ջ����*/
void init_(Stack s);/*��ʼ��ջ*/
void push_(Stack s,Bitree T);
void pop_(Stack s,Bitree *T);/*���ؽ��ָ�룬����Bitree *��ָ��ָ���ָ��*/
int getTop(Stack s,Bitree *T);/*���ؽ��ָ�룬����Bitree *��ָ��ָ���ָ��*/
/*getTop����ֵΪint����Ϊ���������������while(getTop(&S,&p)&&p)��Ҫ�з���ֵ*/
int stackempty(Stack s);/*�ж�ջ��*/
 
/*---------------------------------------------*/
/*��������������*/
void CreatBitree(Bitree *T); /*�������Ĵ���*//*���ؽ��ָ�룬����Bitree *��ָ��ָ���ָ��*/
void PreOrderTraverse(Bitree T);/*�������������*/
void InOrderTraverse1(Bitree T);/*��һ���������������*/
void InOrderTraverse2(Bitree T);/*�ڶ��ֱ���������*/
 
/*---------------------------------------------*/
 
int main()
{
 
  Bitree T;/*����������ͷ���ָ��*/
 
 
     CreatBitree(&T);/*TΪָ�룬&TΪ���ĵ�ַ�����˺�������(*T)�Ŵ��������T*/
 
      PreOrderTraverse(T);
           printf("\n");/*������������*/
        InOrderTraverse1(T);
 
         InOrderTraverse2(T);
 
         return 0;
 
}
 
/*======================ջ��������=================*/
void init_(Stack s)/*��ʼ��ջ*/
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
int stackempty(Stack s)/*�ж�ջ��*/
{
 
  if(s->top==0)
   return 1;
   else
   return 0;
 
}
/*----------------------------------------*/
int getTop(Stack s,Bitree *T)/*���ؽ��ָ��*/
{
  (*T)=s->elem[s->top-1];
   return 1;
}
/*=================================================*/
 
/*====================����������===================*/
void CreatBitree(Bitree *T) /*�������Ĵ���*/
{
    char ch;
 
    scanf("%c",&ch);
    if(ch==' ')/*�������Ϊ�ո���ô��ָ��Tָ��ڵ�Ϊ�ղ����ڣ�����T=BULL*/
      (*T)=NULL;
      else
      {
 
         /*����Ϊ�ýڵ����ռ�*/
          (*T)=(Bitree)malloc(sizeof(BiTree));
          (*T)->data=ch;/*��㸳ֵ*/
          /*�ݹ鴴��T������*/
          CreatBitree(&(*T)->LeftChild);
          /*�ݹ鴴��T���Һ���*/
          CreatBitree(&(*T)->RightChild);
 
      }
return ;
}
/*-----------------------------------------*/
void PreOrderTraverse(Bitree T)/*�������������*/
{
    if(T)
     {
       printf("%c ",T->data);
        PreOrderTraverse(T->LeftChild);
        PreOrderTraverse(T->RightChild);
 
     }
}
/*-----------------------------------------*/
void InOrderTraverse1(Bitree T)/*��һ���������������*/
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
        /*����껻��*/
        printf("\n");
        return ;
}
/*-----------------------------------------*/
void InOrderTraverse2(Bitree T)/*�ڶ��ֱ���������*/
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
