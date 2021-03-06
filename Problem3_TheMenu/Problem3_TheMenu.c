// Problem3_TheMenu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main(size_t argc, char **argv)
{
	size_t option;
	int integers[3];
	int absolutes[3];
	int integer;
	int sum = 0;
	double average;
	size_t n;
	FILE *file;
	switch (argc)
	{
	case 1:
		while (1)
		{
			system("cls");
			printf("\n\t\tSelect an option\n");
			printf("==========================================\n");
			printf("\t1. Find the sum of 2 integers;\n");
			printf("\t2. Find the sum of several integers;\n");
			printf("\t3. Find the average of the absolute value of 3 integers.\n");
			printf("\t0. Quit\n");
			printf("==========================================\n");
			printf("Please enter an option, and press Enter:\n");
			sum = 0;
			scanf("%zu", &option);
			getchar();
			switch (option)
			{
			case 0:
				return 0;
				break;
			case 1:
				for (size_t i = 0; i < 2; i++)
				{
					scanf("%d", &integers[i]);
					getchar();
				}
				for (size_t i = 0; i < 2; i++)
				{
					sum += integers[i];
				}
				printf("%d\n", sum);
				system("pause");
				break;
			case 2:
				printf("How many integers: ");
				scanf("%zu", &n);
				for (size_t i = 0; i < n; i++)
				{
					scanf("%d", &integer);
					getchar();
					sum += integer;
				}
				printf("%d\n", sum);
				system("pause");
				break;
			case 3:
				for (size_t i = 0; i < 3; i++)
				{
					scanf("%d", &integers[i]);
					getchar();
				}
				for (size_t i = 0; i < 3; i++)
				{
					sum += abs(integers[i]);
				}
				average = (double)sum / 3;
				printf("%lf\n", average);
				system("pause");
				break;
			default:
				return 0;
				break;
			}
		}
		break;
	default:
		if (strcmp(argv[1], "/FindSum-TwoIntegers") == 0)
		{
			for (size_t i = 0; i < argc - 2; i++)
			{
				integers[i] = atoi(argv[i + 2]);
			}
			sum = FindSum(integers, argc - 2);
			printf("%d\n", sum);
		}
		else if (strcmp(argv[1], "/FindSum-Integers") == 0)
		{
			for (size_t i = 0; i < argc - 2; i++)
			{
				integer = atoi(argv[i + 2]);
				sum += integer;
			}
			printf("%d\n", sum);
		}
		else if (strcmp(argv[1], "/FindAverage-AbsoluteThreeIntegers") == 0)
		{
			for (size_t i = 0; i < argc - 2; i++)
			{
				integers[i] = atoi(argv[i + 2]);
			}
			for (size_t i = 0; i < argc - 2; i++)
			{
				absolutes[i] = FindAbsolute(integers[i]);
			}
			sum = FindSum(absolutes, argc - 2);
			average = (double)sum / (argc - 2);
			printf("%lf\n", average);
		}
		else
		{
			errno_t err = fopen_s(&file, "C:\\Users\\EwacEbup\\Documents\\Visual Studio 2017\\Projects\\Problem3_TheMenu\\Problem3_TheMenu\\Readme.txt", "r");
			if (err != 0)
			{
				exit(EOF);
			}
			fflush(stdout);
			Dump(stdout, file);
			fclose(file);
		}
		break;
	}
    return 0;
}

