#include<iostream>
#include<cstring>
#include<string>
int main()
{
	using namespace std;

	string str;
	getline(cin, str);
	int p = 0;
	p = str.find("Ab minor");
	if (p != -1)
	{
		str.replace(p, strlen("Ab"), "G#");
	}
	p = str.find("A# major");
	if (p != -1)
	{
		str.replace(p, strlen("A#"), "Bb");
	}
	p = str.find("A# minor");
	if (p != -1)
	{
		str.replace(p, strlen("A#"), "Bb");
	}
	p = str.find("C# major");
	if (p != -1)
	{
		str.replace(p, strlen("C#"), "Db");
	}
	p = str.find("Db minor");
	if (p != -1)
	{
		str.replace(p, strlen("Db"), "C#");
	}
	p = str.find("D# major");
	if (p != -1)
	{
		str.replace(p, strlen("D#"), "Eb");
	}
	p = str.find("D# minor");
	if (p != -1)
	{
		str.replace(p, strlen("D#"), "Eb");
	}
	p = str.find("Gb major");
	if (p != -1)
	{
		str.replace(p, strlen("Gb"), "F#");
	}
	p = str.find("Gb minor");
	if (p != -1)
	{
		str.replace(p, strlen("Gb"), "F#");
	}
	p = str.find("G# major");
	if (p != -1)
	{
		str.replace(p, strlen("G#"), "Ab");
	}
	cout << str;

	return 0;
}
