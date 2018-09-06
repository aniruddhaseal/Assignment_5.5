#include<iostream>
using namespace std;
int main()
{
	//loop for controlling the rowwise operation
	for(int r=1;r<=5;r++)
	{
		//loop for controlling the columnwise operation
		for(int c=1;c<=r;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
