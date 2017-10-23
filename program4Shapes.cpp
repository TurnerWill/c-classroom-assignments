/*############################################################################
#																			#
#	Bill Turner													05/09/2014	#
#	csc 110 401													lab 4		#
#																			#
#		Shape program, prompts user for a character which is used			#
#		to make a shape that the user will select from a menu				#
#																			#
###########################################################################*/

#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>


using namespace std;

// function prototypes
	char menuChoice(char&);
	void square();
	void rectangle();
	void rightTriangle();
	void triangle();
	void diamond();
	void exit();
	
int main ()

{


// local identifers

		// user-input character
		char UserKeyChoice;//ascii character input for shape build
		char Choice;//Menu selection in/out value
		int MenuCode; // for switch code
//input module

cout<<"This program will make a shape of your choice:"<<endl;
cout<<endl<<endl;
	// call to menu function
menuChoice (Choice);
	//test for switch code 
if(Choice=='A'||Choice=='a')
	MenuCode=1;
else
	if(Choice=='B'||Choice=='b')
		MenuCode=2;
	else
		if(Choice=='C'||Choice=='c')
			MenuCode=3;
		else
			if(Choice=='D'||Choice=='d')
				MenuCode=4;
			else
				if(Choice=='E'||Choice=='e')
					MenuCode=5;
			else
				if(Choice=='F'||Choice=='f')
					MenuCode=6;
					
	//begin switch
switch(MenuCode)
{
	case 1:
		square();
	break;
		case 2:
			rectangle();
		break;
			case 3:
				rightTriangle();
			break;
				case 4:
					triangle();
				break;
					case 5:
						diamond();
					break;
						case 6:
							void exit();											
}	
return 0;
}

	// menu choice function
	char menuChoice
		(char& Choice)	
{
	cout<<"Please choose from the following shapes:"<<endl;
	cout<<"(A) .. Square"<<endl;
	cout<<"(B) .. Rectangle"<<endl;
	cout<<"(C) .. Right Triangle"<<endl;
	cout<<"(D) .. Triangle"<<endl;
	cout<<"(E) .. Diamond"<<endl;
	cout<<"(F) .. Exit Program"<<endl<<endl;
	cin>>Choice;
}
	// square function	
	void square()
{
	char UserKeyChoice;
	int Height;
	int Length;
	int CountLength;
	int CountHeight;
	
	cout<<"Please enter a number for the height or length of your square:\n";
	cin>>Height;
	cout<<"Please choose a CHARACTER from the keyboard:\n";
	cin>>UserKeyChoice;
	Length=Height;  
	
	for(CountHeight=1;CountHeight<=Height;CountHeight++)
	{
		for (CountLength=1;CountLength<=Length;CountLength++)
			cout<<" "<<UserKeyChoice;
			cout<<endl;	
	}
}
	// rectangle function
	void rectangle()
{
	char UserKeyChoice;
	int Height;
	int Length;
	int CountLength;
	int CountHeight;
	
	cout<<"Please enter a number for the height of your rectangle:\n";
	cin>>Height;
	cout<<"Please enter a number for the length of your rectangle:\n";
	cin>>Length;
	cout<<"Please choose a CHARACTER from the keyboard:\n";
	cin>>UserKeyChoice;
	
	for(CountHeight=1;CountHeight<=Height;CountHeight++)
	{
		for (CountLength=1;CountLength<=Length;CountLength++)
		cout<<" "<<UserKeyChoice;
		cout<<endl;
	}			
}

	// right triangle function
	void rightTriangle()
{	
	char UserKeyChoice;// character symbol user selects to build triangle
	int Height;
	int Length;
	int CountLength;
	int CountHeight;
	int KeyOut=1;//number of times the character symbol is printed
				// starts with 1 character print at top of triangle and 
				// increments as lines increase until the length amount is
				//printed
	
	cout<<"Please enter a number for the base"<<endl;
	cout<<"of your right triangle: ";
	cin>>Length;
	cout<<"Please choose a CHARACTER from the keyboard: ";
	cin>>UserKeyChoice;
	
	for(CountLength=1;CountLength<=Length;CountLength++)
	{
		for(int a=1;a<=KeyOut;a++)
		cout<<UserKeyChoice;
		KeyOut++;
		cout<<endl;
	}	
}

	//triangle function
	void triangle()
{

int Base;// base of equilateral triangle
char UserKeyChoice;	

cout<<"Please enter a number for the size of"<<endl;
cout<<"the base of the triangle: ";
cin>>Base;
cout<<"Please enter a character to construct"<<endl;
cout<<"the triangle: ";
cin>>UserKeyChoice;
cout<<endl<<endl;
	
for(int i=0;i<Base;i++)
{
for(int space=Base-i;space>0;space--)
cout<<" ";// defining spaces
cout<<UserKeyChoice<<" ";
for (int col=1;col<i+1;col++)
cout<<UserKeyChoice<<" ";
cout <<endl;

}
 	
}
	// diamond function
	void diamond()
{	
	int Diam;// base of equilateral triangle
char UserKeyChoice;	
cout<<"Please enter a number for the size of"<<endl;
cout<<"the diameter of the triangle: ";
cin>>Diam;
cout<<"Please enter a character to construct"<<endl;
cout<<"the triangle: ";
cin>>UserKeyChoice;
cout<<endl<<endl;

for(int i=0;i<Diam;i++)
{
 for(int space=Diam-i;space>0;space--)
 cout<<" ";// defining spaces
 cout<<UserKeyChoice<<" ";
 for (int col=1;col<i+1;col++)
 cout<<UserKeyChoice<<" ";
 cout <<endl;
}

{
	for(int i=Diam-1;i>=0;i--)
	{
		for(int space=0;space<=Diam-i;space++)
		cout<<" ";
		cout<<UserKeyChoice<<" ";
		for (int col=1;col<i+1;col++)
		cout<<UserKeyChoice<<" ";
		cout<<endl;	
	}	 
}

}
	//exit function
	void exit()
{
	return;
}



