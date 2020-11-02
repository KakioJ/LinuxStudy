#ifndef MY_H_
#define MY_H_
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct user{
    int id;
    char name[8];
    char htel[12];
    char tel[12];
};

typedef struct user USER;

void input();
void output();
void save();
void mysort();
void myread();
void myrandom();
#endif
