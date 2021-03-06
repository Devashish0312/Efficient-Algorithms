// Algorithm to find if a given number is prime or not

#include<stdio.h>

bool prime_num(int n){
    // corner cases
    if(n<=1)return false;
    if(n<=3)return true;

    // Below code is checked so that we can skip middle 5 numbers in the later while loop
    if(n%2==0 || n%3==0)return false;

    int i=5;
    while(i*i<=n){
        if(n%i==0 || n%(i+2)==0)return false;
        i+=6;
    }

    return true;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(prime_num(num))
    printf("\n%d is a prime number.",num);
    else
    printf("\n%d is a not a prime number.",num);

    return 0;
}
