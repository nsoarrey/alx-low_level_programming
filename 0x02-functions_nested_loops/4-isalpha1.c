
/**
 *A  function that checks for alphanumeric character. 
 */
int _isalpha(int c)
{
  int c;
  if (( c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}
