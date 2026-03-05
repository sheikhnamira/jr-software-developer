/*write a program to checkout the given letter is vowel or not
make variable f letter 
accept one letter from user.
check the letter vowel or not
if letter==a then
printf("this letter is vowel");
if letter==e then
printf("this letter is vowel");
if letter==i then
printf("this letter is vowel");
if letter==o then
printf("this letter is vowel");
if letter==u then
printf("this letter is vowel");
otherwise 
it is not vowel
*/
#include<stdio.h>
void main()
{
    char letter;
    printf("enter letter:");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        case 'A':
        printf("it is vowel");
        break;

        case 'e':
        case 'E':
        printf("it is vowel");
        break;

        case 'i':
        case 'I':
        printf("it is vowel");
        break;

        case 'o':
        case 'O':
        printf("it is vowel");
        break;

        case 'u':
        case 'U':
        printf("it is vowel");
        break;

        default:
        printf("it is not vowel");
        break;
    }
}