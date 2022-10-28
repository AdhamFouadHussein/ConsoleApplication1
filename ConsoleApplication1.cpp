#include <iostream>
using namespace std;
void Union(char S1[], char S2[], char S3[]);
void Intersect(char S1[], char S2[], char S3[]);

int main()
{
	char S1[100], S2[100], S3[200];
	char c;
	char d;
	int i = 0;
	int x = 0;
	cout << "Please enter the first string\n";
	do
	{
		cin >> c;
		if (c == '*')
		{
			//S1[i] = '\0';
		}
		else
		{
			S1[i] = c;
			i++;
		}
	} while (c != '*');
	cout << "Please enter the second string\n";
	do
	{
		cin >> d;
		if (d == '*')
		{
			//S2[i] = '\0';
		}
		else
		{
			S2[i] = d;
			i++;
		}
	} while (c != '*');
	for (int i = 0; i < sizeof(S1); i++) {
		S3[i] = S1[i];
	}
	for (int x = 0; x < sizeof(S2); x++) {
		S3[i] = S2[i];
	}

	for (int y = 0; y < sizeof(S3); y++) {
		cout << S3[i];
	}
}