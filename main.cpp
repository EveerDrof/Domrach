#include "Header.h"
#include <iostream>
using namespace std;
int main()
{
	string A;
	cin>>A;
	cout<<"Reversed string "<<reverseString(A)<<endl;
	cout<<"String with spaces "<<addSpaces(A)<<endl;
	cout<<"Vowels "<<countVowels(A)<<endl;
}
