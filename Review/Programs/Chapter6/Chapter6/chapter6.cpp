#include <vector>
#include <iostream>
#include <string>
using namespace std;

struct Die
{
	int min;
	int max;
	int val;
};

void CalculateProbability()
{
	cout << endl << "CALCULATE PROBABILITY" << endl;

	vector<Die> dice;

	cout << "How many items are you manipulating? (e.g., rolling 2 die): ";
	int itemCount;
	cin >> itemCount;

	cout << endl;
	for (int i = 0; i < itemCount; i++)
	{
		Die die;
		cout << "For item #" << (i + 1) << "..." << endl
			<< "\t what is the MINIMUM value? ";
		cin >> die.min;
		cout << "\t what is the MAXIMUM value? ";
		cin >> die.max;
		dice.push_back(die);
	}

	int nS = 1;
	for (unsigned int i = 0; i < dice.size(); i++)
	{
		nS *= dice[i].max - dice[i].min + 1;
	}

	cout << endl << "n(S) = " << nS << endl;
}

int main()
{
	vector<string> menu = { "Calculate Probability", "Exit" };

	bool done = false;
	while (!done)
	{
		for (int i = 0; i < menu.size(); i++)
		{
			cout << (i + 1) << ". " << menu[i] << endl;
		}
		int choice;
		cout << ">> ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			CalculateProbability();
			break;

		case 2:
			done = true;
			break;
		}
	}

	return 0;
}