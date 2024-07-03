#include <stdio.h>

int main() {
	int year, month, day, run = 0;
	scanf("%d %d %d", &year, &month, &day);
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		run = 1;
	}
	switch (month) {
		case 5:
			month = 0;
			break;
		case 8:
			month = 1;
			break;
		case 2:
			month = (run) ? 1 : 2;
			break;
		case 3:
		case 11:
			month = 2;
			break;
		case 6:
			month = 3;
			break;
		case 9:
		case 12:
			month = 4;
			break;
		case 4:
		case 7:
			month = 5;
			break;
		case 1:
			month = (run) ? 5 : 6;
			break;
		case 10:
			month = 6;
			break;
	}
	year = ((year % 100) / 4 + (year%100)) % 7;
	switch ((year + month + day) % 7) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wendnesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 0:
			printf("Sunday");
			break;
	}

	return 0;
}