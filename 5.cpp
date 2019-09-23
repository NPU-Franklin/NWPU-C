#include<iostream>
#include<string>
#include<algorithm>
int main()
{
	using namespace std;
	string s,rs;
	cin>>s;
	s=rs;
	reverse(rs.begin(),rs.end());
	if(rs==s)
	{
		cout<<"yes";
	}
	else cout<<"no";
	return 0;
}
