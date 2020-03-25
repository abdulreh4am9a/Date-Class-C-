#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class date {
	//data members
	int year;
	int month;
	int day;
public:
	//member functions
	date(); //default constructor
	date(int year, int month, int day); //parameterized constructor
	~date(); //destructor
	void setYear(int year); //function to set year
	void setMonth(int month); //function to set month
	void setDay(int day); //function to set day
	int getYear()const; //constant function to get year
	int getMonth()const; //constamt function to get month
	int getDay()const;  //constant function to get day
	void addYear(int y); //function to add or subtract years in current date
	void addMonth(int m); //function to add or subtract months in current date
	void addDay(int d); //functon to add or subtract days in current date
	int diff(date d); //function to calculate difference between two dates
	void display(); //function to display all data membersmonth
};
int calYearDays(int, int); //function to calculate completed year days between two dates
int calFullMonthDays(int, int, int); //function to calculate running year days of between two dates
bool isLeapYear(int y); //function to check weather the year is leap or not
int monthDays(int m, int y); //function to calculate no. of days of the 