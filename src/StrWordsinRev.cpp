/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *str, int start, int end)
{

	int i;
	char ch;
	for (i = 0; start <= end; i++)
	{
		ch = str[start];
		str[start] = str[end];
		str[end] = ch;
		start++;
		end--;
	}
}
void str_words_in_rev(char *input, int len){
	int i,j;
	reverse(input, 0, len - 1);
	for (i = 0, j = 0; i<len; i++)
	{
		if (input[i] == 32 || input[i] == ' ')
		{
			reverse(input, j, i - 1);
			j = i + 1;
		}
	}
	reverse(input, j, len - 1);
}
