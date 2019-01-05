#include <stdio.h>
#include <conio.h>
int main ()
{
    printf( " Menampilkan Bilangan Genap 1-20\n");
    for (int i=1;i<=20;i++)
        if(i%2==0)
    {
        printf( "\n%d",i);
    }
    getch();
}
