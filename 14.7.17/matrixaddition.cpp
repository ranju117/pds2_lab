#include<iostream>
using namespace std;
class matrix
{public:
	int **p;
	int d1,d2;
	matrix(){}//default constructor
	matrix(int x,int y)//parameterised constructor
	{d1=x;d2=y;
	 p=new int *[d1];
	 for(int i=0;i<d1;i++)
		p[i]=new int[d2];
	}
	void  getelement()
	{for(int i=0;i<d1;i++)
		for(int j=0;j<d2;j++)
			{cout<<"\nEnter p["<<i<<"]["<<j<<"]";
			 cin>>p[i][j];}
	}
	void dispMatrix()
	{for(int i=0;i<d1;i++)
	 {for(int j=0;j<d2;j++)
	    cout<<p[i][j]<<"\t";
	  cout<<endl;
	  }	
	}
};
matrix add(matrix A,matrix B)
{	int d1=A.d1;
  	int d2=B.d2;
 	matrix sum(A.d1,B.d2);
	 for(int i=0;i<d1;i++)
	  for(int j=0;j<d2;j++)
	   sum.p[i][j]=A.p[i][j]+B.p[i][j];
	 return sum;
}
int main()
{
	int a,b,c,d;
	cout<<"\nEnter dimensions of Matrix A:";cin>>a>>b;
	cout<<"\nEnter dimensions of Matrix B:";cin>>c>>d;
	if(a!=c||b!=d)
		{cout<<"\nAddition impossible :(";}
	else
		{matrix A(a,b);
		 matrix B(c,d);
		 A.getelement();
		 B.getelement();
		 matrix C;
		 C=add(A,B);
		 cout<<"\nThe resultant matrix is:\n";
		 C.dispMatrix();
		}
	return 0;
}

