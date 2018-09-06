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
			if(r==1)
			{
				cout<<"*";
			}
			else
			{
				if(c==5 || c==r)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
} 
