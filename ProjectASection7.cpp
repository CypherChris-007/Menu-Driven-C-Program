// ProjectASection7.cpp 
// Author: Chris Jimenez
// Current Date: 11.26.2023
// Purpose: create an option 8  with prepopuated sturture values, that display into a foid function
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
//void headers
void printFooter();
void printLine();
void printStar();
void printMessage(string);
//call by refrence string paramters
void callByReference(string&, string&);
//functions 3,4,5,6
void gpa(double);
void drawTriangle(int);
double calculatePay(double, double);
double promptForDouble(string);
void displayInt(float, float);
//Arrays
void getGrades(double[], int);
void displayGrades(double[], int);
double averageGrades(double[], int);
//define structure function
struct Contacts
{
	string firstName;
	string lastName;
	string phoneNumber;
};
//protoytpe function
void printContacts(Contacts[]);
// Main function
int main()
// varabels
{
	int triangleSize;
	string firstName, lastName;
	int userSelect;
	int numberOne, numberTwo;
	double result;
	double nGrade;
	double rateOfPay;
	double hoursWorked;
	double pay;
	float intBalance;
	float intRate;
	//Array
	const int ARRAY_SIZE = 5;
	int myIndex = 0;
	double myGrades[ARRAY_SIZE];
	//struct & assigned values + tempoary array size
	Contacts myContacts[3] =
	{
		{"Kobe ", "Bryant", "210-902-7281", },
		{ "James ", "Bond", "210-792-2203", },
		{ "John ", "Wick", "210-602-7895", }
	};

	//void message updated
	printMessage("*             Programing 1 Course Project             *");
	callByReference(firstName, lastName);
	cout << "Welcome to my course " << firstName << "!\n";
	printStar();
	// show user menu
	// 1 to calculate Square Root
	// 2 to enter x to y power
	// 3 convert numerical GPA to letter grade
	// 4 Right triangle
	// 5 calculate weekly pay
	// 6 Interest earned
	// 7 Calculate Grades
	// 8 contacts listed
	// 0 to end program
	do {//Repeat user select
		printLine();
		cout << "| 1) Enter 1 to calculate Square Root                 |\n";
		cout << "| 2) Enter 2 to Enter X to Y power                    |\n";
		cout << "| 3) Enter 3 to Convert Numercial GPA to letter grade |\n";
		cout << "| 4) Enter 4 to Create a Right Triangle               |\n";
		cout << "| 5) Enter 5 to calculate Weekly Pay                  |\n";
		cout << "| 6) Enter 6 to Calculate Interest Earned             |\n";
		cout << "| 7) Enter 7 to Calculate Grades                      |\n";
		cout << "| 8) Enter 8 to print Contacts                        |\n";
		cout << "| 9) Enter 0 to Quit The program                      |\n";
		printLine();
		//Prompt user menu selection
		cout << "Please Make a Selection on the Menu: \n";
		cin >> userSelect;
		cin.ignore();
		//Create switch statement, action is based on user request
		//Case 1.
		//prompt user for a number to square root
		//output number 1
		//Case 2.
		//prompt user for number 1(x)
		//output number 1 (x) square root number 2 (y)
		//Case 3.userdefined functions (updated)
		//prompt user for number grade
		//output number grade into letter GPA
		//Case 4.Userdefined functions (updated)
		//prompt user for size of triangle
		//Case 5.
		//prompt user for hourly pay & hours worked
		//Case 6.
		//prompt user for balance and added interest
		//Case 7.
		//prompt user for 5 grades. Display a void array function, display it,and display average
			switch (userSelect) {
			case 1:
				cout << "Enter a number to Square Root: ";
				cin >> numberOne;
				cout << "The product of the number is: " << sqrt(numberOne) <<
					endl;
				break;
			case 2:
				cout << "Enter X: ";
				cin >> numberOne;
				cout << "Enter Y: ";
				cin >> numberTwo;
				result = pow(numberOne, numberTwo);
				cout << numberOne << " to the power of " << numberTwo << " is "
					<< result << endl;
				break;
			case 3:
				cout << "Enter your Numerical Grade: ";
				cin >> nGrade;
				gpa(nGrade);
				break;
			case 4:
				cout << "Enter the size of the Triangle: " << endl;
				cin >> triangleSize;
				drawTriangle(triangleSize);
				break;
			case 5://Alamo paycheck used
				rateOfPay = promptForDouble("Please Enter Hourly Pay: ");
				//Prompt user for hours worked
				hoursWorked = promptForDouble("Please Enter Hours Worked: ");
				//calculate function to return pay
				pay = calculatePay(rateOfPay, hoursWorked);
				//output result to user
				cout << "Your Pay is: " << "$" << setprecision(2) << pay << endl;
				break;
			case 6:
				cout << "Enter inital balance: ";
				cin >> intBalance;
				cout << "Enter Yearly Intrest rate: ";
				cin >> intRate;
				displayInt(intBalance, intRate);
				break;
			case 7://Array function ouput
				cout << "Grade Calculator\n";
				getGrades(myGrades, ARRAY_SIZE);
				displayGrades(myGrades, ARRAY_SIZE);
				myIndex = averageGrades(myGrades, ARRAY_SIZE);
				cout << "The Grade Average is: " << fixed << setprecision(2) <<myIndex << endl;
				break;
			case 8:
				//contact list
				printContacts(myContacts);
				break;
			case 0:
			{
				//End selection
			}
			default:
				break;
				// End select
			}
	} while (userSelect != 0);
	{
	}
	return 0;
} // end of main program
//void header & functions
void printLine()
{
	cout << "|-----------------------------------------------------|\n";
}
void printStar()
{
	cout << "*******************************************************\n";
}
void printMessage(string pMessage)
{
	printStar();
	cout << pMessage << endl;
	printStar();
}
void callByReference(string& pFirst, string& pSecond)//string paramter
{
	cout << "Please Enter your First Name: ";
	cin >> pFirst;
	cout << "Please Enter your Last Name: ";
	cin >> pSecond;
}
void gpa(double nGrade)//case 3
{
	if (nGrade >= 3.7)
	{
		cout << "Your Letter grade is an A\n";
	}
	else if (nGrade >= 2.7)
	{
		cout << "Your Letter grade is an B\n";
	}
	else if (nGrade >= 1.7)
	{
		cout << "Your Letter grade is an C\n";
	}
	else if (nGrade >= 1.0)
	{
		cout << "Your Letter grade is an D\n";
	}
	else if (nGrade >= 0.0)
	{
		cout << "Your Letter grade is an F\n";
	}
}
//void function 4
double promptForDouble(string pPrompt)//
{
	double myReturn = 0;
	cout << pPrompt << endl;
	cin >> myReturn;
	return myReturn;
}
void drawTriangle(int triangleSize)//case 4
{
	// for loop
	for (int row = 1; row <= triangleSize; row++) {//rows of the triangle
		for (int col = 1; col <= row; col++) {//colums of the triangle
			cout << "*";
		}cout << endl;
	}
}
double calculatePay(double pRate, double pHours)
{
	double myReturn = 0;
	//if, phours is less than or equal
	if (pHours <= 40)
	{
		myReturn = pRate * pHours;
	}
	else // Overtime
	{
		myReturn = (pRate * 40) + ((pHours - 40) * (pRate * 1.5));
	}
	return myReturn;
}
void displayInt(float pBalance, float pInterest)//void function for annual interest
{
	for (int i = 1; i <= 5; i++)
	{
		float total = (pBalance + (pBalance * pInterest));
		pBalance = total;
		cout << "year " << i << ": $" << fixed << setprecision(2) << pBalance
			<<
			endl;
	}
}
//array functions, case 7
void getGrades(double pGrade[], int pSize)
{
	for (int i = 0; i < pSize; i++)
	{
		cout << "Enter Grade " << (i + 1) << ":";
		cin >> pGrade[i];
	}
}
void displayGrades(double pGrade[], int pSize)
{
	for (int i = 0; i < pSize; i++)
	{
		cout << "Grade " << (i + 1) << ": ";
		cout << fixed << setprecision(2) << pGrade[i] << endl;
	}
}
double averageGrades(double pGrade[], int pSize)
{
	double myReturn = 0;
	int mySum = 0;
	for (int i = 0; i < pSize; i++)
	{
		mySum += pGrade[i];
	}
	myReturn = static_cast <double> (mySum) / pSize;
	return myReturn;
}
//void function 8
void printContacts(Contacts pContacts[])
{
	cout << "Contact List:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Name: " << pContacts[i].firstName << " " << pContacts[i].lastName;
		cout << "\n";
		cout << "Phone: " << pContacts[i].phoneNumber << endl;
		cout << endl;
	} // end of for loop
}
