#include <bits/stdc++.h>
#include "error.h"

using namespace std;

bool WriteFile(char filename[1000],char filein[1000])
{
	ofstream fout;
	fout.open(filename,ios::out);
	if (fout)
	{
		fout << filein << endl;
		fout.close();
		return true; 
	}
	else
	{
		FileNotFound();
		return false;
	}
}
bool DeleteFile(char filename[1000])
{
	if (!remove(filename))
	{
		return true; 
	}
	else
	{
		FileNotFound();
		return false;
	}
}
bool ReadFile(char filename[1000])
{
	ifstream fin;
	fin.open(filename,ios::in);
	if (fin)
	{
		char buf[1024]={0};
		while (fin >> buf)
    	{
        	cout << buf << endl;
    	}		
    	return true; 
	}
	else
	{
		FileNotFound();
		return false;
	}
}