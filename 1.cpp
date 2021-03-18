 #include<bits/stdc++.h>
int main()
{
	double a,sum,t;
	int b=1;
	sum=0;
	a=1;
	while(a<=100)
	{
		t=1/a*b;
		sum=sum+t;
		b*=-1;
		a++;
	}
	printf("%f\n",sum);
	return 0;
}

