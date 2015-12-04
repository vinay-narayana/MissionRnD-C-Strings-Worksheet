/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int i,j;
	if (str == '\0' || str=="" || K<0 )
		return '\0';
	for (i = 0; str[i] != '\0'; i++);
	for (j = i - 1; j != i - (K + 1); j--);
	return str[j];

}