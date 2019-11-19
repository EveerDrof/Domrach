#include "Header.h"
int countVowels(string str)
{
	int count=0;
	char vowels[]="aeyuioAEYUIO";
	for(int I=0;I<str.length();I++)
	{
		for(int G=0;G<12;G++)
		{
			if(vowels[G]==str[I])
				count++;
		}
	}
	return count;
	
}