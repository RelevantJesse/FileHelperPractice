#include "FileHelper.h"
#include <string>

using namespace std;

int main()
{
	FileHelper fh("test.txt");
	vector<string> myWords = fh.GetAllLines();
	int choice = 1;
	while (choice > 0)
	{
		cout << "1. Enter a new line for file" << endl;
		cout << "2. Read file" << endl;
		cout << "3. Save file" << endl;
		cout << "4. Delete line" << endl;
		cout << "0. Exit" << endl;

		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 1:
		{
			cout << "Enter a new line to add to file:" << endl;
			string newLine;
			getline(cin, newLine);

			myWords.push_back(newLine);

			break;
		}
		case 2:
		{
			vector<string> fileLines = fh.GetAllLines();

			for (int i = 0; i < fileLines.size(); i++)
			{
				cout << i + 1 << ". " << fileLines[i] << endl;
			}

			break;
		}
		case 3:
		{
			fh.WriteFile(&myWords);

			cout << "File saved!" << endl;
			break;
		}
		case 4:
		{
			cout << "Enter line number you wish to delete: ";
			int lineNum;
			cin >> lineNum;
			cin.ignore();

			myWords.erase(myWords.begin() + lineNum - 1);

			fh.WriteFile(&myWords);
			break;
		}
		default:
			break;
		}

		cout << endl;
	}

	cout << "Goodbye!" << endl;
	return 0;
}