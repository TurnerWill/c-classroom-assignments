/*###############################################################################
#																				#
#	Bill Turner														05/13/14	#
#	csc 110-401														PROGRAM 5	#
#					employee payroll program using reference					#
#				parameters to get an employees name, id#(up to 4 digits),		#
#			hours worked and hourly rate. A function is used to to calculate	#
#			the employee's gross pay. A function is used to output the			#
#			employee payroll information in a report form. amended to include	#
#			a loop to allow processing of additional accounts, and amendeded	#
#			to allow the computepay function to calculate gross overtime		#
#			and double overtime.												#
###############################################################################*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>

using namespace std;
// global constants (none)
// function prototypes

void GetData(string &Namef, int &IDNumf, float &HoursWorkf,
				float &HourlyRatef);

void ComputePay(float HoursWorkf, float HourlyRatef, float& GrossPayf);

void PrintReport(string Namef, int IDNumf, float HoursWorkf,
					float HourlyRatef, float GrossPayf);

int main()
{
	
	
	
	//local indentifiers
	
	string Name;
	int IDNum;
	float HoursWork,
			HourlyRate,
				GrossPay;
	char Another;
	
	do
	
	{	
	//input module
	GetData(Name, IDNum, HoursWork, HourlyRate);
	cout<<endl<<endl;
	// process module
	ComputePay(HoursWork, HourlyRate, GrossPay);
	//output module
	PrintReport(Name, IDNum, HoursWork, HourlyRate, GrossPay);
	cout<<endl;
	cout<<"Would you like to process another employee? <Y or N>";
	cin>>Another;
	cout<<endl;
	system("PAUSE");
	system("CLS");
	
	}while (Another!='N'&&Another!='n');	
	
	return 1;
} //end main

	void GetData(string &Namef, int &IDNumf, float &HoursWorkf, float &HourlyRatef)
	{
		//local identifiers
		string FirstName, LastName;
		cout<<"Enter the employee's full name <end with #>:"<<endl;
		getline (cin, Namef, '#');
		cout<<"Please enter 4 digit employee id#:"<<endl;
		cin>>IDNumf;
		cout<<"Please enter the hours worked:"<<endl;
		cin>>HoursWorkf;
		cout<<"Please enter the hourly pay rate:"<<endl;
		cin>>HourlyRatef;
	}// end GetData function 
	
	void ComputePay(float HoursWorkf, float HourlyRatef, float &GrossPayf)
	{	if(HoursWorkf>=0 && HoursWorkf<=40)
			GrossPayf=HoursWorkf*HourlyRatef; 
		else
			if(HoursWorkf>40 && HoursWorkf<=60)
				GrossPayf=(HourlyRatef*40)+((HoursWorkf-40)-(HoursWorkf-60))*((HourlyRatef/2)+HourlyRatef);
			else
				if(HoursWorkf>60)
					GrossPayf=(HourlyRatef*40)+((HoursWorkf-40)-(HoursWorkf-60))*((HourlyRatef/2)+HourlyRatef)+
					(HoursWorkf-60)*(HourlyRatef*2);
		return;
	}// end ComputePay function 
	
	void PrintReport (string Name, int IDNum, float HoursWork, float HourlyRate, float GrossPay)
	{
		cout<<"Employee Payroll Report"<<endl;
		cout<<"-----------------------"<<endl<<endl;
		cout<<"Employee Name\t\t"<<Name<<endl;
		cout<<"Employee ID #\t\t"<<IDNum<<endl;
		cout<<"Hours Worked\t\t"<<HoursWork<<endl;
		cout<<"Hourly Rate\t\t"<<"$"<<fixed<<showpoint<<setprecision(2)<<HourlyRate<<endl;
		cout<<"Gross Pay\t\t"<<"$"<<fixed<<showpoint<<setprecision(2)<<GrossPay<<endl;
		return;	
	}


