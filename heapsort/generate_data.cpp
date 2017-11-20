#include<iostream>
#include<fstream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;

#define TOTAL 10
int main()
{
	ofstream cout("a.in");

	cout<<TOTAL<<endl;

	srand((unsigned)time(NULL)); 

	for (int i=0; i<TOTAL; i++)
	{
		cout << rand()<<endl;
	}

	cout.close();
	return 0;
}