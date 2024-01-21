#include <assert.h>
#include <stdio.h>
#include <string.h>

int symbol(char symbol) {
    int value = 0;
    switch(symbol) {
        case 'I':
            value = 1;
            break;
        case 'V': 
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
            break;
        case 'M'0:
        
    }
    return value;
}
