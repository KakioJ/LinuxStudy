#include "my.h"

char *filename = "user.dat"; // 文件名
USER* users[200]; // users 数组
int users_len = 0; // 数组长度

void input(){
    USER* U = (USER*)malloc(sizeof(USER));
    printf("input sequence ordered by id name htel tel >> ");
    scanf("%d %s %s %s", &(U->id), U->name, U->htel, U->tel);
    users[users_len] = U; // 写入数组
    users_len++; //数组长度++
}
void save(){ // 保存输入
    FILE* fp = fopen(filename, "a+"); // 向文件末端追加内容
    for(int i =0;i<users_len;i++){
        USER* U = users[i];
        fprintf(fp, "%d %s %s %s\n", U->id, U->name, U->tel, U->htel);
    }
    fclose(fp);
    memset(users, 0, sizeof(users)); // 写完文件后，清空 users 数组
    users_len = 0;
}
void save_w(){ // 保存 sort 结果
    FILE* fp = fopen(filename, "w+"); // 覆盖原文件内容
    for(int i =0;i<users_len;i++){
        USER* U = users[i];
        fprintf(fp, "%d %s %s %s\n", U->id, U->name, U->tel, U->htel);
    }
    fclose(fp);
    memset(users, 0, sizeof(users));
    users_len = 0;
}

void myread(){ // 从文件读取内容到内存里的 users 数组
    FILE *fp = fopen(filename, "r");
    for(int i =0;i<200;i++){
        USER* U = (USER*)malloc(sizeof(USER));
        if (fscanf(fp, "%d %s %s %s", &(U->id), U->name, U->tel, U->htel)==EOF)break;
        users[users_len] = U;
        users_len++;
    }
    fclose(fp);
}

void output(){ // 打印 users 数组
    for(int i =0;i<users_len;i++){
        USER* U = users[i];
        printf("%d %s %s %s\n", U->id, U->name, U->htel, U->tel);
    }
}


int cmpfunc (const void *a, const void *b) // qsort 使用的比较函数，用于排序
{
   return strcmp((*(USER**)a)->name,(*(USER**)b)->name)>0;
}
int cmpfunc2 (const void *a, const void *b)
{
   return strcmp((*(USER**)a)->name,(*(USER**)b)->name)<=0;
}

void mysort(){
    printf("\ninput up(0)/down(1) >> ");
    int up_down;
    scanf("%d", &up_down);
    qsort(users, users_len, sizeof(USER*), up_down?cmpfunc:cmpfunc2);//升序/降序
    printf("sorted result:\n");
    output();
    save_w();
}


char* genRandomString(int seed)
{
	int flag, i;
    int length = 4;
	char* string = (char*) malloc(length);

	srand(seed);
 
	for (i = 0; i < length - 1; i++)
	{
		flag = rand() % 3;
		switch (flag)
		{
			case 0:
				string[i] = 'A' + rand() % 26;
				break;
			case 1:
				string[i] = 'a' + rand() % 26;
				break;
			case 2:
				string[i] = '0' + rand() % 10;
				break;
			default:
				string[i] = 'x';
				break;
		}
	}
	string[length - 1] = '\0';
	return string;
}

char* genRandomTel(int seed)
{
	int i;
    int length = 14;
	char* string = (char*) malloc(length);

	srand(seed);
 
    string[0] = '1';
    string[1] = '3';
	for (i = 2; i < length - 3; i++)
	{
		string[i] = '0' + rand() % 10;
	}
	string[length - 1] = '\0';
	return string;
}

char* genRandomHTel(int seed)
{
	int i;
    int length = 8;
    
	char* string = (char*) malloc(length);

	srand(seed);
 
    string[0] = '7';
	for (i = 1; i < length - 2; i++)
	{
		string[i] = '0' + rand() % 10;
	}
	string[length - 1] = '\0';
	return string;
}

void myrandom(){
    FILE* fp = fopen(filename, "w+"); 
    for(int i =0;i<100;i++){
        char* s1 = genRandomString(i);
        char* s2 = genRandomTel(i);
        char* s3 = genRandomHTel(i);
        fprintf(fp, "%d %s %s %s\n", i, s1, s2, s3);
    }
    fclose(fp);
}
