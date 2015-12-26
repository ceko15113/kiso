#include <stdio.h>

struct student {
	int id;
	char name[100];
};

int main(void)
{
	struct student student = {276113, "Koki"};

	printf("学生番号：%d\n", student.id);
	printf("氏名：%s\n", student.name);

	return 0;
}
