// main.c
#include "parser.h"
#include <stdio.h>
#include <string.h>

int main() {
    const char *test_str = "Hello Git GitHub GCC Makefile";
    int word_count = parse_word_count(test_str);
    printf("字符串：\"%s\"\n单词数：%d\n", test_str, word_count);
    return 0;
}
