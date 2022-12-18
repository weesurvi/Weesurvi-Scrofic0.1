#include <bits/stdc++.h>
#include "file.h"

using namespace std;

char directives[25];
char middle[100];
char parameter[350];
char space[10] = " ";

int main()
{
	cout << "[Weesurvi-Scrofic0.1.0] version:command" << endl;
	while(1)
	{
		cout << "Weesurvi>";
		cin >> directives;
		if (!strcmp(directives,"exit"))
		{
			break;
		}
		else if (strcmp(directives,"create") && strcmp(directives,"write") && strcmp(directives,"read") && strcmp(directives,"remove") && strcmp(directives,"ls"))
		{
			Syntaxer();
		}
		cin >> middle;
		cin >> parameter;
		if (!strcmp(directives,"create") && !strcmp(middle,"*file"))
		{
			WriteFile(parameter,space);
		}
		else if (!strcmp(directives,"write"))
		{
			WriteFile(middle,parameter);
		}
		else if (!strcmp(directives,"read") && !strcmp(middle,"*file"))
		{
			ReadFile(parameter);
		}
		else if (!strcmp(directives,"remove") && !strcmp(middle,"*file"))
		{
			DeleteFile(parameter);
		}
		else if (!strcmp(directives,"ls") && !strcmp(middle,"*file") && !strcmp(parameter,"this"))
		{
			system("dir");
		}
		else
		{
			Syntaxer();
		}
	}

	return 0;
}