#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a1 = '1', a2 = '2', a3 = '3', a4 = '4', a5 = '5', a6 = '6', a7 = '7', a8 = '8', a9 = '9';

void board() {
    printf("OXO\n");
    printf("%c|%c|%c\n", a1, a2, a3);
    printf("-----\n");
    printf("%c|%c|%c\n", a4, a5, a6);
    printf("-----\n");
    printf("%c|%c|%c\n", a7, a8, a9);
}

void choice() {
    char num_str[10];
    printf("where to place what?\nq to quit\n> ");
    fgets(num_str, sizeof(num_str), stdin);
    
    // Remove newline character
    num_str[strcspn(num_str, "\n")] = '\0';
    
    if (strcmp(num_str, "q") == 0) {
        exit(0);
    }
    
    int num = atoi(num_str);
    char symbol[10];
    
    switch(num) {
        case 1:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a1 = symbol[0];
            break;
        case 2:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a2 = symbol[0];
            break;
        case 3:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a3 = symbol[0];
            break;
        case 4:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a4 = symbol[0];
            break;
        case 5:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a5 = symbol[0];
            break;
        case 6:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a6 = symbol[0];
            break;
        case 7:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a7 = symbol[0];
            break;
        case 8:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a8 = symbol[0];
            break;
        case 9:
            printf("what to place?\n x / o\n> ");
            fgets(symbol, sizeof(symbol), stdin);
            symbol[strcspn(symbol, "\n")] = '\0';
            a9 = symbol[0];
            break;
        default:
            printf("Invalid input!\n");
    }
}

int main() {
    while(1) {
        board();
        choice();
    }
    return 0;
}