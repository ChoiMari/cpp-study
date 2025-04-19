/*******************************
	작성일 : 2025-04-19
	함수 실습 문제2
********************************/

/*
조건1 : 회원 3명의 "이름", "나이" 정보를 저장하는 배열변수 member를 선언하세요.
조건1-1 : 나이 역시 std:string 으로 입력받아도 무방합니다.
조건1-2 : 배열변수 member는 모든 함수가 접근할 수 있어야 하므로 함수 밖에 "전역변수로" 선언되어야 합니다.

조건2 : std:cin 으로 3회에 걸쳐 "이름", "나이"를 입력받아 배열변수 member에 저장하는 register_member함수를 선언하세요.

조건3 : for문과 std:cout 으로 배열변수 member에 저장된 회원들의 "이름", "나이"를 모두 출력하는 show_member함수를 선언하세요.

조건4 : main함수에서 우선 register_member함수를 호출하여 사용자로부터 회원정보를 입력받으세요.
조건4-1 : register_member함수의 실행이 완료되면 show_member함수를 호출하여 회원정보를 출력하세요.
*/
#include <iostream>
#include <string>

//조건1: 회원 3명의 "이름", "나이" 정보를 저장하는 배열변수 member를 선언하세요.
//조건1 - 1 : 나이 역시 std : string 으로 입력받아도 무방합니다.
//조건1 - 2 : 배열변수 member는 모든 함수가 접근할 수 있어야 하므로 함수 밖에 "전역변수로" 선언되어야 합니다.
std::string member[3][2];

// 편하게 쓰려고 2차원 배열변수 member의 행 길이, 열길이 상수로 선언함
const int MEMBER_ROWS_LANTH = sizeof(member) / sizeof(member[0]);
const int MEMBER_COLS_LANTH = sizeof(member[0]) / sizeof(member[0][0]);

void register_member();
void show_member();

int main() {
	//조건4: main함수에서 우선 register_member함수를 호출하여 사용자로부터 회원정보를 입력받으세요.
	register_member();

	//조건4-1 : register_member함수의 실행이 완료되면 show_member함수를 호출하여 회원정보를 출력하세요.
	show_member();

	return 0;
}

// 조건2 : std:cin 으로 3회에 걸쳐 "이름", "나이"를 입력받아 
// 배열변수 member에 저장하는 register_member함수를 선언하세요.
void register_member() {
	std::string name, age;
	for (int i = 0;i < MEMBER_ROWS_LANTH;i++) { //2차원 배열 member의 행의 크기만큼 실행
		std::cout << "회원" << i + 1 << "\n";
		std::cout << "이름 : ";
		std::cin >> name;
		std::cout << "나이 : ";
		std::cin >> age;
		// 그냥 for반복문 한개로 
		// [i][0]일때,[i][1]일때 넣어서 초기화 해도됨, 근데 인덱스에 숫자를 직접 넣는게 싫어서
		// 중첩으로 넣음
		for (int j = 0; j < MEMBER_COLS_LANTH; j++) {//2차원 배열 member의 열의 크기만큼 실행
			if (j == 0) { //[i][0]일때 이름 저장
				member[i][j] = name;
			} else if(j == 1) { //[i][1]일때 나이 저장
				member[i][j] = age;
			}
		}
		std::cout << std::endl;
	}
}
/*
//조건3 : for문과 std:cout 으로 배열변수 member에 
// 저장된 회원들의 "이름", "나이"를 모두 출력하는 show_member함수를 선언하세요.
void show_member() {
	for (int i = 0;i < MEMBER_ROWS_LANTH;i++) { //2차원 배열변수 행 길이(크기)만큼 실행됨
		std::cout << "<회원" << i + 1 << "> 이름 : " << member[i][0]<< ", 나이 : " << member[i][1] << "\n";
	}
}
*/

void show_member() {
	for (int i = 0; i < MEMBER_ROWS_LANTH; i++) { //2차원 배열변수 행 길이(크기)만큼 실행됨
		for (int j = 0; j < MEMBER_COLS_LANTH; j++) {
			if (j == 0) {
				std::cout << "<회원" << i + 1 << "> \n";
				std::cout << "이름 : " << member[i][j];
			} else if (j == 1) {
				std::cout << ", 나이 : " << member[i][j];
			}
		}
		std::cout << "\n\n";
	}
}

/* 해답

#include <iostream>
#include <string>

std::string member[3][2];

void register_member() {
	std::cout << "이름, 나이 순으로 3명을 입력해주세요.";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> member[i][j];
		}
	}

}

void show_member() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << member[i][j] + " ";
		}

		std::cout << "\n";
	}
}

int main() {
	register_member();
	show_member();

	return 0;
}

*/