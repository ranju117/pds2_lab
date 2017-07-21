#include <bits/stdc++.h>
using namespace std;
class B;
class A {
    private:
     string str;
    public:
      A(string s) { 
	str=s;	
}
         friend string add(A, B);
};
//pds lab ku laam github use panra
class B {
    private:
       string str;
    public:
       B(string s){
  str=s;}
        friend string add(A , B);
};
string add(A objectA, B objectB)
{
   return (objectA.str + objectB.str);
}

int main()
{
string a,b;
cout<<"enter 2 strings";
cin>>a>>b;
    A objectA(a);
    B objectB(b);
    cout<<"together "<< add(objectA, objectB)<<endl;
    return 0;
}
