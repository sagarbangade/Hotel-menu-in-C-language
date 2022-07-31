#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void nasta()
{
    int a1,i1=1,d1,ds=0,sm=0,t=0,eds=0,esm=0,et=0,a,b,c,d,e,f,g,h,i,j,d2,k;

  while(i1)
    {

        if (a1==!0)
            printf("\n AnyThing you want... ");


    printf("\n\n:::::::::: menu ::::::::::\n");
    printf("1.Dosa\t\t ₹20\n");
    printf("2.Samosa\t ₹30\n");
    printf("3.Tea\t\t ₹10\n");
    printf("0.Exit\n");

        printf("\n Enter Your Choice : ");
        scanf("%d",&a1);


    switch(a1)
    {
    case 1:
            printf("\nHow many plates: ");
            scanf("%d",&eds);
       d1+=20*eds;
       ds+=eds;

            printf("you order %d plate dosa\n",ds);
        break;
    case 2:
        printf("\nHow many plates: ");
            scanf("%d",&esm);
        d1+=30*esm;
        sm+=esm;

            printf("you order %d plate samosa\n",sm);
        break;
    case 3:
        printf("\nHow many coup: ");
            scanf("%d",&et);
         d1+=10*et;
         t+=et;

            printf("you order %d coup tea\n",t);
        break;

    case 0:
        (i1=0);
        printf("\n\n::::::::::Your Bill:::::::::: \n\n");
        printf("Total Order  %d\ndosa\t     %d\t\t ₹ %d\nsamosa\t     %d\t\t ₹ %d\ntea\t     %d\t\t ₹ %d",ds+sm+t,ds,ds*20,sm,sm*30,t,t*10);
        printf("\nTotal Bill     \t\t₹ %d",d1);

        printf("\nEnter cash received ₹");
        scanf("%d",&a);
        d2=a-d1;
        printf("\nCash Returned: ₹%d",d2);

        i=d2/2000;
        if(i>0)
    printf("\n%d Notes of ₹2000.00",i);

    j=(d2-(i*2000))/500;

    if(j>0)
    printf("\n%d Notes of ₹500.00",j);


    b=(d2-((i*2000)+(j*500)))/200;
    if(b>0)
    printf("\n%d Notes of ₹200.00",b);

    c=(d2-((i*2000)+(j*500)+(b*200)))/100;
    if(c>0)
    printf("\n%d Notes of ₹100.00",c);

    d=(d2-((i*2000)+(j*500)+(b*200)+(c*100)))/50;
    if(d>0)
    printf("\n%d Notes of ₹50.00",d);

    e=(d2-((i*2000)+(j*500)+(b*200)+(c*100)+(d*50)))/20;
    if(e>0)
    printf("\n%d Notes of ₹20.00",e);

    f=(d2-((i*2000)+(j*500)+(b*200)+(c*100)+(d*50)+(e*20)))/10;
    if(f>0)
    printf("\n%d Notes of ₹10.00",f);

    g=(d2-((i*2000)+(j*500)+(b*200)+(c*100)+(d*50)+(e*20)+(f*10)))/5;
    if(g>0)
    printf("\n%d coins of ₹5.00",g);

    h=(d2-((i*2000)+(j*500)+(b*200)+(c*100)+(d*50)+(e*20)+(f*10)+(g*5)))/2;
    if(h>0)
    printf("\n%d coins of ₹2.00",h);

    k=(d2-((i*2000)+(j*500)+(b*200)+(c*100)+(d*50)+(e*20)+(f*10)+(g*5)+(h*2)))/1;
    if(h>0)
    printf("\n%d coins of ₹1.00",k);
    printf("\n::::::::::::Thank You Sir/Maam visit again::::::::::::::: ");
        break;
    default:
            printf("invalid order number");
    }
    }

}

int main()
{



    nasta();

getch();
    return 0;
}
