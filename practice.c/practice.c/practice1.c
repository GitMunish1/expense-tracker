#include <stdio.h>
int main()
{
    int years, weeks, days;
    printf("enter the days: ");
    scanf("%d",days);

    years = days/365;
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("years is %d\n",years);
    printf("weeks is %d\n",weeks);
    printf("days is %d\n",days);


    return 0;
}