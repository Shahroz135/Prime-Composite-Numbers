#include"stdio.h"
#include"conio.h"
void main()
{
    int a,b,c;
    textcolor(CYAN);
    cprintf("Enter any No.");
    scanf("%d",&a);
    b=2;
    while(b<=a)
    {
        if(a%b==0)
        break;
        b++;
        
    }
    if(b==a)
    cprintf("Prime");
    else
    cprintf("Comsonant");
}