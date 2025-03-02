#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *word;
    int value;
} NumberWord;

NumberWord number_words[] = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
    {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13},
    {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
    {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20}, {"thirty", 30},
    {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70},
    {"eighty", 80}, {"ninety", 90}, {"hundred", 100}, {"thousand", 1000}
};

#define NUM_WORDS (sizeof(number_words) / sizeof(NumberWord))

int get_number_from_word(char *word) {
    for (int i = 0; i < NUM_WORDS; i++) {
        if (strcmp(word, number_words[i].word) == 0)
            return number_words[i].value;
    }
    return -1; // Invalid word
}

int word_to_number(char *input) {
    int num = 0, current = 0, last_multiplier = 1;
    
    char *token = strtok(input, " ");
    while (token != NULL) {
        int value = get_number_from_word(token);
        if (value == -1) return -1; // Invalid input

        if (value == 100 || value == 1000) {
            if (current == 0) current = 1; // Handle "hundred" as in "hundred" meaning "100"
            current *= value;
            last_multiplier = value;
        } else {
            if (last_multiplier > value) { // e.g., "one thousand one"
                num += current;
                current = value;
            } else {
                current += value;
            }
        }

        token = strtok(NULL, " ");
    }
    
    return num + current;
}

int main(void) {
    char input[100];
    printf("Enter a number in words: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline character
    
    int number = word_to_number(input);
    if (number != -1) {
        printf("The number is: %d\n", number);
    } else {
        printf("Invalid input.\n");
    }
    
    return 0;
}
