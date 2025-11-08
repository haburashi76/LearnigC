#include <stdio.h>
#include <windows.h>

void main() {
	printf("야생의 람쥐썬더가 공격해왔다!\n");
	Sleep(1000);
	printf("당신의 행동은? 1. 공격하기 2. 도망가기 3. 하늘에 빌기 4. 개처럼 짖기\n");
	printf("당신의 선택: ");

	int choice;
	scanf_s("%d", &choice);

	printf("선택: %d\n", choice);

	if (choice == 1) {
		printf("어떤 기술을 사용할까? 1. 강펀치 2. 로우킥 3. 매지컬 버스트 4. 하늘에 빌기 5. 개처럼 짖기\n");

		printf("당신의 선택: ");

		int attack;
		scanf_s("%d", &attack);

		printf("선택: %d\n", attack);

		if (attack == 1) {
			printf("당신의 사념을 담은 강펀치는 허공을 갈랐고, 이어서 날린 2, 3연격도 어딘가에 부딪히는 건 과한 욕심이었습니다.\n");
			Sleep(1500);
			printf("람쥐썬더는 그런 당신을 짠한 눈빛으로 쳐다봤고 당신을 순식간에 살해했습니다.\n");
			Sleep(1500);
		} else if (attack == 2) {
			printf("당신은 전력으로 로우킥을 날렸지만 되려 자신의 발에 넘어졌습니다.\n");
			Sleep(1500);
			printf("당신은 일어나 로우킥을 다시 찼습니다. 이번엔 람쥐썬더에게 적중했습니다.\n");
			Sleep(1500);
			printf("하지만 람쥐썬더는 그 찰나의 순간 온몸에 전류를 흘려보냈고 람쥐썬더와 접촉한 당신의 발과 다리를 타고 흐른 전류는 ");
			printf("당신을 통구이로 만들기에 충분했습니다.\n");
			Sleep(1500);
			printf("람쥐썬더는 당신이 타들어가는 모습을 한심하다는 듯이 쳐다봤습니다.\n");
			Sleep(1500);
		} else if (attack == 3) {
			printf("당신은 폼을 잡고 기술명을 외쳤지만, 그런게 가능할 리가 없었습니다.\n");
			Sleep(1500);
			printf("람쥐썬더는 어이가 없다는 표정을 지으며 당신을 살해했습니다.\n");
			Sleep(1500);
		} else if (attack == 4) {
			printf("기도는 통하지 않았습니다. 람쥐썬더는 가소롭다는 듯이 당신을 살해했습니다.\n");
			Sleep(1500);
		} else if (attack == 5) {
			printf("람쥐썬더가 살기 위해 짖는 당신을 한심한 눈으로 쳐다봤습니다. \n");
			Sleep(1500);
			printf("그리고 더러운 걸 만지는듯이 조심스레 당신을 살해했습니다.\n");
			Sleep(1500);
		} else {
			printf("당신은 멋지게 기술명을 외치려 했지만 기술명을 까먹었습니다.\n람쥐썬더는 한심하다는 듯이 당신을 비웃고 살해했습니다.");
			Sleep(1500);
		}
	} else if (choice == 2) {
		printf("당신은 도망쳤지만 람쥐썬더가 우월한 속도로 추격해 당신을 쓰러트렸습니다.\n");
		Sleep(1500);
	} else if (choice == 3) {
		printf("기도는 통하지 않았습니다. 람쥐썬더는 가소롭다는 듯이 당신을 살해했습니다.\n");
		Sleep(1500);
	} else if (choice == 4) {
		printf("람쥐썬더가 살기 위해 짖는 당신을 한심한 눈으로 쳐다봤습니다. \n");
		Sleep(1500);
		printf("그리고 더러운 걸 만지는듯이 조심스레 당신을 살해했습니다.\n");
		Sleep(1500);
	} else {
		printf("당신이 어쩔 줄 몰라하는 사이에 람쥐썬더가 빛과 같은 속도로 당신을 살해했습니다.\n");
		Sleep(1500);
	}
}