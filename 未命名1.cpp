#include <stdio.h> /*I/O函数*/ 
#include <stdlib.h> /*其它说明*/ 
#include <string.h> /*字符串函数*/ 
#include <conio.h> /*屏幕操作函数*/ 
#include <memory.h> /*内存操作函数*/ 
#include <ctype.h> /*字符操作函数*/ 
#include <malloc.h> /*动态地址分配函数*/ 
struct course
{
char xuehao[8];
char course_No[6];  //课程代号
char course_name[10];  //课程名字
float xuefen;    //学分
float p_chengji;    //平时成绩
float s_chengji;  //实验成绩
float j_chengji;  //卷面成绩
float z_chengji;    //综合成绩
float s_xuefen;    //实际学分 
}course_data,s_course[100];
struct info 
{ 
int sMingci;        //名次
char xuehao[8]; 
char name[10]; 
char sex[2];
char d_num[4];    //宿舍号码
char tel_num[9];      //宿舍电话号码
}data,s_info;

int i,j,k=0; 
int a,b;
int flag=0;
char temp[20],ch,ch1,ch2; 
char temp_NO[8],temp_name[10],temp_dnum[4];
char tempcn[6];
char sn[8];  //临时学号
float z_fen,z_xuefen;
struct course temp_course;
struct  info *info;
FILE *fp,*fp1,*fp2; 

void input() 
{ 
while(1)
{
printf("which information do you want to input: b(base) e(exit) s(socre)");
ch=getch(); 
if(ch=='b'||ch=='B') 
{
if(fp==NULL)   
{   
printf("cannot open this file.\n");   
getch();exit(0); 
} 
printf("Please input xuehao:"); 
gets(sn);
while((fread(&data,sizeof(data),1,fp))==1) 
{           
if(strcmp(sn,data.xuehao)==0)
{   
flag=1;     
}
} 
if(flag==1)
{
printf("the number has exist,press ang key continue:\n");
flag=0;
getch();
continue;
}
else
{
strcpy(data.xuehao,sn);
}
printf("Please input name:"); 
gets(data.name);
printf("Please input sex:M(male)/F(female):\n"); 
gets(data.sex);
printf("Please input your dormitory No:"); 
gets(data.d_num);
printf("Please input telephone Number:"); 
gets(data.tel_num);
fwrite(&data,sizeof(data),1,fp); //写入数据
fclose(fp);
}    
else if(ch=='s'||ch=='S')
{
if((fp1==NULL)||(fp==NULL))
{ 
printf("cannot open this file.\n"); 
getch();
exit(0); 
} 
printf("Please input xuehao:"); 
gets(sn); 
while((fread(&data,sizeof(data),1,fp))==1) 
{           
if(strcmp(sn,data.xuehao)==0)
{    flag=1;
}
}   
if(!flag)
{ printf("this number is not exist\n"); 
continue;     
}
else
{ flag=0;
strcpy(course_data.xuehao,sn);
}     
printf("Please input course No:"); 
gets(course_data.course_No);
printf("Please input course name:"); 
gets(course_data.course_name);
printf("Please input course xuefeng:");
gets(temp);
course_data.xuefen=atof(temp);
printf("Please input pingshi chengji:"); 
gets(temp);
course_data.p_chengji=atof(temp);
printf("Please input shiyan chengji:"); 
gets(temp);
course_data.s_chengji=atof(temp);
printf("Please input juanmian chengji:"); 
gets(temp);
course_data.j_chengji=atof(temp);
// 如果有实验 
if(course_data.s_chengji==-1)
{
course_data.z_chengji=(course_data.p_chengji)*0.3+(course_data.j_chengji)*0.7;   
}
//如果无实验  
else 
{ 
course_data.z_chengji=(course_data.p_chengji)*0.15+(course_data.s_chengji)*0.15+(course_data.j_chengji)*0.7;
} 
//以下是实际学分计算 
if((course_data.z_chengji)<60)     
{course_data.s_xuefen=0;}     
else if((course_data.z_chengji)<70)   
{course_data.s_xuefen=course_data.xuefen*0.6;}     
else if((course_data.z_chengji)<80)   
{course_data.s_xuefen=course_data.xuefen*0.75;}     
else if((course_data.z_chengji)<90)   
{course_data.s_xuefen=course_data.xuefen*0.8;}     
else   
{course_data.s_xuefen=course_data.xuefen;   }
fwrite(&course_data,sizeof(course_data),1,fp1);
//写入数据 
fclose(fp1);   
fclose(fp); 
break; 
printf("another?y/n"); 
ch=getch();
if(ch=='n'||ch=='N')   
break;   
}  
}
}

