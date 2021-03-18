#include<stdio.h>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a<b;
}
int main()
{
	int a[3];
	while(scanf("%d%d%d",&a[0],&a[1],&a[2])!=EOF)
		{
			sort(a,a+3,compare);
			if(a[0]+a[1]>a[2]&&a[2]-a[1]<a[0])
				{
					printf("YES\n");
				}
				else printf("NO\n");
		}
		return 0;
}
