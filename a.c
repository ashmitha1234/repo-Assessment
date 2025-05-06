#include <stdio.h>
int main{
	int num, copy, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num); //153
    copy = num;
    while(num!=0){
    int d = num % 10; //3 5 1
    sum += d * d * d; //9 152 153
    num = num / 10; //15 1 0
    }
}

