/**********************************
작성일 : 2025-04-17
for문 실습 문제
***********************************/

#include <iostream> // std::cout 출력 스트림 사용시 입출력스트림 헤더파일을 포함시켜야함 
// 이유 : cout 출력 객체가 iostream헤더 파일에 선언되어있음
// #include는 전처리기 지시자(컴파일 전에 수행,헤더 파일 내용이 소스에 복붙)로 소스코드에 미리 포함을 시켜야 
// 컴파일러가 이게 뭔지 알고 변환 작업을 처리할 수 있다

/* C++에서의 변환 과정 및 실행 : 소스 코드 ->(컴파일러가 수행) 컴파일 -> 어셈블리어로 변환(.s 또는 .asm)
	-> 기계어(바이너리 코드,2진수 코드)로 변환 -> 목적 프로그램(.o 또는 .obj) 
	-> 링크(링커가 수행, 여러 목적파일과 라이브러리를 합쳐서 실행 파일로 만듦) 
	-> 실행 파일 생성(.exe) -> 로드(로더가 수행, 보조기억장치에 있는 실행파일을 주기억장치에 올림) -> 실행 됨
*/
//#include <string> // std::to_string() 숫자를 문자열로 변환하는 함수 사용시 포함시켜야 함
int main() {
	int count = 0; // 출력 횟수 뽑아보려고 선언함

	// 실습 1
	// 조건1 : 'ㅋㅋㅋ' 을 100번 출력하는 프로그램을 만들어주세요.
	// Print "ㅋㅋㅋ" 100 times using a for loop
	for (int i = 0; i < 100; i++) { // i가 0~99까지 1씩 증가하며 총 100번 반복실행되고, i가 100이 되면 종료
		std::cout << "ㅋㅋㅋ\n";
		count += 1; // 출력 횟수를 셈
	}
	std::cout << "\n\n총 " << count << "번 반복 실행되었습니다\n\n"; // 출력 횟수 콘솔에 출력
	//std::cout << "\n\n총 " + std::to_string(count) + "번 반복 실행되었습니다\n\n";

	// [참고] \n 대신 std::endl을 써도 됨
	// std::endl은 줄바꿈 + 버퍼 flush(비우기)를 같이함
	// endl(end line) 줄 끝, 줄바꿈을 의미함, \n과 같이 줄을 바꿔주고 출력 버퍼까지 비워줌(flush)
	// flush란? 출력 버퍼에 쌓아둔 데이터를 -> 강제로 디바이스(콘솔, 파일 등)로 내보내는 것

	// 실습 2
	// 조건1 : 1985 부터 2023까지 출력하는 프로그램을 만들어 주세요.
	for (int i = 1985; i <= 2023; i++) { //i가 1985 ~ 2023까지 1씩 증가하며 반복 실행됨,i가 2024가 되면 종료
		std::cout << i << "\n";
	}

	std::cout << "\n\n";

	// 실습3
	// 조건1 : "입력한 횟수" 만큼 "안녕"을 출력하는 프로그램을 만들어 주세요.
	int input_value; // 입력한 횟수 담을 변수 선언
	count = 0; // 맞게 작동되었는지 확인용

	std::cout << "원하는 출력 횟수 : ";
	std::cin >> input_value; // 사용자에게 값(입력 횟수)를 입력 받아 변수 input_value에 저장
	std::cout << "\n";
	// 사용자가 입력한 횟수만큼 안녕을 출력
	for (int i = 1;i <= input_value;i++) { // i가 1부터 input_value까지 반복실행, 총 input_value번을 반복함 
		std::cout << "안녕\n";
		count += 1;
	}
	std::cout << "\n총 " << count << "번 실행됨\n\n";  // 출력 횟수 확인

	// 실습4
	// 1 부터 "입력받은 수" 까지 출력하는 프로그램을 만들어 주세요.
	int input_num; // 입력받은 수 저장할 변수 선언

	std::cout << "정수 입력 : ";
	std::cin >> input_num; // 사용자에게 값을 입력받아 변수 input_num에 저장함
	std::cout << "\n";

	//1부터 "입력받은 수"까지 출력
	for (int i = 1; i <= input_num; i++) { // i가 1~input_num까지 1씩 증가하며 반복 실행 됨
		std::cout << i << "\t"; //한 줄로 나란히 출력
	}
	
	std::cout << "\n\n";

	return 0;
}

/*
실습 1 해답

#include <iostream>

int main() {
	int i;

	for ( i = 0 ; i < 100 ; i++ ){
		std::cout << "ㅋㅋㅋ\n";
	}
}

*/

/*
실습 2 해답

#include<iostream>

int main() {
	int i;

	for ( i = 1985 ; i < 2024 ; i++ ){
		std::cout << i << " ";
	}
}

*/

/*
실습 3 해답

#include <iostream>

int main() {
	int n, i;

	std::cout << "입력: ";
	std::cin >> n;

	for ( i = 0; i < n; i++ ){
		std::cout << "안녕 ";
	}
	return 0;
}

*/

/*
실습 4 해답

#include <iostream>

int main() {
	int n, i;

	std::cout << "입력: ";
	std::cin >> n;

	for ( i = 1; i <= n; i++ ){
		std::cout << i;
	}

	return 0;
}

*/