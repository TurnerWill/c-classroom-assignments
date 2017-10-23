/*#######################################################################
#																		#
#	Bill Turner					05/15/14	#
#	csc 110 - 401					Lab 6		#
#				Program to calculate the class average	#
#	for an unknown number of test scores (up to 10 scores). 	#
#	Program consists of						#
#	3 functions. The first to get data, the second to compute	#
#	the average, andthe third to print the test score; Using 	#
#	arrays as function parameters.  The class average rounded to the#
# 	the nearest 100th.						#
#######################################################################*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
 
using namespace std;

// constant identifiers
const int MAXSIZE=10;

// function prototypes
void GetTestScores(int TestScoresf[], int &Indexf);
void ComputeAverage(int TestScoresf[], int Indexf, float &Avgf);
void PrintReport(int TestScoresf[], int Indexf, float Avgf);

int main()
{
	// local identifiers
	
	int TestScores[MAXSIZE];
	int Index;
	float ClassAverage;
	char Another;
	
	do
	{
		GetTestScores(TestScores, Index);
		ComputeAverage(TestScores, Index, ClassAverage);
		PrintReport(TestScores, Index, ClassAverage);
		
		cout<<"Do you have more grades to process? <Y or N>\t";
		cin>>Another;
		
		if((Another=='Y')||(Another=='y'))
		{
			system("PAUSE");
			system("CLS");
		}	// end if
		
	} while ((Another=='Y')||(Another=='y')); //end do/while
	
	return 0;
} //end main

// functions

	//GetTestScore function
	void GetTestScores(int TestScoresf[], int &Indexf)
	{
		Indexf=-1;
		do
		{
			Indexf++;
			cout<<"Please enter test score # (neg value to exit) "<<Indexf+1<<"\t";
			cin>>TestScoresf[Indexf];
		}while (TestScoresf[Indexf]>=0 && (Indexf<MAXSIZE-1));
		cout<<endl;
		return;	
	} 

	// function -- compute avg
	void ComputeAverage(int TestScoresf[], int Indexf, float &Avgf)
	{
		int sum=0;
		for(int i=0; i<Indexf; i++)
			sum+=TestScoresf[i];
			Avgf=float(sum)/Indexf;
		return;
	}	
	
	// function -- print report
	void PrintReport(int TestScoresf[], int Indexf, float Avgf)
	{
		cout<<"\t"<<"Test Scores Report"<<endl<<endl;
		cout<<"Test#		Test Score"<<endl;
		
		for(int i=0;i<MAXSIZE; i++)
			cout<<i+1<<"\t"<<"\t"<<TestScoresf[i]<<endl;
			cout<<endl;
			cout<<"Class Average:\t"<<fixed<<showpoint<<setprecision(2)<<Avgf;
			cout<<endl<<endl;

		return;
		
	}
		
