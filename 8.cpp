#include<iostream>
#include<string>
int main()
{
	using namespace std;
	int y,m,d,day;
	cin>>y>>m>>d;
	if(y%4==0)
		{
		if(m==-1)
			day=-d;
		else if(m==-2)
			day=31-d;
		else if(m==-3)
			day=60-d;
		else if(m==-4)
			day=91-d;
		else if(m==-5)
			day=121-d;
		else if(m==-6)
			day=152-d;
		else if(m==-7)
			day=182-d;
		else if(m==-8)
			day=213-d;
		else if(m==-9)
			day=244-d;
		else if(m==-10)
			day=274-d;
		else if(m==-11)
			day=305-d;
		else day=335-d;
		}
	else 
	{
	        if(m==-1)
                        day=-d;
                else if(m==-2)
                        day=31-d;
                else if(m==-3)
                        day=59-d;
                else if(m==-4)
                        day=90-d;
                else if(m==-5)
                        day=120-d;
                else if(m==-6)
                        day=151-d;
                else if(m==-7)
                        day=181-d;
                else if(m==-8)
                        day=212-d;
                else if(m==-9)
                        day=243-d;
                else if(m==-10)
                        day=275-d;
                else if(m==-11)
                        day=304-d;
                else day=334-d;

	}
	cout<<day;
	return 0;
}
