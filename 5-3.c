#include<stdio.h>

void max1(int d);
void max2(int d);

int main(void) {
    max1(30);
    max1(100);
    max1(50);
    max2(30);
    max2(100);
    max2(50);
    return 0;
}

void max1(int d) {
	int x = 0;
	if(d > x) {
		x=d;
	}
	printf("max1:%d->%d\n",d, x);
}

void max2(int d) {
	static int x = 0;
	if(d > x) {
		x=d;
	}
	printf("max2:%d->%d\n",d, x);
}
