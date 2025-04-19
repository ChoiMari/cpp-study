/*********************************
	작성일 : 2025-04-19
	함수 실습 문제 1
**********************************/

/*
조건1 : 두 개의 정수를 인수로 입력받아 그 합을 리턴하는 plus함수를 만드세요.

조건2 : 두 개의 정수를 인수로 입력받아 그 차를 리턴하는 minus함수를 만드세요.
조건2-1 : 인수의 순서에 상관없이 큰 수에서 작은 수를 뺀 결과를 리턴해야 합니다.

조건3 : 두 개의 정수를 인수로 입력받아 그 곱을 리턴하는 multiple함수를 만드세요.

조건4 : 두 개의 정수를 인수로 입력받아 그 나눗셈을 리턴하는 divide함수를 만드세요.
조건4-1 : divide함수는 실수를 리턴해야 합니다.

조건5 : main함수에서 위의 4개의 함수를 한번씩 호출하여 리턴된 값을 std:cout 으로 출력하세요.
*/

#include <iostream>

// 함수 원형 선언, 코드 구현은 main() 실행 함수 밑에 작성함
int plus(int x, int y);
int minus(int x, int y);
int multiple(int x, int y);
double divide(int x, int y);

int main() {
	// 사용자에게 두 개의 정수를 입력 받음
	int x, y; // 입력 값 저장할 변수 선언
	std::cout << "첫번째 정수 입력 : "; // 출력 스트림 객체 cout을 이용해 문자열을 출력함(안내문)
	std::cin >> x; // 사용자에게 입력 값을 받아 변수 x에 저장
	std::cout << "두번째 정수 입력 : ";
	std::cin >> y;

	std::cout << std::endl;

	// 조건5: main함수에서 위의 4개의 함수를 한번씩 호출하여 리턴된 값을 std : cout 으로 출력하세요.
	std::cout << "두 수의 합 : " << plus(x, y) << std::endl; 
	//표준라이브러리 안에 있는(std::) endl 줄바꿈, 버퍼비워주는 객체
	std::cout << "두 수의 차 : " << minus(x, y) << std::endl;
	std::cout << "두 수의 곱 : " << multiple(x, y) << std::endl;
	if (y == 0) {
		std::cout << "0으로는 나눌 수 없습니다." << std::endl;
	} else {
		std::cout << "두 수의 나눗셈 : " << divide(x, y) << std::endl;
	}
	
	return 0;
}

// 조건1: 두 개의 정수를 인수로 입력받아 그 합을 리턴하는 plus함수를 만드세요.
int plus(int x, int y) {
	return x + y;
}

// 조건2 : 두 개의 정수를 인수로 입력받아 그 차를 리턴하는 minus함수를 만드세요.
// 조건2-1 : 인수의 순서에 상관없이 큰 수에서 작은 수를 뺀 결과를 리턴해야 합니다.
int minus(int x, int y) {
	if (x < y) {
		return y - x;
	}
	return x - y;
}

// 조건3 : 두 개의 정수를 인수로 입력받아 그 곱을 리턴하는 multiple함수를 만드세요.
int multiple(int x, int y) {
	return x * y;
}

// 조건4 : 두 개의 정수를 인수로 입력받아 그 나눗셈을 리턴하는 divide함수를 만드세요.
// 조건4 - 1 : divide함수는 실수를 리턴해야 합니다.
double divide(int x, int y) {
	// 나눗셈 주의 : C++에서는 0으로 못나눔(정수 기준), 런타임 오류(실행 중 오류)
	// 파라미터에 선언된 y에 0값이 못 오도록 호출한 곳에서 막는 작업 필요(예외 처리) 
	return ((double) x) / y; // 나누기 계산 전 꼭 casting 해줘야 계산 결과가 옳게 나옴
}

/*해답

#include <iostream>
#include <string>

int plus(int n1, int n2) {
	return n1 + n2;
}

int minus(int n1, int n2) {
	if (n2 >= n1) {
		return n2 - n1;
	} else {
		return n1 - n2;
	}
}

int multiple(int n1, int n2) {
	return n1 * n2;
}

float divide(int n1, int n2) {
	return n1 / n2 * 1.0f;
}

int main() {
	int n1, n2;
	std::string operation;

	std::cout << "정수 2개 입력";
	std::cin >> n1 >> n2;

	std::cout << "연산자 입력 ( +, -, *, / )";
	std::cin >> operation;

	if (operation == "+") {
		std::cout << plus(n1, n2);
	} else if (operation == "-") {
		std::cout << minus(n1, n2);
	} else if (operation == "*") {
		std::cout << multiple(n1, n2);
	} else if (operation == "/") {
		std::cout << divide(n1, n2);
	} else {
		std::cout << "연산자 오류입니다.";
	}

	return 0;
}
*/