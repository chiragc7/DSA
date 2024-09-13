#include<iostream>
using namespace std;
class recursion
{
 public:
 	 // Tail recurtion
 	 
	  void fun1(int n)
	  {
	  	
	  	if(n>0)
	    	{
            	cout<<n<<" ";
			    fun1(n-1);
		   }
		
	  }
	  
  
	  // Head recursion
	 void fun2(int n)
	 {
	 	
	 	if(n>0)
	 	{
	 		fun2(n-1);
	 		cout<<n<<" ";
	 		
		 }
		 
	  } 
	  
	  // Tree recursion
	  
	  void fun3(int n)
	  {
	  	
	  	if(n>0)
	  	{
	  	
	  		cout<<n<<" ";
	  		fun3(n-1);
	  		fun3(n-1);
	  	
		  }
	  }
  
  //Indirective recursion 
  
  void funA(int n)
  {
  	if(n>0)
  	{
  		cout<<n<<" ";
  		funB(n-1);
  		
	}
  }
  
  
  void funB(int n)
  {
  	if(n>1)
  	{
  		cout<<n<<" ";
  		funA(n/2);
	}
  }
  
  
  //Nested recursion
  int fun4(int n)
  {
  	if(n>100)
  	{
  		return n-10;
  		
	  }
	  else
	  {
		return fun4(fun4(n+11));
	  }
  }

	  	
};

int main()
{
	recursion obj;
	int x=3;
	int y=20;
	
	cout<<"Tail recursion \n";
	obj.fun1(x);
	cout<<endl;
	
	cout<<"Head recursion \n";
	obj.fun2(x);
	cout<<endl;
	
	cout<<"Tree recursion \n";
	obj.fun3(x);
	cout<<endl;
	
	cout<<"Indirect recursion \n";
	obj.funA(y);
	cout<<endl;
	
	cout<<"Nested recursion \n";
	cout<<obj.fun4(95);
	cout<<endl;
}

