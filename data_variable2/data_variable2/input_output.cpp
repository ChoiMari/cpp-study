/*************************************************
작성일 : 2025-04-17
데이터와 변수 실습
************************************************/

// 사용자에게 이름 나이를 입력 받아 
// 안녕하세요! ooo님(oo세)를 출력하는 input_output.cpp를 만들기

/*
조건1 : 이름을 입력하세요. 라는 문구를 출력하고 사용자로부터 이름을 입력받으세요.
조건2 : 나이를 입력하세요. 라는 문구를 출력하고 사용자로부터 나이를 입력받으세요.
조건3 : 이름과 나이의 입력이 끝나면 "안녕하세요! OOO님(OO세)" 라는 문구를 출력하세요.
hint! : 여러 개의 변수를 한 줄에 출력하는 방법은 cout<<name<<age 입니다.
*/


#include <iostream> // 입출력 기능을 사용하기 위해 포함시킴
// std::cout, std::cin 사용시 필요

#include <string> //std::string 사용시 필요

int main() {

	// 조건1 : 이름을 입력하세요. 라는 문구를 출력하고 사용자로부터 이름을 입력받으세요.

	std::string name; //std::string 표준 라이브러리 안에 있는 문자열 클래스
	// 문자열 자료형 변수 name 선언

	std::cout << "이름을 입력하세요.\n\n";
	std::cout << "이름 입력 : ";
	
	std::cin >> name; //사용자에게 입력 값을 받아 문자열 타입의 변수 name에 저장

	std::cout << "\n\n";

	//조건2 : 나이를 입력하세요. 라는 문구를 출력하고 사용자로부터 나이를 입력받으세요.
	int age;

	std::cout << "나이를 입력하세요.\n\n";
	std::cout << "나이 입력 : ";

	std::cin >> age; // 사용자에게 입력 받아 정수타입 변수 age에 저장

	std::cout << "\n\n";

	//조건3: 이름과 나이의 입력이 끝나면 "안녕하세요! OOO님(OO세)" 라는 문구를 출력하세요.
	std::cout << "안녕하세요!" << name << "님(" << age << "세)\n\n";

	return 0;
}

/*
* 실습 해답 소스
#include <iostream>
#include <string>

int main()
{
 std::string name;
 int age;

 std::cout << "이름을 입력하세요.\n";
 std::cin >> name;

 std::cout << " 나이를 입력하세요.\n";
 std::cin >> age;

 std::cout << "안녕하세요! " + name + "님 (" + std::to_string( age ) + "세)\n";
}
*/