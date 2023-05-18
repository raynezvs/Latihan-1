#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int size,i,j,bombs,coordx,coordy;
	
	cin >> size;
	
	char board[size][size];
	
	
	
	for (i=1; i<=size; i++)
	{
		for (j=1; j<=size; j++)
		{
			board[i][j]='_';
		}
	}
	
	for (i=1; i<=size; i++)
	{
		
		for (j=1; j<=size; j++)
		{
			cout << board[i][j];
		}
		
		cout << "\n";
	}
	//inisiasi board
	
	cout << "Masukkan Jumlah bom" << endl;
	cin >> bombs;
	
	for (i=1; i<=bombs; i++)
	{
		cin >> coordx >> coordy;
		board[coordx][coordy]='*';
	}
	//input bomb
	
	for (i=1; i<=size; i++)
	{
		
		for (j=1; j<=size; j++)
		{
			cout << board[i][j];
		}
		
		cout << "\n";
	}
}
