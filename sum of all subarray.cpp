 #include<iostream>
#include<climits>
using namespace std;

int main()
{   int n;
    cin>>n;
	int a[n];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{   int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=a[j];
			cout<<sum<<endl;
		}
	
	}

}
