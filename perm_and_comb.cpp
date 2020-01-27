#include<iostream>
using namespace std;
int permutation(int n, int r)
{
	if(n<=0||r<0)
	{
		throw" not valid for negative numbers ";
	}

	else if(r==0)
	{
		return 1;
	}
	else
	{
		return n*permutation(n-1,r-1);
	}
}

int combination(int n, int r)
{
	if(n<=0||r<0)
	{
		throw "not valid for negaive numbers ";
	}
	
	else if (r==0)
	{
		return 1;
	 } 
	 else
	{
		return  combination(n-1,r-1)*n/r;
}

}
int main ()
{
	int n,r;
	cout<<" enter the values of n and r : "<<endl;
	cin>>n>>r;
	try
	{
		cout<< "permutation is : "<<permutation(n,r);
			cout<< "combination is : "<<combination(n,r);
	}
	catch(const char* z)
	{
		cout<<z<<endl ;
		cout<<"stop working";
	}
    return 0;
}
