#include <stdio.h>
#include <string.h>

void reverseString(char s[]) {             //function prototype
    int length = strlen(s);
    for (int i = 0; i < length / 2; ++i) {      //for loop to count how many char to reverse
        char temp = s[i];                        /*swap formula to change position of first char with last char*/
        s[i] = s[length - i - 1];                /*length-i-1 because i start from 0 and str length char is 6*/
        s[length - i - 1] = temp;
    }
}

int main() {
    char inputString[100];
    printf("Input a string: ");
    scanf(" %[^\n]", inputString);           //scanf inputString untill new line

    reverseString(inputString);              //function call to reverse
    printf("Reversed string: %s\n", inputString);

    return 0;
}
