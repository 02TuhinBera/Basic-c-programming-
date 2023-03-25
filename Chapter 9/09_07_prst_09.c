#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("Today's date is: %d/%d/%d\n", d.date, d.month, d.year);
}
int dateCmp(date d1, date d2){
    //  Make decision on the basis of the year comparison.
    if(d1.year>d2.year){
        return 1;
    }
    else if(d1.year>d2.year){
        return -1;
    }
    //  Make decision on the basis of the month comparison.

    else if(d1.month>d2.month){
        return 1;
    }
    else if(d1.month<d2.month){
        return -1;
    }
    //  Make decision on the basis of the date comparison.

    else if(d1.date>d2.date){
        return 1;
    }
    else if(d1.date<d2.date){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    date d1={11, 03, 21};
    date d2={19, 04, 23};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date comparison function return: %d\n", a);
    return 0;
}