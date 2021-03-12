#include<iostream>
using namespace std;
class Addition
{
      public:
		
		          int iAnswer=0;
	    Addition()
	    {
		          cout<<"Inside Constructor"<<endl;

	    }
	
	    ~Addition()
	    {
		          cout<<"Inside Destructor"<<endl;
	    }
	
	    int AdditionM(int iNo1,int iNo2)
	    {
		          iAnswer=iNo1+iNo2;
		          return iAnswer;
	    }		
		

};


int main()
{
	    Addition add;
	    int iResult=0;
	    int iValue1=0;
	    int iValue2=0;
	    cout<<"Enter any two number:\n";
	    cin>>iValue1>>iValue2;
	    iResult=add.AdditionM(iValue1,iValue2);
	    cout<<"Addition of two number is:"<<iResult<<endl;
	    return 0;

}
