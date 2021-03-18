#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cnt;

typedef struct TreeNode {
    char s[1025];
    struct TreeNode* left;
    struct TreeNode* right;
}*BinTree;

BinTree CreateTree(char* s1)
{
    char p[513], q[513];
    BinTree root = (BinTree)malloc(sizeof(struct TreeNode));
    strcpy(root->s, s1);
    if (strlen(s1) == 1) {        //�ݹ�߽�Ϊ�ַ�����ʣ1λ
        root->left = root->right = NULL;
        return root;
    }
    int mid = strlen(s1) / 2;
    strncpy(p, s1, mid);        //pΪ�ַ�������벿��
    p[mid] = '\0';                //strncpy()�����'\0'
    strcpy(q, s1 + mid);        //qΪ�ַ������Ұ벿��
    root->left = CreateTree(p);
    root->right = CreateTree(q);
    return root;
}

void PostorderTraversal(BinTree T)        //�������
{
    if (T) {
        PostorderTraversal(T->left);
        PostorderTraversal(T->right);
        int sign = 0, flag = 0;
        for (int i = 0; i < strlen(T->s); i++) {
            if (T->s[i] == '0') sign = 1;        //sign�ж��Ƿ�0
            if (T->s[i] == '1') flag = 1;        //flag�ж��Ƿ�1
        }
        if (sign && flag) printf("F");
        else if (sign && !flag) printf("B");
        else printf("I");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    char s[1025];
    scanf("%s", s);
    BinTree T;
    T = CreateTree(s);
    PostorderTraversal(T);
    return 0;
}
