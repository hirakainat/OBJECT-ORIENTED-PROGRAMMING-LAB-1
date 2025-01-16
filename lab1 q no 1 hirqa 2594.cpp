#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << ("enter the size of the array:") << endl;
	cin >> n;
	int* array = new int[n];
	cout << ("enter the song ID'S:") << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		cout << endl;
	}
	cout << ("The song ID's are:") << endl;
	for (int i = 0; i < n; i++)
	{
		cout << array[i];
	}
	cout << endl;
	int del_song;
	cout << ("enter the song which you want to delete:") << endl;
	cin >> del_song;
	for (int i = 0; i < n; i++)
	{
		if (array[i] == del_song)
		{
			array[i] = ' ';
		}
	}
	cout << ("the array after the deletion of songs:") << endl;
	for (int i = 0; i < n; i++)
	{
		if (array[i] != ' ')
			cout << array[i];
	}
	int add_song;
	cout << ("enter the number of songs which you want to add:") << endl;
	cin >> add_song;
	cout << ("enter the total numbers of song which you want to add:") << n << "+" << add_song << "=" << endl;
	cout << ("Enter the total number of songs now:") << endl;
	for (int i = 0; i < n + add_song; i++)
	{
		cin >> array[i];
	}

	cout << ("enter the array with new songs in the playlist:") << endl;
	for (int i = 0; i < n + add_song; i++)
	{
		cout << array[i] << ' ';
		cout << endl;
	}

	system("pause");
	return 0;
}


