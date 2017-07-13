#include<iostream>
using namespace std;
class sample{
public:
	static int obj;
	int x;
	sample()
	{obj++;x=obj;}
	static int getc()
	{return obj;}
};
int sample::obj=0;
int main()
{
int n;
cout<<"\nENter the number of objects to be created:";
cin>>n;
sample s[n];
for(int i=0;i<n;i++)
{cout<<"s["<<i<<"].x="<<s[i].x<<endl;}
cout<<"total objects count(from static variable):"<<sample::getc();
return 0;
}
