#include "pch.h"
#include <iostream>
#include <string>
#include "CountingVowels.h"

using namespace std;

int main() 
{
	int NumberOfVowels = 0;
	string word;
	cout << "Please, put in your string to the console: \n";
	getline(cin, word);
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == ('a')|| word[i] == ('e') || word[i] == ('i') || word[i] == ('u') || word[i] == ('o') || word[i] == ('A') || word[i] == ('E') || word[i] == ('I') || word[i] == ('U') || word[i] == ('O'))
		{
			NumberOfVowels = NumberOfVowels+1 ;
		}
	}
	cout << "Number of vowels in your string is: " << NumberOfVowels << endl;
	system("pause");
	return 0;
}
