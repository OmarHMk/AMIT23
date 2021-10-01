#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int age;
    float degree;
    int section;
};

int main()
{


    struct student arr[5]={
        {"Ahmed",19,90,1},
        {"Mohamed",19,93,1},
        {"Omar",18,91,2},
        {"Mahmoud",18,89,1},
        {"Zeyad",19,92,2}

        };
        int i;
        printf("Choose Student No.'1-5'=");
        scanf("%d",&i);

        printf("\nStudent %d\n\nName   : %s\nAge    : %d\nDegree : %.1f\nSection: %d\n",i,arr[i-1].name,arr[i-1].age,arr[i-1].degree,arr[i-1].section);

    ///
    return 0;
}
