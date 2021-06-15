#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float countLetters(string text);
float countWords(string text);
float countSentences(string text);

int main(void) {
    string text = get_string("Text: ");
    float numLetters = countLetters(text);
    float numWords = countWords(text);
    float numSentences = countSentences(text);
    float index, L, S;

    L = (numLetters / numWords) * 100;
    S = (numSentences / numWords) * 100;


    index = (0.0588 * L) - (0.296 * S) - 15.8;
    int result = round(index);
    if (result < 1) {
        printf("Before Grade 1\n");
    }
    else {
        if (result < 16) {
            printf("Grade %i\n", result);
        }
        else {
            printf("Grade 16+\n");
        }
    }

}

float countLetters(string text) {
    float count = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (isalpha(text[i])) {
            count++;
        }
    }

    return count;
}

float countWords(string text) {
    float count = 1;

    for (int i = 0; i < strlen(text); i++) {
        if (isspace(text[i])) {
            count++;
        }
    }

    return count;
}

float countSentences(string text) {
    float count = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            count++;
        }
    }

    return count;
}