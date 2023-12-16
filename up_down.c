#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int com= rand()%100 + 1;
	int num = 1;
	int user;
	
	
	while (com!=user){
		scanf("%d", &user);
		if (com > user){
			printf("up↑");
			num++;
		}
		else if (com < user){
			printf("down↓");
			num++;
		}
	}
	printf("%d번만에 맞췄습니다.\n컴퓨터가 생각한 숫자는 %d", num, com);
	return 0;
}
