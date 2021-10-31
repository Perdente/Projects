//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class student
{
	int rollno;
	char name[50];
	int oop_marks, dld_marks, na_marks, tel_marks, math_marks,eco_marks,oopl_marks,dldl_marks,nal_marks;
	double per,oopgpa, dldgpa, nagpa, telgpa, mathgpa,ecogpa,ooplgpa,dldlgpa,nalgpa;
	double gpa;
	void calculate();	//function to calculate grade
public:
	void getdata();		//function to accept data from user
	void showdata() const;	//function to show data on screen
	void show_tabular() const;
	int retrollno() const;
}; //class ends here


void student::calculate()
{
	per=(oop_marks+dld_marks+math_marks+na_marks+tel_marks+eco_marks+oopl_marks+dldl_marks+nal_marks)/9.0;
      if(oop_marks>=80)
		oopgpa=4.00;
	else if(oop_marks>=75&&oop_marks<=79)
		oopgpa=3.75;
	else if(oop_marks>=70&&oop_marks<=74)
		oopgpa=3.50;
	else if(oop_marks>=65&&oop_marks<=69)
        oopgpa=3.25;
	else if(oop_marks>=60&&oop_marks<=64)
		oopgpa=3.00;
	else if(oop_marks>=55&&oop_marks<=59)
		oopgpa=2.75;
	else if(oop_marks>=50&&oop_marks<=54)
		oopgpa=2.50;
	else if(oop_marks>=45&&oop_marks<=49)
		oopgpa=2.25;
	else if(oop_marks>=40&&oop_marks<=44)
		oopgpa=2.00;
	else
        oopgpa=0.00;
      if(dld_marks>=80)
		dldgpa=4.00;
	else if(dld_marks>=75&&dld_marks<=79)
		dldgpa=3.75;
	else if(dld_marks>=70&&dld_marks<=74)
		dldgpa=3.50;
	else if(dld_marks>=65&&dld_marks<=69)
        dldgpa=3.25;
	else if(dld_marks>=60&&dld_marks<=64)
		dldgpa=3.00;
	else if(dld_marks>=55&&dld_marks<=59)
		dldgpa=2.75;
	else if(dld_marks>=50&&dld_marks<=54)
		dldgpa=2.50;
	else if(dld_marks>=45&&dld_marks<=49)
		dldgpa=2.25;
	else if(dld_marks>=40&&dld_marks<=44)
		dldgpa=2.00;
	else
        dldgpa=0.00;
    if(math_marks>=80)
		mathgpa=4.00;
	else if(math_marks>=75&&math_marks<=79)
		mathgpa=3.75;
	else if(math_marks>=70&&math_marks<=74)
		mathgpa=3.50;
	else if(math_marks>=65&&math_marks<=69)
        mathgpa=3.25;
	else if(math_marks>=60&&math_marks<=64)
		mathgpa=3.00;
	else if(math_marks>=55&&math_marks<=59)
		mathgpa=2.75;
	else if(math_marks>=50&&math_marks<=54)
		mathgpa=2.50;
	else if(math_marks>=45&&math_marks<=49)
		mathgpa=2.25;
	else if(math_marks>=40&&math_marks<=44)
		mathgpa=2.00;
	else
        mathgpa=0.00;
    if(na_marks>=80)
		nagpa=4.00;
	else if(na_marks>=75&&na_marks<=79)
		nagpa=3.75;
	else if(na_marks>=70&&na_marks<=74)
		nagpa=3.50;
	else if(na_marks>=65&&na_marks<=69)
            nagpa=3.25;
	else if(na_marks>=60&&na_marks<=64)
		nagpa=3.00;
	else if(na_marks>=55&&na_marks<=59)
		nagpa=2.75;
	else if(na_marks>=50&&na_marks<=54)
		nagpa=2.50;
	else if(na_marks>=45&&na_marks<=49)
		nagpa=2.25;
	else if(na_marks>=40&&na_marks<=44)
		nagpa=2.00;
	else
        nagpa=0.00;
      if(tel_marks>=80)
		telgpa=4.00;
	else if(tel_marks>=75&&tel_marks<=79)
		telgpa=3.75;
	else if(tel_marks>=70&&tel_marks<=74)
		telgpa=3.50;
	else if(tel_marks>=65&&tel_marks<=69)
        telgpa=3.25;
	else if(tel_marks>=60&&tel_marks<=64)
		telgpa=3.00;
	else if(tel_marks>=55&&tel_marks<=59)
		telgpa=2.75;
	else if(tel_marks>=50&&tel_marks<=54)
		telgpa=2.50;
	else if(tel_marks>=45&&tel_marks<=49)
		telgpa=2.25;
	else if(tel_marks>=40&&tel_marks<=44)
		telgpa=2.00;
	else
            telgpa=0.00;
      if(eco_marks>=80)
		ecogpa=4.00;
	else if(eco_marks>=75&&eco_marks<=79)
		ecogpa=3.75;
	else if(eco_marks>=70&&eco_marks<=74)
		ecogpa=3.50;
	else if(eco_marks>=65&&eco_marks<=69)
        ecogpa=3.25;
	else if(eco_marks>=60&&eco_marks<=64)
		ecogpa=3.00;
	else if(eco_marks>=55&&eco_marks<=59)
		ecogpa=2.75;
	else if(eco_marks>=50&&eco_marks<=54)
		ecogpa=2.50;
	else if(eco_marks>=45&&eco_marks<=49)
		ecogpa=2.25;
	else if(eco_marks>=40&&eco_marks<=44)
		ecogpa=2.00;
	else
        ecogpa=0.00;
      if(oopl_marks>=80)
		ooplgpa=4.00;
	else if(oopl_marks>=75&&oopl_marks<=79)
		ooplgpa=3.75;
	else if(oopl_marks>=70&&oopl_marks<=74)
		ooplgpa=3.50;
	else if(oopl_marks>=65&&oopl_marks<=69)
        ooplgpa=3.25;
	else if(oopl_marks>=60&&oopl_marks<=64)
		ooplgpa=3.00;
	else if(oopl_marks>=55&&oopl_marks<=59)
		ooplgpa=2.75;
	else if(oopl_marks>=50&&oopl_marks<=54)
		ooplgpa=2.50;
	else if(oopl_marks>=45&&oopl_marks<=49)
		ooplgpa=2.25;
	else if(oopl_marks>=40&&oopl_marks<=44)
		ooplgpa=2.00;
	else
        ooplgpa=0.00;
      if(dldl_marks>=80)
		dldlgpa=4.00;
	else if(dldl_marks>=75&&dldl_marks<=79)
		dldlgpa=3.75;
	else if(dldl_marks>=70&&dldl_marks<=74)
		dldlgpa=3.50;
	else if(dldl_marks>=65&&dldl_marks<=69)
            dldlgpa=3.25;
	else if(dldl_marks>=60&&dldl_marks<=64)
		dldlgpa=3.00;
	else if(dldl_marks>=55&&dldl_marks<=59)
		dldlgpa=2.75;
	else if(dldl_marks>=50&&dldl_marks<=54)
		dldlgpa=2.50;
	else if(dldl_marks>=45&&dldl_marks<=49)
		dldlgpa=2.25;
	else if(dldl_marks>=40&&dldl_marks<=44)
		dldlgpa=2.00;
	else
            dldlgpa=0.00;
      if(nal_marks>=80)
		nalgpa=4.00;
	else if(nal_marks>=75&&nal_marks<=79)
		nalgpa=3.75;
	else if(nal_marks>=70&&nal_marks<=74)
		nalgpa=3.50;
	else if(nal_marks>=65&&nal_marks<=69)
        nalgpa=3.25;
	else if(nal_marks>=60&&nal_marks<=64)
		nalgpa=3.00;
	else if(nal_marks>=55&&nal_marks<=59)
		nalgpa=2.75;
	else if(nal_marks>=50&&nal_marks<=54)
		nalgpa=2.50;
	else if(nal_marks>=45&&nal_marks<=49)
		nalgpa=2.25;
	else if(nal_marks>=40&&nal_marks<=44)
		nalgpa=2.00;
	else
        nalgpa=0.00;
	gpa = (oopgpa*3+dldgpa*3+mathgpa*3+nagpa*3+ecogpa*3+telgpa*3+ooplgpa*1.5+dldlgpa*0.75+nalgpa*0.75 )/21.0;

}

