#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void introduceOperators() {
    printf("Operators available:\n");
    printf("\n");
    printf("    1) add\n");
    printf("    2) subtract\n");
    printf("    3) multiply\n");
    printf("    4) divide\n");
    printf("    5) power of\n");
    printf("    6) Pick for me!\n");
    printf("\n");
    printf("Number of your desired operator: ");
}

void flush() {
    // flush input
    while (getchar() != '\n');
}

int getNum() {
    int num;
    scanf("%d", &num);
    flush();
    return num;
}


int main() {
    signed int num1, num2, result;
    float result_float;
    int choice_in_range = 0;
    signed int prompt_choice;

    int num_options = 6;

    // make sure we choose a different random seed
    srand(time(NULL));

    // pretty print intro
    printf("*************************************\n");
    printf("         Welcome to Calculator!\n");
    printf("*************************************\n");
    printf("\n");

    do {
        // print help every loop
        introduceOperators();

        // getchar actually returns an int (so we can deal with EOF)
        prompt_choice = getchar();
        // ... so we'll convert it to the actual number rather than the ASCII
        // code of the number it represents
        prompt_choice = prompt_choice - '0';

        flush();

        // gotta do a special check for 0 lol
        if (prompt_choice > 0 && prompt_choice <= num_options) {
            choice_in_range = 1;
        } else {
            printf("\n");
            printf("ERROR: choice not in range: %d\n", prompt_choice);
            printf("\n");
            // necessary?
            choice_in_range = 0;
        }
    } while (choice_in_range != 1);

    printf("\n");
    printf("Operator %d chosen.", prompt_choice);
    printf("\n");
    printf("\n");
    
    // this is unneat, but I only got 30 mins lol
    if (prompt_choice == num_options) {
        prompt_choice = (rand() % (num_options - 1)) + 1;
        printf("Using option %d!\n", prompt_choice);
        printf("\n");
    }

    // prompt for numbers
    printf("Integer 1: ");
    num1 = getNum();

    printf("Integer 2: ");
    num2 = getNum();

    switch (prompt_choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            // typecasting because C is duuuuumb
            result_float = (float)num1 / (float)num2;
            break;
        case 5:
            result = (int)pow((float)num1, (float)num2);
            break;
        default:
            printf("ERROR: ");
            break;
    }

    if (prompt_choice == 4) {
        // if we divided, we actually have to *specify* that we're talking
        // floats -- fuckin C man ._.
        printf("The result may or may not be %f! YMMV, no warranty. Also, you divided, and C is fucking *terrible* at that shit.\n", result_float);
    } else {
        printf("The result may or may not be %d! YMMV, no warranty.\n", result);
    }
        
    printf("\n");
    return 0;
}
