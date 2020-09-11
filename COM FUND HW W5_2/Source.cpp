#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printOutput(char* str, int num);

int main() {
	char str[50];
	int num;
	printf("Enter String : ");
	scanf("%s", str);
	printf("Num : ");
	scanf("%d", &num);
	printOutput(str, num);
	return 0;
}

void printOutput(char* str,int num) {
	char* p;
	p = str;
	printf("Output : ");
	while (*p != '\0') {
		for (int i = 0; i < num; i++) {
			printf("%c", *p);
		}
		p++;
	}
}