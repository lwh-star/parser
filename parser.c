// parser.c
#include "parser.h"
#include <string.h>
#include <ctype.h>

// 解析字符串，统计单词数量
int parse_word_count(const char *str) {
    if (str == NULL) return 0;
    int count = 0;
    int in_word = 0;
    while (*str != '\0') {
        if (isspace((unsigned char)*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}
