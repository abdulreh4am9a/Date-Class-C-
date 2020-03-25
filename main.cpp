#include"date.h"
int main() {
	date obj; //it will call default constructor
	obj.display();
	date obj1(1947, 8, 14); //it will call parameterized constructor
	obj1.display();
	date obj3(1999, 13, 2); //as the month is not valid it will set default values to the object
	obj3.display();
	cout << "Difference between obj1 and obj3 is : " <<obj1.diff(obj3) << endl;
	obj3.setDay(12); //it will set the day to 12 of obj 3
	obj3.display();
	obj1.setMonth(14); //as the month is not valid it will set the month of obj1 to 1
	obj1.display();
	cout << "Displaying year of obj using getter function : " << obj.getYear() << endl;
	cout << "Displaying month of obj1 using getter function : " << obj1.getMonth() << endl;
	cout << "Displaying day of obj3 using getter function : " << obj3.getDay() << endl;
	obj1.addYear(12); //it will add 12 years in the date obj1
	obj1.display();
	obj1.addYear(-10); //it will subtract 12 years in the date obj1
	obj1.display();
	obj3.addMonth(25); //it will add 25 months in the date obj3
	obj3.display();
	obj3.addMonth(-30); //it will subtract 30 months in the date obj3
	obj3.display();
	obj.addDay(14); //it will add 14 days in the date obj
	obj.display();
	obj.addDay(-20); //it will subtract 20 days in the date obj
	obj.display();
	date objx(1947, 8, 14);
	date objy(1947, 8, 16);
	cout << objx.diff(objy)<<endl;
	system("pause");
	return 0;
}