#include "parser.h"
#include <stdio.h>
#include <string.h>

int main() {
    const char *test_str = "Hello Git\nGitHub GCC\nMakefile";
    int word_count = parse_word_count(test_str);
    int line_count = parse_line_count(test_str);
    printf("字符串：\"%s\"\n单词数：%d\n行数：%d\n", test_str, word_count, line_count);
    return 0;
}
