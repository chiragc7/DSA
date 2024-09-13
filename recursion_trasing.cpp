#include<iostream>
using namespace std;
class recursion
{
	public:
		void fun(int n)
		{
			if(n>0)
			{
				fun(n-1);
		    	cout<<n<<" ";
			    
			}
		}	
};
int main()
{
	recursion obj;
	int x=5;
	obj.fun(x);

}
