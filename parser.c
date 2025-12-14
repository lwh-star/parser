#include "parser.h"
#include <string.h>
#include <ctype.h>

// 统计单词数
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

// 新增：统计行数
int parse_line_count(const char *str) {
    if (str == NULL) return 0;
    int count = 1; // 至少1行
    while (*str != '\0') {
        if (*str == '\n') {
            count++;
        }
        str++;
    }
    return count;
}
