#include<stdio.h>

int main() {

    int bookID;
    int dueDate;
    int returnDate;
    int days_overdue;
    float fineRate;
    float fineAmount;

    printf("enter the bookID:");
    scanf("%d",&bookID);

    printf("enter dueDate:");
    scanf("%d",&dueDate);

    printf("enter returnDate:");
    scanf("%d",&returnDate);

    days_overdue=returnDate-dueDate;
    printf("enter the days overdue: %d \n",days_overdue);

    fineRate=days_overdue;
    printf("enter the fine rate: %.2f \n",fineRate);

    if (fineRate<=7){
       fineAmount=fineRate * 20;
    } else if (fineRate>=8 && fineRate<=14) {
       fineAmount=fineRate * 50;
    } else if (fineRate>=15) {
       fineAmount=fineRate * 100;
    } else {
       fineAmount=0;
    }

printf("enter the fine amount is: %.2f\n",fineAmount);


    return 0;

}

