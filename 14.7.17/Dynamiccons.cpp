#include<iostream>
using namespace std;
class dummy{
char *s;
public:
	dummy(int n)
	{s=new char[n];}
	void getString()
	{cout<<"\nEnter String:";
	 cin>>s;}
	void dispString()
	{cout<<"\nThe string is:"<<s;}
};
int main()
{
int n;
cout<<"\nEnter string size:";
cin>>n;
dummy str(n);
str.getString();
str.dispString();
return 0;}
