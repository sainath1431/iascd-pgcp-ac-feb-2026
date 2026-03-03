#include"StringOps.h"

StringOps::StringOps(char str[])//init the object str with para str
{
	int i = 0;
	while (str[i] != '\0')
	{
		this->str[i] = str[i];
		i++;
	}
	this->str[i] = '\0';
	
}
void StringOps::display()  //display the string
{
	cout << "\n the string is " << this->str;
}
int StringOps::astrlen()
{
	int count = 0;
	int i = 0;
	while (str[i] != '\0') {
		count++;
		i++;
	}
	return count;
}
char* StringOps::astrcpy(char source[])
{
	int i = 0;
	while ((this->str[i]=source[i])!='\0') {
		i++;
	}
	return this->str;

	//copy the para source value in this->str
	/*int i = 0;
	while (source[i] != '\0') {
		this->str[i] = source[i];
		i++;
	}

	this->str[i] = '\0';

	return this->str;*/
}