#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag1=0,flag2=0,flag3=0;
	if(s.length()>=5)
	{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A' && s[i]<='Z' && flag1==0)
		{
			flag1=1;
		}
		else if(s[i]>='a' && s[i]<='z' && flag2==0)
		{
			flag2=1;
		}
		else if(s[i]>='0'  && s[i] <='9' && flag3==0)
		{
			flag3=1;
		}
		if(flag1==1 && flag2==1 && flag3==1)
			break;
	}
	}
	if(s.length()>4 && flag1==1 && flag2==1 && flag3==1)
		cout<<"Correct";
	else
		cout<<"Too weak";
	return 0;
}