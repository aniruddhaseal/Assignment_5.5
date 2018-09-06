#include<iostream>
using namespace std;
int main()
{
	//loop for controlling the rowwise operation
	for(int r=1;r<=5;r++)
	{
		//loop for controlling the columnwise operation
		for(int c=5;c>=r;c--)
		{
			cout<<" ";
		}
		for(int c=1;c<=5;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