void search()
{ 
  printf("select form:  a(student information)    b(socreinformation)");
  ch=getch();
  if(ch=='a'||ch=='A')
   { 
     if(fp==NULL) 
      { 
        printf("Cannot open this file.\n"); 
        exit(0);
      }
      printf("selectway:  a(student Number)  b(student name)  c(dormitoryNO):\n");
      ch1=getch();
   }
     //按照学号查找
  if(ch1=='a'||ch1=='A')
   {
     printf("please input the student number:");
     gets(temp_NO);
     printf("  xuehao      name        sex      sushe hao          telephone             ");
     printf("------------------------------------------------------------------------------\n");
     while((fread(&data,sizeof(data),1,fp))==1) 
       { 
          if(strcmp(temp_NO,data.xuehao)==0)
             {    flag=1;
                   printf("%8s_x0010_s_x0012_ss s\n,data.xuehao,data.name,data.sex,data.d_num,data.tel_num");
             }
       }   
     if(!flag)
      { printf("this number is not exist,press any key to continue\n");
        getch();     
      }
      else     
        {      flag=0;
        }     
   }  

//按照名字查找       
  else if(ch1=='b'||ch1=='B')
  {
    printf("please input the name:");
    gets(temp_name);
     printf("  xuehao      name        sex      sushe hao         telephone              ");
     printf("------------------------------------------------------------------------------\n");
     while((fread(&data,sizeof(data),1,fp))==1) 
     { 
       if(strcmp(temp_name,data.name)==0)
         {    flag=1;
               printf("%8s_x0010_s_x0012_ss s\n,data.xuehao,data.name,data.sex,data.d_num,data.tel_num");
         }
     }   
     if(!flag)
       { printf("this name is not exist,press any key to continue:\n"); 
         getch();       
       }
     else
     {  flag=0;}
   }
//按照宿舍号码查找
else if(ch1=='c'||ch1=='C')
{
printf("please input the dormitory number:");
gets(temp_dnum); 
printf("  xuehao      name        sex      sushe hao         telephone              ");
printf("------------------------------------------------------------------------------\n");
while((fread(&data,sizeof(data),1,fp))==1) 
{ 
if(strcmp(temp_dnum,data.d_num)==0)
{    flag=1;
printf("%8s_x0010_s_x0012_ss s\n,data.xuehao,data.name,data.sex,data.d_num,data.tel_num");
}
if(!flag)
{ printf("    his dormitory is not exist,press any key continue:"); 
getch();           
}
else
{   
flag=0;
}
}   
}
else
{
  printf("select error\n");
}
fclose(fp); 
//学生成绩查找
if(ch=='b'||ch=='B')
{   
    j=0;
    z_fen=0;
    z_xuefen=0;
    if(fp1==NULL) 
    { 
        printf("Cannot open this file.\n"); 
        exit(0);
    } 
     printf("please input student number:");
     gets(temp_NO);
     printf("xuehao  course_No  course_name  xuefen     chengji ");
     printf("------------------------------------------------------------------------------\n");
     while((fread(&course_data,sizeof(course_data),1,fp1))==1) 
     { 
        if(strcmp(temp_NO,course_data.xuehao)==0)
        {    flag=1;
             j++;
             z_fen=z_fen+course_data.z_chengji;
             z_xuefen=z_xuefen+course_data.s_xuefen;
             printf("_x0010_s_x0010_s_x0010_s.1f   .1f\n,course_data.xuehao,course_data.course_No,course_data.course_name,course_data.s_xuefen,course_data.z_chengji");
        }
     }   
      if(!flag)
       { printf( "is not exist");       
       }
      else
      {
           flag=0;
      }
        printf("------------------------------------------------------------------------------\n");
        printf("  z_gong:= ke          z_xuefen:%3.1f      z_chengji:%6.1f,j,z_xuefen,z_fen");
}
     else
    {
     printf("error ");
    }
     fclose(fp1);
}                 

