﻿#include <stdio.h>

int main()
{
	int choice;

	printf("1: 새 게임\n");
	printf("2: 불러오기\n");
	printf("3: 설정\n");
	printf("4: 크레딧\n");

	scanf_s("%d", &choice);

	switch (choice) {
	case1:printf("새 게임\n");
		break;
	case2:printf("불러오기\n");
		break;
	case3:printf("설정\n");
		break;
	case4:printf("크레딧\n");
		break;
	default:printf("잘못입력\n");
		break;
	}
}

	//Control-KC (코멘트)
	//Control-KU (Uncomment)

	/*if (choice == 1)
		printf("새 게임\n");
	else if (choice == 2)
		printf("불러오기\n");
	else if (choice == 3)
		printf("설정\n");
	else if (choice == 4)
		printf("크레딧\n");

	else
		printf("잘못입력\n");

}*/