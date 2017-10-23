/*#####################################################################################################
#																									  #
#	Bill Turner																			05/02/2014	  #
#	csc 110 401																			lab 3		  #
#				 nest for loops to output a rectangular design using asteriks						  #
#																									  #
#####################################################################################################*/


//	compiler directives

#include<iostream>
#include<cstdlib>


using namespace std;

int main()

{
	int Height=5;
	int Length=3;
	char Symbol='*';
	int CountLength;
	int CountHeight;
	
	//nested for loops prints rectangle
	//columns of asterisks
	
	for(CountHeight=1;CountHeight<=Height;CountHeight++)
	
	{
		for (CountLength=1;CountLength<=Length;CountLength++)	
		cout<<'*';
		cout<<endl;
		
								
	}
		

		
		
	return 0;
}
