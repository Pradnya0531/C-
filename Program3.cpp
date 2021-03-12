#include<iostream>


class ArithmeticOperations
{
	public:
		int iValue1=0;					//Characterstics
		int iValue2=0;					//Characterstics
		int iValue3=0;					//Characterstics
		int iValue4=0;					//Characterstics
		int iValue5=0;					//Characterstics

	int value=0;
	

	void Addition()						//Behaviour
	{
		std::cout<<"Enter any three Numbers: "<<std::endl;
		std::cin>>iValue1;
		std::cin>>iValue2;
		std::cin>>iValue3;
		
		std::cout<<"Addition of given three numbers is: "<<iValue1+iValue2+iValue3<<std::endl;
	}
	
	void Subtraction()					//Behaviour
	{
		std::cout<<"Enter any three Numbers: "<<std::endl;
		std::cin>>iValue1;
		std::cin>>iValue2;
		std::cin>>iValue3;

		std::cout<<"Subtraction of given three numbers is:"<<iValue1-iValue2-iValue3<<std::endl;
	}
	
	
	void Multiplication()					//Behaviour
	{
		std::cout<<"Enter any three Numbers: "<<std::endl;
		std::cin>>iValue4;
		std::cin>>iValue5;
		std::cin>>iValue2;
		
		std::cout<<"Multiplication of given three numbers is:"<<iValue4*iValue5*iValue2<<std::endl;
	}
	
};

int main()
{
	ArithmeticOperations add;
	
	ArithmeticOperations sub;
	
	ArithmeticOperations mul;
	
	
	
	std::cout<<"Enter Choice:"<<std::endl<<"1.Addition"<<std::endl<<"2.Substraction"<<std::endl<<"3.Multiplication"<<std::endl;
	int Case=0;
	char ch='a';
	std::cin>>Case;
	switch(Case)
	{
		case 1:
			add.Addition();
			
		break;

		case 2:
			sub.Subtraction();
			
		break;
		
		case 3:
			mul.Multiplication();
		break;
		
		default:
			
		break;
       	}	
	
	return 0;
}
