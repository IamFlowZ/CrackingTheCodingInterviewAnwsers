// StacksQueues.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"

using namespace std;

int main()
{
	Stack stack;
	//pushing works
	for (int i = 0; i < 10; i++)
	{
		stack.push(i);
	}

	//these dont
	//stack.peek(5);
	for (int i = 0; i < 10; i++)
	{
		int pop = stack.pop();
		cout << "Got " << pop << " from the pop." << endl;
	}

	
	int asdf;
	cin >> asdf;
    return 0;
}

