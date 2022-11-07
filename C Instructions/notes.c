#include<stdio.h>
int main()
{
    int amt,hun,fif,ten,five,two,one,total;
    printf("Enter the amount:\n");
    scanf("%d",&amt);
    hun=amt/100;
    amt=amt%100;
    fif=amt/50;
    amt=amt%50;
    ten=amt/10;
    amt=amt%10;
    five=amt/5;
    amt=amt%5;
    two=amt/2;
    amt=amt%2;
    one=amt/1;
    amt=amt%1;
    total=hun+fif+ten+five+two+one;
    printf("Smallest number of notes=%d\n",total);
    return 0;

    }