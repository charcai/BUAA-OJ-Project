#include<iostream>

using namespace std;

string naive="naive";
string lalala;
int n;

int main()
{
	while(cin>>n>>lalala)
	{
		int counter = 0;
		for(int i = 0; i < n; ++i)
		{
			if(lalala[i]=='?')
			{
				lalala[i]=naive[counter];
				counter = (counter+1)%5;
			}
		}
		cout<<lalala<<endl;
	}
}
