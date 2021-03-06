// Triple_Step.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iterator>

using namespace std;

int num_of_combos(int stair_length, vector<int> combos);

int main()
{
	int length;
	cout << "Enter stair Length: ";
	cin >> length;

	vector<int> combos(length, 3);
	num_of_combos(length, combos);


	int asdf;
	cin >> asdf;
	cout << asdf;
	return 0;
}


int num_of_combos(int stair_length, vector<int> combos)
{
	static int solutions = 0;
	while (combos.size() != stair_length + 1)
	{
		int sum = *combos.begin();
		for (vector<int>::iterator it = combos.begin(); it != combos.end(); ++it)
		{
			sum += *it;
		}
		if (sum == stair_length)
		{
			solutions++;
		}
		for (vector<int>::iterator it = combos.begin(); it != combos.end(); ++it)
		{
			if (*it > 1)
			{
				combos.insert(it, 1);
				combos[*it]--;
				break;
			}
		}
		num_of_combos(stair_length, combos);
	}
	return solutions;
}
