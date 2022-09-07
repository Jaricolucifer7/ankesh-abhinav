/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("1.HEXADECIMAL CONVERSION:\n2.OCTAL CONVERSION:\n");
    scanf("%d",&n);
    if(n==1)
    {
 char binarynum[100], hexa[100];
 long int i = 0;
 printf("Enter the value for hexadecimal ");
 scanf("%s", hexa);
 printf("\n Equivalent binary value: ");
 while (hexa[i])
 {
 switch (hexa[i])
 {
 case '0':
 printf("0000"); break;
 case '1':
 printf("0001"); break;
 case '2':
 printf("0010"); break;
 case '3':
 printf("0011"); break;
 case '4':
 printf("0100"); break;
 case '5':
 printf("0101"); break;
 case '6':
 printf("0110"); break;
 case '7':
 printf("0111"); break;
 case '8':
 printf("1000"); break;
 case '9':
 printf("1001"); break;
 case 'A':
 case 'a':
 printf("1010"); break;
 case 'B':
 case 'b':
 printf("1011"); break;
 case 'C':
 case 'c':
 printf("1100"); break;
 case 'D':
 case 'd':
 printf("1101"); break;
 case 'E':
 case 'e':
 printf("1110"); break;
 case 'F':
 case 'f':
 printf("1111"); break;
 default:
 printf("\n Invalid hexa digit %c ", hexa[i]);
 
 }
 i++;
 }
}
else if(n==2)
{
    char octalnum[100];
 long i = 0;
 printf("Enter any octal number: ");
 scanf("%s", octalnum);
 printf("Equivalent binary value: ");
 while (octalnum[i])
 {
 switch (octalnum[i])
 {
 case '0':
 printf("000"); break;
 case '1':
 printf("001"); break;
 case '2':
 printf("010"); break;
 case '3':
 printf("011"); break;
 case '4':
 printf("100"); break;
 case '5':
 printf("101"); break;
 case '6':
 printf("110"); break;
 case '7':
 printf("111"); break;
 default:
 printf("\n Invalid octal digit %c ", octalnum[i]);
 
 }
 i++;
 }

}
}
