/**
 * int _strlen(char *s) function to get string length.
 * @s:pointer to a string literal
 * @length is the string length variable.
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length += 1;
	}
	return (length);
}
