# include<stdio.h>

/**
*_isupper - check if character is uppercase
*
*Return: 1 or 0 if uppercase or lowercase respectively
*/
int  _isupper(char);

/**
*main -verify _uppercase function
*
*Return: 0
*/
int main()
{
    char ch = 'd';
    printf("%d", _isupper(ch));
}

int _isupper(char c)
{
    return(c >= 'A' && c <= 'Z') ? 1 : 0;
}