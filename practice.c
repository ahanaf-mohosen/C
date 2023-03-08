#include<stdio.h>
main()
{
    int note,nt100,nt50,nt20,nt10,nt5,nt2,nt1;
    printf("input amount = ");
    scanf("%d",&note);
    nt100 = (note - note%100)/100;
    nt50 = (note - nt100*100)/50;
    nt20 = (note - nt100*100 - nt50*50)/20;
    nt10 = (note - nt100*100 - nt50*50 - nt20*20)/10;
    nt5 = (note - nt100*100 - nt50*50 - nt20*20 - nt10*10)/5;
    nt2 = (note - nt100*100 - nt50*50 - nt20*20 - nt10*10 - nt5*5)/2;
    nt1 = (note - nt100*100 - nt50*50 - nt20*20 - nt10*10 - nt5*5 - nt2*2) ;
    printf("%d nota(s) de R$ 100,00\n",nt100);
    printf("%d nota(s) de R$ 50,00\n",nt50);
    printf("%d nota(s) de R$ 20,00\n",nt20);
    printf("%d nota(s) de R$ 10,00\n",nt10);
    printf("%d nota(s) de R$ 5,00\n",nt5);
    printf("%d nota(s) de R$ 2,00\n",nt2);
    printf("%d nota(s) de R$ 1,00\n",nt1);
    getch();
}
