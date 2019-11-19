#include "Header.h"
string reverseString(string str)
{
	for(int I=0;I<str.length()/2;I++)
	{
		char tmp=str[I];
		str[I]=str[str.length()-I-1];
		str[str.length()-I-1]=tmp;
	}
	return str;
}