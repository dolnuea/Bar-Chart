/*
 * Dolunay Dagci
 * Assignment: Bar Chart - C++ Reference Variables and Pointers 11-2
 * This program, prints 3 arrays with 3 different symbols. The lengths of the arrays are assigned with a function named refrandom
 * which assigns a random number from 1 to 30, to length variables. The random numbers are displayed on the output. Then, pointfill function is called for each arrays to fill the array.
 * Then the program displays the 3 arrays, and the longest array wins.
 */

#include <iostream>
#include <ctime>
using namespace std;

void refrandom(int&, int&, int&);
void pointfill(int, char, char*);

int main()
{
	int len1, len2, len3;
	char array1[31], array2[31], array3[31]; //one extra capacity for the null at the end

	refrandom(len1, len2, len3);

	cout << len1 << " " << len2 << " " << len3 << endl << endl;

	pointfill(len1, '@', array1);
	pointfill(len2, '~', array2);
	pointfill(len3, ';', array3);
	cout << array1 << endl << array2 << endl << array3 << endl;
}

/*
* This functions assigns random integers from 1 to 30 into length variables for arrays.
*/
void refrandom(int& x, int& y, int& z)
{
	srand(time(NULL));

	//Assign random number from 1-30 to length variables
	x = (rand() % 30) + 1;
	y = (rand() % 30) + 1;
	z = (rand() % 30) + 1;

}

/*
*This function fills in the array with the parameters, length, symbol, and a pointer which represents the constant char array.
*/
void pointfill(int len, char symbol, char* arrayptr)
{

	char* limitptr;
	limitptr = arrayptr + len; //the end of the array

	while (arrayptr < limitptr)
	{
		*arrayptr = symbol; //assign the symbol to where the pointer is pointing at
		arrayptr++; //increment position of the array pointer
	}

	*arrayptr = '\0'; //end of the array is assigned NULL 
}

