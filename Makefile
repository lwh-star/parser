# Makefile
CC = gcc
CFLAGS = -Wall -g

# 目标：生成可执行文件parser
parser: main.o parser.o
	$(CC) $(CFLAGS) -o parser main.o parser.o

# 编译main.c
main.o: main.c parser.h
	$(CC) $(CFLAGS) -c main.c

# 编译parser.c
parser.o: parser.c parser.h
	$(CC) $(CFLAGS) -c parser.c

# 清理编译产物
clean:
	rm -f parser *.o libparser.a libparser.so
