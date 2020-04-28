#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main ()
{
	char kata [40] = "SHALU LAELA";
	int inputkata;
	int i;
	
	cout<<"Membalikan Kata"<<endl;
	
	cout<<"Kata yang dimasukkan : "<<kata<<endl;
	inputkata=strlen(kata);
	cout<<"Kata dibalik menjadi : ";
	for(i=inputkata;i>=1;i--)
	{
		char stack= kata[i-1];
		cout<<stack;
	}
	return 0;
}
