// Russian Arithmetic(A0048295).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


using namespace std;



int main()
{
	//Used to tell user information, get the numbers the user wants to multiply together and get the answer so I can use it to check if the program is working or not later on. {
	cout << "*Important* Do not input negative numbers as these do not work" << endl;
	int Num1{ 0 };
	cout << "Input the first number:" << endl;
	cin >>  Num1;
	int Num2{ 0 };
	cout << "Input the second number:" << endl;
	cin >>  Num2;
	int CheckValue{ 0 };
	CheckValue = Num1 * Num2;
	// }

	/*Creates a vector for me to make the table for step one and then completes step one which is to divide the first number till it = 1
	at the same time giving the user feedback of what it is doing at the moment and inputting the numbers into the table. { */
	vector<int> Table1;
	cout << "Number inputed in to table1 is " << Num1 << endl;

	while (Num1 > 1)
	{
		Table1.push_back(Num1);
		Num1 = Num1 / 2;
		cout << "Number inputed in to table1 is " << Num1 << endl;

	}

	Table1.push_back(Num1);
	// }

	/*Creates a vector for me to make the table for step two and then completes step two which is to multiply the second number the same number of times the first number was divided
	at the same time giving the user feedback of what it is doing at the moment and inputting the numbers into the table. { */
	vector<int> Table2;
	cout << "Number inputed in to table2 is " << Num2 << endl;

	for (size_t i = 1; i < Table1.size(); i++)
	{
		Table2.push_back(Num2);
		Num2 = Num2 * 2;
		cout << "Number inputed in to table2 is " << Num2 << endl;

	}

	Table2.push_back(Num2);
	// }

	//This outputs the two tables in a single row format so that the user can see what is in the table more easily. {
	cout << "Table1:" << endl;
	for (size_t i = 0; i < Table1.size(); i++)
		cout << Table1[i] << " ";

	cout << endl;

	cout << "Table2:" << endl;
	for (size_t i = 0; i < Table2.size(); i++)
		cout << Table2[i] << " ";

	cout << endl;
	// }

	/*This is step three which is to take the table from the first step and see what is odd then get the numbers in table two that are in the same positions as the odd numbers in table one
	adding those numbers from table two together to get the answer and then output the answer with the check answer made at the start to see if the answer the program made it right
	there is also a line to give the user feedback, tell them what is being added together. { */
	int LeftOver{ 0 };
	int Ans{ 0 };
	
	for (size_t i = 0; i < Table1.size(); i++)
	{
		
		LeftOver = Table1[i] % 2;

		if (LeftOver != 0)
		{
			cout << Ans << " + " << Table2[i] << endl;
			Ans = Ans + Table2[i];
		}

	}

	cout << "The result is: " << Ans << " " << "(Check Value: " << CheckValue << ")";
	// }





}