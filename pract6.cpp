#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

bool IsWord(char* word) {
    for (int i = 0; i < strlen(word); i++) {
        if (!isalnum(word[i]))
            return false;
    }
    return true;
}

void ShowOddWords(char* string)
{
    int wordNumber = 0;
    char* words = strtok(string, " ");
    while (words != NULL)                     
    {
        if (IsWord(words)) {              
            wordNumber += 1;  
            if (wordNumber % 2 != 0) {
                std::cout << words << "\n";
            }
        }       
        words = strtok(NULL, " ");             
    }
}
void CreateString(char* string) {
    std::cout << "Введите строку\n";
    gets_s(string, 99);
}

int main()
{
    setlocale(LC_ALL, "ru");
    char str[100];
    CreateString(str);
    ShowOddWords(str);

}


