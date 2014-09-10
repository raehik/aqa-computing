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

int getInt() {
    int num;
    scanf("%d", &num);
    flush();
    return num;
}

double getDouble() {
    double num;
    scanf("%lf", &num);
    flush();
    return num;
}


int main() {
    signed int num1, num2, result;
    double result_double, cert1, cert2, result_cert;
    int choice_in_range = 0;
    signed int prompt_choice;
    char operator;

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

        // forget about all other chars on that line
        flush();

        // convert it to an actual number rather than the ASCII code of the
        // number it represents
        prompt_choice = prompt_choice - '0';

        if (prompt_choice > 0 && prompt_choice <= num_options) {
            choice_in_range = 1;
        } else {
            printf("\n");
            printf("ERROR: choice not in range: %d\n", prompt_choice);
            printf("\n");
        }
    } while (choice_in_range != 1);

    printf("\n");
    printf("Operator %d chosen.\n", prompt_choice);
    
    // this is unneat, but I only got 30 mins lol
    // if random chosen (random is always the final choice, so == num_options)
    if (prompt_choice == num_options) {
        prompt_choice = (rand() % (num_options - 1)) + 1;
        printf("The die rolls... and we're using option %d!\n", prompt_choice);
    }

    printf("\n");

    // prompt for numbers
    printf("Integer 1: ");
    num1 = getInt();

    printf("Uncertainty 1 (absolute): +- ");
    cert1 = getDouble();

    printf("Integer 2: ");
    num2 = getInt();

    printf("Uncertainty 2 (absolute): +- ");
    cert2 = getDouble();
    
    printf("\n");

    switch (prompt_choice) {
        case 1:
            result = num1 + num2;
            result_cert = cert1 + cert2;
            operator = '+';
            break;
        case 2:
            result = num1 - num2;
            result_cert = cert1 + cert2;
            operator = '-';
            break;
        case 3:
            result = num1 * num2;
            result_cert = (((double)num1 / cert1) + ((double)num2 / cert2)) * (double)result;
            operator = '*';
            break;
        case 4:
            // typecasting because C is duuuuumb
            result_double = (double)num1 / (double)num2;
            result_cert = (((double)num1 / cert1) + ((double)num2 / cert2)) * (double)result;
            operator = '/';
            break;
        case 5:
            result = (int)pow((double)num1, (double)num2);
            operator = '^';
            break;
        default:
            printf("ERROR: nothing to do for choice: %d", prompt_choice);
            exit(1);
            break;
    }

    // if we divided, we have to specify that we're talking doubles T___T
    // fuckin' C, man
    if (prompt_choice == 4) {
        printf("(%d +- %f) %c (%d +- %f) = %f +- %f!\n",
                num1, cert1, operator, num2, cert2, result_double,
                result_cert);
    } else {
        printf("(%d +- %f) %c (%d +- %f) = %d +- %f!\n",
                num1, cert1, operator, num2, cert2, result, result_cert);
    }

    printf("\n");
    return 0;
}