void student::getdata()
{
	cout<<"\nEnter The roll number of student ";
	cin>>rollno;
	cout<<"\n\nEnter The Name of student ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nEnter The marks in OOP out of 100 : ";
	cin>>oop_marks;
	cout<<"\nEnter The marks in DLD out of 100 : ";
	cin>>dld_marks;
	cout<<"\nEnter The marks in NA out of 100 : ";
	cin>>na_marks;
	cout<<"\nEnter The marks in TEL out of 100 : ";
	cin>>tel_marks;
	cout<<"\nEnter The marks in MATH out of 100 : ";
	cin>>math_marks;
	cout<<"\nEnter The marks in ECO out of 100 : ";
	cin>>eco_marks;
	cout<<"\nEnter The marks in OOPL out of 100 : ";
	cin>>oopl_marks;
	cout<<"\nEnter The marks in DLDL out of 100 : ";
	cin>>dldl_marks;
	cout<<"\nEnter The marks in NAL out of 100 : ";
	cin>>nal_marks;
	calculate();
}

void student::showdata() const
{
	cout<<"\nRoll number of student : "<<rollno;
	cout<<"\nName of student : "<<name;
	cout<<"\nMarks in OOP : "<<oop_marks;
	cout<<"\nMarks in DLD : "<<dld_marks;
	cout<<"\nMarks in NA : "<<na_marks;
	cout<<"\nMarks in TEL : "<<tel_marks;
	cout<<"\nMarks in MATH :"<<math_marks;
      cout<<"\nMarks in ECO :"<<eco_marks;
      cout<<"\nMarks in OOPL :"<<oopl_marks;
      cout<<"\nMarks in DLDL :"<<dldl_marks;
      cout<<"\nMarks in NAL :"<<nal_marks;
      cout<<"\nPercentage of student is  :"<<per;
	cout<<"\nTGPA of student is :"<<gpa;
}

