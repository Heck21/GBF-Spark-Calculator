#include <stdio.h>

int main(){
    int singleDraw, tenDraw, crystals, total;
    double percent;

    printf("\nNumber of crystals: ");
    scanf("%d", &crystals);
    printf("Number of 10 draw tickets: ");
    scanf("%d", &tenDraw);
    printf("Number of tickets: ");
    scanf("%d", &singleDraw);

    total = ((int)(crystals / 300) + (tenDraw * 10) + singleDraw);
    percent = ((double)total / (double)300) * (double)100;

    printf("\nYou have ---%d--- rolls.\n", total);
    printf("\nThis is %.2f%% of a spark.\n\n", percent);

    fflush(stdin);
    printf("Press ENTER key to exit...");
    getchar();

    return 0;
}