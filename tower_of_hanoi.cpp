#include <bits/stdc++.h>

using namespace std;

void tower(int n,char a,char b,char c)
{	if(n==0)
		return;
	tower(n-1,a,c,b);
	cout<<"Move disk no. "<<n<<" from"<<a<<"to"<<c<<endl;
	tower(n-1,b,a,c);
	
}

int main()
{
	int n;
	cin>>n;
	char a='A';
	char b='B';
	char c='C';
	tower(n,a,b,c);

}