void student::show_tabular() const
{
	cout<<rollno<<setw(6)<<" "<<name<<setw(14)<<oop_marks<<setw(5)<<dld_marks<<setw(6)<<na_marks<<setw(6)
	<<tel_marks<<setw(6)<<math_marks<<setw(6)<<eco_marks<<setw(4)<<oopl_marks<<setw(4)<<dldl_marks<<setw(4)<<nal_marks<<setw(6)<<per<<setw(5)<<gpa<<endl;
}

int student::retrollno() const
{
	return rollno;
}


//***************************************************************
//    	function declaration
//****************************************************************

void write_student();	//write the record in binary file
void display_all();	//read all records from binary file
void display_sp(int);	//accept rollno and read record from binary file
void modify_student(int);	//accept rollno and update record of binary file
void delete_student(int);	//accept rollno and delete selected records from binary file
void class_result();	//display all records in tabular format from binary file
void result();		//display result menu
void intro();		//display welcome screen
void entry_menu();	//display entry menu on screen


//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
	char ch;
	system("COLOR 70");
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2);// program outputs decimal number to two decimal places
	intro();
	system("cls");

	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. RESULT MENU";
		cout<<"\n\n\t02. ENTRY/EDIT MENU";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-3) ";
		cin>>ch;
		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_menu();
				break;
			case '3':
				break;
			default :cout<<"\a";
		}
    }while(ch!='3');
	return 0;
}

//***************************************************************
//    	function to write in file
//****************************************************************

void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("PROJECT007.dat",ios::binary|ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
	outFile.close();
    	cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to read all records from file
//****************************************************************

void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("PROJECT007.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n=============================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to read specific record from file
//****************************************************************

void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("PROJECT007.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()==n)
		{
	  		 st.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to modify record of file
//****************************************************************

void modify_student(int n)
{
	bool found=false;
	student st;
	fstream File;
	File.open("PROJECT007.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&st), sizeof(student));
		if(st.retrollno()==n)
		{
			st.showdata();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			st.getdata();
		    	int pos=(-1)*static_cast<int>(sizeof(st));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&st), sizeof(student));
		    	cout<<"\n\n\t Record Updated";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to delete record of file
//****************************************************************

void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("PROJECT007.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("PRO007.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("PROJECT007.dat");
	rename("PRO007.dat","student.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}

//***************************************************************
//    	function to display all students grade report
//***** ***********************************************************

void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("PROJECT007.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
	cout<<"================================================================================\n";
	cout<<"R.No       Name        OOP   DLD   NA   TEL   MATH   ECO  OL  DL  NL  %age  GPA"<<endl;
	cout<<"================================================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}

//***************************************************************
//    	funo0ction to display result menu
//****************************************************************

void result()
{
	char ch;
	int rno;
	system("cls");
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice (1/2/3)? ";
	cin>>ch;+
	system("cls");
	switch(ch)
	{
	case '1' :	class_result(); break;
	case '2' :	cout<<"\n\n\tEnter Roll Number Of Student : "; cin>>rno;
				display_sp(rno); break;
	case '3' :	break;
	default:	cout<<"\a";
	}
}

//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************

void intro()
{
	cout<<"\n\n\n\t\t  STUDENT";
	cout<<"\n\n\t\tREPORT CARD";
	cout<<"\n\n\t\t  PROJECT";
	cout<<"\n\n\n\t\t  MADE BY:";
	cout<<"\n\n\n\t\tCICADA CODERS";
	cin.get();
}

//***************************************************************
//    	ENTRY / EDIT MENU FUNCTION
//****************************************************************

void entry_menu()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	write_student(); break;
	case '2':	display_all(); break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			display_sp(num); break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			modify_student(num);break;
	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			delete_student(num);break;
	case '6':	break;
	default:	cout<<"\a"; entry_menu();
	}
}

//***************************************************************
//    			END OF PROJECT
//***************************************************************

