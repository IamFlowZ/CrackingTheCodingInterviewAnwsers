//Original Java walkthrough that I ported into C++, comes from Derek Banas on youtube. 
//Guy has a ton of great tutorials, covering a wide variety of subjects. 100% check him out.

#include "stdafx.h"
#include "linkedList.h"
#include "tableFuncs.h"

using namespace std;

int main()
{
	string testSet1[] = { "1", "2", "3", "4", "5" };

	int testSet2[] = { 540, 277, 69, 21, 14, 510, 572, 879, 672, 123,
		 175, 200, 42, 89, 305, 206, 199, 189 , 54 , 45,
		 90, 541, 244, 256, 789, 901, 612, 290, 589, 307 };

	tableFuncs table;

	table.hashFunction1(testSet2, table.myArray);
	table.displayTable(table.myArray);

	int asdf;
	cin >> asdf;

	delete[] testSet1;
	delete[] testSet2;
    return 0;
}

