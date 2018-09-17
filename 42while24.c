#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;
    //for (k=0;k<5;k++)
    k = 0;

    while(k<5)
    {
        sum+=k;//use something different in "while" version
        k++;
    }

    printf ("sum - %d\n",sum);

    //k=10;

    //while (k>0) {
    for(k=10;k>0;k--)
{
       // k=k-1; //use something different in "for" version
        printf ("%d\n", k);
    }
     printf("Blastoff!");
}

