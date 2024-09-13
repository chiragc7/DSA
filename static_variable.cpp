#include<iostream>
using namespace std;
class recursion
{
	public:
		// funtion without use of any static variable
		int fun(int n)
		{
			if(n>0)
			{
				return fun(n-1)+n;
			}
			return 0;
		}
		
	// funtion with static variable 
		int fun2(int n)
		{
			static int x=0;
			if(n>0)
			{
				x++;
				return fun2(n-1)+x;
			}
			return 0;
		}
};
int main()
{
	recursion obj;
	int a=5;
	cout<<obj.fun(a);  // output is 15
	cout<<endl<<obj.fun2(a);  // output is 25
}
