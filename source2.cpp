#include "Header.h"
string addSpaces(string str)
{
	string newstr;
	for(int I=0;I<str.length()-1;I++)
	{
		newstr+=str[I];
		newstr+=" ";
	}
	newstr+=str[str.length()-1];
	return newstr;
}