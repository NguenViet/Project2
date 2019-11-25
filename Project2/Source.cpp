#include <iostream>

int main()
{
	int y, i, n = 5;
	printf("input y: ");
	scanf_s("%d", &y);

	printf("input i: ");
	scanf_s("%d", &i);

	float Z;
	int dob = 1;
	for (int i = 1; i < 6; i++)
	{
		dob = cos(dob * i);
	}
	Z = dob + 2 * sin(y) / pow(y, 2) + 5;
	printf("Z=%f\n", Z);
	system("pause");

	return 0;






}
