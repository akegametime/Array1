#include <iostream>
#include<string>
using namespace std;
int student;

void ListStudents(int student,string name[30],float score[30]);
char Calgrade(float score[30]);

int main()
{
    
	string name[30];
	float score[30];

	cout<<"Input Number of Student : ";
	cin>>student;

	for(int i=0;i<student;i++)
	{ 
	cout<<"Input Name : ";
	cin>>name[i];
	cout<<"Input Score : ";
	cin>>score[i];
	
	
	}
	
	ListStudents(student,name,score);

    return 0;
}

void ListStudents(int student,string name[30],float score[30])
{
	for(int i=0;i<student;i++)
	{
		cout<<"Student Name : "<<name[i];
		cout<<"   Score : "<<score[i]<<endl;
	}

	Calgrade(score);
}


char Calgrade(float score[30])
{   
	char grade;
	for(int i=0;i<student;i++)
{

	if(score[i]>=80 && score[i]<=100)
	{ grade='A';
		cout<<"Your Grade is  "<<grade<<endl;
	}
	else if(score[i]>=70 && score[i]<=79)
	{ grade='B';
		cout<<"Your Grade is  "<<grade<<endl;
	}
	else if(score[i]>=60 && score[i]<=69)
	{ 
		grade='C';
		cout<<"Your Grade is  "<<grade<<endl;
	}
	else if(score[i]>=0 && score[i]<=59)
	{   grade='D';
		cout<<"Your Grade is  "<<grade<<endl;
	}
	
  }
	return(grade);
}