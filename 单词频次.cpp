#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream data;
	data.open("DATA5610.txt", ios::in | ios::out);
	data.seekg(0, ios::end);
	int length = data.tellg();
	data.seekg(0, ios::beg);
	char* buff = new char[length];
	data.read(buff, length);
	*(buff + length - 2) = NULL;
	data.close();
	int sumi = 0, sumw = 0, sumf = 0;
	int i;
	for (i = 0; i < length; i++)
	{
		if (*(buff + i) != NULL)
		{
			if (*(buff + i) == 'i')
			{
				if (*(buff + i + 1) == 'f')
					sumi += 1;
			}
		}
		else
			break;
	}
	for (i = 0; i < length; i++)
	{
		if (*(buff + i) != NULL)
		{
			if (*(buff + i) == 'w')
			{
				if (*(buff + i + 1) == 'h')
				{
					if (*(buff + i + 2) == 'i')
					{
						if (*(buff + i + 3) == 'l')
						{
							if (*(buff + i + 4) == 'e')
								sumw += 1;
						}
					}
				}
			}
		}
		else
			break;
	}
	for (i = 0; i < length; i++)
	{
		if (*(buff + i) != NULL)
		{
			if (*(buff + i) == 'f')
			{
				if (*(buff + i + 1) == 'o')
				{
					if (*(buff + i + 2) == 'r')
						sumf += 1;
				}
			}
		}
		else
			break;
	}
	cout << sumi << " " << sumw << " " << sumf;
	return 0;
}
