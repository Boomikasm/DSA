#include<stdio.h>
int main()
{
    float n, cat;
    printf("Enter Richter scale number\n");
    scanf("%f", &n);

    if(n<5.0)
    {
        printf("Little or no damage\n");
    }
    else if(n>=5.0 && n<5.5 )
    {
        printf("Some damage\n");
    }
    else if(n>=5.5 && n<6.5)
    {
        printf("Serious damage: walls may crack or fall\n");
    }
    else if(n>=6.5 && n<7.5)
    {
        printf("Disaster: houses and buildings may collapsee\n");
    }
    else if(n>7.5)
    {
        printf("Catastrophe: most buildings destroyed\n");
    }
    else
        printf("Catastrophe: most buildings destroyed\n");
}
