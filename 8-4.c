#include <stdio.h>

#define X 0
#define Y 1
#define Z 2
#define DIM 3

void read_vector3D(double vector[])
{
	int	i;

	for (i = 0; i < 3; i++)
		scanf("%lf", &vector[i]);
}

void outer_product3D(double vector1[], double vector2[], double vector3[])
{
	vector3[X] = vector1[Y] * vector2[Z] - vector1[Z] * vector2[Y];
	vector3[Y] = vector1[Z] * vector2[X] - vector1[X] * vector2[Z];
	vector3[Z] = vector1[X] * vector2[Y] - vector1[Y] * vector2[X];
}

double inner_product3D(double vector1[], double vector2[])
{
	return vector1[X] * vector2[X] + vector1[Y] * vector2[Y] + vector1[Z] * vector2[Z];
}

int main(void)
{
	double	vector1[DIM], vector2[DIM], vector3[DIM];

	printf("ベクトル a の 3 成分を入力してください\n");
	read_vector3D(vector1);

	printf("\n");

	printf("ベクトル b の 3 成分を入力してください\n");
	read_vector3D(vector2);

	printf("\n");

	outer_product3D(vector1, vector2, vector3);

	printf("2つのベクトルに垂直なベクトル c (外積) は (%.2f, %.2f, %.2f) です\n", vector3[X], vector3[Y], vector3[Z]);
	printf("入力ベクトル a とベクトル c の内積は %.2f です\n", inner_product3D(vector1, vector3));
	printf("入力ベクトル b とベクトル c の内積は %.2f です\n", inner_product3D(vector2, vector3));

	return 0;
}
