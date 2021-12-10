#include <cs50.h>
#include <stdio.h>

int main(void) {

    int height = 0;
    printf ("Please Enter a Number: ");
    scanf("%d", &height);

    if (height < 1 || height > 8) {
        printf("Please Enter a valid Number");
        return (1);
    }

    int w = 1;
    int space = height -1;

    for(int i = 0; i < height; i ++) {
            for (int k = 0; k< space; k++){
                printf(" ");
            }
            for(int j =0; j < w; j++ ) {
                printf("#");
            }
        printf("\n");
        w++;
        space--;

    }
  
}
