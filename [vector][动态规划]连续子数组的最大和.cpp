#include<iostream>
#include<algorithm>
#include<vector>
int N = 100005;
using namespace std;
vector <int> nums;
int maxSubArray(vector<int> &nums)
{
	int i,j,sum=0;
	int max = -N;
	for(i=0;i<nums.size();i++)
	{
		if(sum<0){
			sum=0;
			sum+=nums[i]; 
		}
		else sum+=nums[i];
		if(max<sum) max = sum;
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		nums.push_back(a[i]);
	}
	cout<<(maxSubArray( nums))<<endl;
	return 0;
}