void delete1()
{   
printf("input the number of student you want to delete:");
gets(temp_NO);
if(fp1==NULL||fp==NULL||fp2==NULL)
{ 
printf("cannot open this file.\n"); 
getch();exit(0); 
} 
while((fread(&data,sizeof(data),1,fp))==1)
{
if(strcmp(temp_NO,data.xuehao)!=0)
fwrite(&data,sizeof(data),1,fp2);
}
remove("s_info.txt"); 
rename("emp.txt","s_info.txt");
fclose(fp);
fclose(fp2);
if((fp1=fopen("s_score.txt","t"))==NULL||(fp2=fopen("emp.txt","wt+"))==NULL)
{ 
printf("cannot open this file.\n"); 
getch();exit(0); 
} 
while((fread(&course_data,sizeof(course_data),1,fp1))==1)
{
if(strcmp(temp_NO,course_data.xuehao)!=0)
fwrite(&course_data,sizeof(course_data),1,fp2);
}
remove("s_score.txt"); 
rename(   "emp.txt","s_score.txt"); 
fclose(fp1);
fclose(fp2);
printf("delete successful");
}
void sort()
{     
printf("please input course number:");
gets(tempcn);
if((fp1=fopen("s_score.txt","t"))==NULL)
{ 
printf("cannot open this file.\n"); 
getch();exit(0); 
} 
i=0;
while((fread(&course_data,sizeof(course_data),1,fp1))==1)     
{     
if(strcmp(tempcn,course_data.course_No)==0) 
{
s_course[i]=course_data; 
i++;
flag=1;   
}
}     
if(!flag)     
{     
printf("no such course\n");     
}     
else     
{     
flag=0;     
printf("please select        way :  a(xuefen)      b(zhong he cheng ji)\n");
ch=getch();         
printf("select:      s(sheng xu)              j(jiang xu)");
ch1=getch();         
if(ch=='a'||ch=='A')
{     
//升序排列
if(ch1=='s')
{   
for(j=0;j<i-1;j++)
{
for(k=j;k<i;k++)
{
if(s_course[j].s_xuefen>s_course[k].s_xuefen)
{
temp_course=s_course[j];
s_course[j]=s_course[k];
s_course[k]=temp_course;
}
}
} 
printf("\nxuehao    course_number    course_name  xuefen    chengji\n");
printf("----------------------------------------------------------------\n");
for(j=0;j<i;j++)
{ 
printf("%6s_x0010_s_x0016_s.1f.1f\n,s_course[j].xuehao,s_course[j].course_No,s_course[j].course_name,s_course[j].s_xuefen,s_course[j].z_chengji");
}
}
//降序排列 
else
{
for(j=0;j<i-1;j++)
{
for(k=j;k<i;k++)
{
if(s_course[j].s_xuefen<s_course[k].s_xuefen)
{
temp_course=s_course[j];
s_course[j]=s_course[k];
s_course[k]=temp_course;
}
}
}
printf("\nxuehao    course_number    course_name  xuefen    chengji\n");
printf("----------------------------------------------------------------\n");
for(j=0;j<i;j++)
{ 
printf("%6s_x0010_s_x0016_s.1f.1f\n,s_course[j].xuehao,s_course[j].course_No,s_course[j].course_name,s_course[j].s_xuefen,s_course[j].z_chengji");
}
}            //ch1
}        //ch if
else if(ch=='b'||ch=='B')
{
//升序排列
if(ch1=='s'||ch1=='S')
{
for(j=0;j<i-1;j++)
{
for(k=j;k<i;k++)
{
if(s_course[j].z_chengji>s_course[k].z_chengji)
{
temp_course=s_course[j];
s_course[j]=s_course[k];
s_course[k]=temp_course;
}
}
} 
printf("\nxuehao   course_number    course_name  xuefen    chengji\n");
printf("----------------------------------------------------------------\n");
for(j=0;j<i;j++)
{ 
printf("%6s_x0010_s_x0016_s.1f.1f\n,s_course[j].xuehao,s_course[j].course_No,s_course[j].course_name,s_course[j].s_xuefen,s_course[j].z_chengji");
}
}
//降序排列 
else
{
for(j=0;j<i-1;j++)
{
for(k=j;k<i;k++)
{
if(s_course[j].z_chengji<s_course[k].z_chengji)
{
temp_course.z_chengji=s_course[j].z_chengji;
s_course[j].z_chengji=s_course[k].z_chengji;
s_course[k].z_chengji=temp_course.z_chengji;
}
}
}
printf("\nxuehao    course_number    course_name  xuefen    chengji\n");
printf("----------------------------------------------------------------\n");
for(j=0;j<i;j++)
{ 
printf("%6s_x0010_s_x0016_s.1f.1f\n,s_course[j].xuehao,s_course[j].course_No,s_course[j].course_name,s_course[j].s_xuefen,s_course[j].z_chengji");
}
}            //ch1
}
else
{
printf("illegal select");
getch();
}
}
}
int main()
{
while(1) 
{ 
printf("<<<<<<<<<<<<<<welcome to use studentmanage>>>>>>>>>>>>>>>>>\n\n"); 
printf("*========================================================= * \n"); 
printf("* 1>input 2>cha zhao * \n"); 
printf("* 3>delete 4>paixu xianshi * \n"); 
printf("* 5>exit * \n"); 
printf("* * \n"); 
printf("* --------------------------------------------------------- * \n"); 
printf("Please input which you want(1-5):"); 
ch=getch(); 
switch(ch) 
{ 
case '1':input();break; 
case '2':search(); getch();break; 
case '3':delete1();getch(); break; 
case '4':sort(); getch();break;
case '5':exit(0); 
default: continue; 
} 
} 
}

