#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} dt;

dt dateCompare(dt D1, dt D2)
{
    dt dateCompare;
    // for date
    if (D1.date > D2.date)
    {
        dateCompare.date = D1.date - D2.date;
    }
    else
    {
        dateCompare.date = D2.date - D1.date;
    }
    // for month
    if (D1.month > D2.month)
    {
        dateCompare.month = D1.month - D2.month;
    }
    else
    {
        dateCompare.month = D2.month - D1.month;
    }
    // for year
    if (D1.year > D2.year)
    {
        dateCompare.year = D1.year - D2.year;
    }
    else
    {
        dateCompare.year = D2.year - D1.year;
    }

    return dateCompare;
}

int main()
{
    dt D1, D2, dateComp;
    D1.date = 22;
    D1.month = 8;
    D1.year = 2022;

    D2.date = 12;
    D2.month = 4;
    D2.year = 2020;

    printf("%d - %d - %d\n", D1.date, D1.month, D1.year);
    printf("%d - %d - %d\n", D2.date, D2.month, D2.year);

    dateComp = dateCompare(D1, D2);
    printf("%d days %d months %d Years\n", dateComp.date, dateComp.month, dateComp.year);

    return 0;
}