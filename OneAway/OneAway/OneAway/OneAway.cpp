// OneAway.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

bool oneAway(string a, string b);

int main()
{
	string cats = "cats";
	string cat = "cat";
	string TacoCat = "Taco Cat";
	string dog = "dog";
	string rocket = "rocket";

	/* Need to figure out why i'm getting three digit responses.
	returning:
		0
		120
		120
	*/
	cout << oneAway(cats, cat) << endl;
	cout << oneAway(cat, TacoCat) << endl;
	cout << oneAway(TacoCat, rocket) << endl;

	int asdf;
	cin >> asdf;
	return 0;
}

bool oneAway(string a, string b)
{
	//if the strings are the same length, check that only one of the char's is different
	if (a.length() == b.length())
	{
		int differences = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i] && differences < 2)
			{
				differences++;
			}
			else if (a[i] != b[i] && differences == 2)
			{
				return false;
			}
			else return true;
		}
	}

	//return true if the string lengths are within one, and one is a substring of the other
	else if ((a.length() == b.length() - 1) || (a.length() == b.length() + 1))
	{
		if (a.length() > b.length())
		{
			//need to figure out what happens when find fails out
			if (a.find(b) != NULL)
			{
				return true;
			}
			else return false;
		}
		else if (b.length() > a.length())
		{
			if (b.find(a) != NULL)
			{
				return true;
			}
			else return false;
		}
	}

	//else return false;
}