#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(0));
    int hidden = rand() % 100 + 1;

    int gues;
    printf("Please inter your number: ");
    scanf("%d", &gues);
    if (gues == hidden) {
        printf("You are Right %d = %d\n", gues, hidden);
    } else {
        printf("Oh No Not Right, %d %d", gues, hidden);
    }
}