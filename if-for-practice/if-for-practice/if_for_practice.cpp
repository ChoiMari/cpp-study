/***************************
작성일 : 2025-04-17
if문,for문 혼합 연습
****************************/

// 문제 1
/*
조건1 : "숫자를 입력하세요." 라는 문구를 출력하고 사용자로부터 숫자를 입력받으세요.
조건2 : 입력받은 숫자가 짝수라면 입력받은 수를 4번 출력해주세요.
조건3 : 입력받은 숫자가 홀수라면 입력받은 수를 3번 출력해주세요.
조건4 : 입력받은 숫자가 0이라면 "숫자 0을 입력했습니다" 라는 문구를 출력해주세요.
조건5 : 입력받은 숫자가 음수라면 "잘못 입력했습니다." 라는 문구를 출력해주세요.
*/
#include <iostream> //표준라이브러리에 있는 입출력스트림 객체(cout,cin등) 사용시 포함시켜야 함
int main() {
	int num;

	std::cout << "숫자를 입력하세요.\n";
	std::cout << "정수 입력 : ";
	std::cin >> num;
	std::cout << "\n\n";

	if (num < 0) { // 음수일 때 실행
		std::cout << "잘못 입력했습니다.\n"; 
	} else if (num == 0) { //0일 때 실행
		std::cout << "숫자 0을 입력했습니다\n";
	} else if(num % 2 == 0){ //짝수일 때 실행
		for (int i = 1; i <= 4; i++) { //i가 1~4까지 총 4번 반복
			std::cout << num;
		}
	} else { // 음수 일 때 실행
		for (int i = 1; i <= 3; i++) { //i가 1~3까지 총 3번 반복
			std::cout << num;
		}
	}

	std::cout << "\n\n";

	/* 문제2
	조건1 : "숫자를 입력하세요." 라는 문구를 출력하고 사용자로부터 숫자를 입력받으세요.
	조건2 : 입력된 숫자를 n이라 할 때, 1부터 n까지 for문을 실행하며 1은 1번, 2는 2번, 3은 3번...n은 n번 출력하세요.
	Ex : 3을 입력할 경우, "1 2 2 3 3 3" 이 출력되야 합니다.
	*/
	int n; // 입력값 저장 변수

	std::cout << "숫자를 입력하세요.\n";
	std::cout << "정수 입력 : ";
	std::cin >> n; // 사용자에게 입력 받아 변수 n에 저장

	for (int i = 1; i <= n; i++) { //i가 1~n까지 반복, n보다 커지면 종료
		for (int j = 1; j <= i ;j++) { //j가 1~i까지 반복, i 횟수 만큼 반복 실행됨, j가 i보다 커지면 종료
			std::cout << i << " ";
		}
	}

	std::cout << "\n\n";

	return 0;
}

/*
문제1 해답
#include <iostream>

int main() {

	int no;
	std::cout << "자연수를 입력하세요.";

	std::cin >> no;

	if (no < 0) {
		std::cout << "잘못 입력했습니다.";
	}
	else if (no == 0) {
		std::cout << "숫자 0을 입력했습니다.";
	}
	else if (no % 2 == 0) {
		for (int i = 0; i < 4; i++) {
			std::cout << no << "\n";
		}
	}
	else if (no % 2 == 1) {
		for (int i = 0; i < 3; i++) {
			std::cout << no << "\n";
		}
	}
	return 0;
}
*/

/* 문제 2 해답
#include <iostream>

int main() {

	int no;
	std::cout << "숫자를 입력하세요.";

	std::cin >> no;

	for (int i = 1; i <= no; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << i << " ";
		}
	}

	return 0;
}
*/