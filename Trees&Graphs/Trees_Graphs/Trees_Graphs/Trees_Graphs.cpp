// First version I'm doing a binary tree.
//

#include "stdafx.h"
#include "Tree.h"

using namespace std;

int main()
{
	Tree tree;
	for (int i = 1; i <= 10; i++)
	{
		tree.addNode(i);
	}

	tree.inOrderTrav(*tree.root);

	int asdf;
	cin >> asdf;
    return 0;
}

