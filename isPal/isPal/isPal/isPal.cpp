// isPal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

//generic swap for two chars in the string, the positions to be swapped are specficied so as to make it easier to keep track of 
string mutate(string tcase, int first, int second)
{
	char temp = tcase[first];
	tcase[first] = tcase[second];
	tcase[second] = temp;
	return tcase;
}

//simple recursive method for finding the factorial of a number
int factorial(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

//binary search for double appearances of characters
bool checkIfPal(string tcase)
{
	int firstPos = 0;
	int lastPos = tcase.length() - 1;

	for (int i = 0; i < lastPos; i++)
	{
		char first = tcase[firstPos];
		char last = tcase[lastPos];

		if ((first == last) && (firstPos < lastPos))
		{
			firstPos++;
			lastPos--;
		}
		else if ((first == last) && (firstPos >= lastPos))
		{
			return true;
		}
		else return false;
	}
}

//check to see if any permutations of a string are palindromes, using recursion
bool isPal(string tcase)
{
	//seeing as how were looking to see if any permutation is a palindrome, 
	//if it is a palindrome, we should only have to swap each character in half the string
	int maxSwaps = factorial(sizeof(tcase)/2);
	int counter = 0;

	bool test = checkIfPal(tcase);

	if (test == 0 && counter < maxSwaps)
	{
		string next = mutate(tcase, counter, ++counter);
		counter++;
		isPal(next);
	}
	else if (test == 0 && counter == maxSwaps)
	{
		return false;
	}
	else if (test == 1)
	{
		return true;
	}
}

int main()
{
	string cats = "cats";
	string tacoCat = "Tact Coa";
	string fiveC = "ccccc";
	string cat = "tac cat";

	cout << isPal(cats) << endl;
	cout << isPal(tacoCat) << endl;
	cout << isPal(fiveC) << endl;
	cout << isPal(cat) << endl;
	
	int asdf;
	cin >> asdf;
	return 0;
}

