#include<stdio.h>
#include"sushant.c"

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d is %d", num, square(num));

    return 0;
}

}
