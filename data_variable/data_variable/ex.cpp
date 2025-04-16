/* 2025-04-17
   데이터와 변수*/
#include <iostream>
#include <string>

int main() {

	int a = 1;
	float b = 3.14;

	// 연산자
	std::cout << a + b;
	std::cout << "\n";
	std::cout << a - b;
	std::cout << "\n";
	std::cout << a * b;
	std::cout << "\n";
	std::cout << a / b;


	std::cout << "\n\n";

	// C++에서 사용자에게 값을 입력 받는 방법
	// std::cin >> 변수이름;

	std::string name; //std::string 문자열 자료형(C 언어에서는 char[], 자바에서는 String)
	// std::는 '표준 라이브러리(namespace,이름들을 구분짓는 공간)'를 의미
	// std::: 표준 라이브러리(namespace) 안에 있기 때문에 #include <string> 포함시켜야 사용 가능
	// 표준 라이브러리(std) 안에 있는 string 자료형을 사용해서, name이라는 변수 선언
	// C++에는 엄청 많은 함수랑 타입들이 있는데, 
	// 이름이 겹칠 수도 있으니까 표준 라이브러리의 것임을 명확히 하기 위해 std::를 붙인다

	std::cout << "\n이름을 입력하세요.\n";
	/* std::cout("에스티디씨아웃"이라고 읽음)
	   std:: 표준 네임스페이스 안에 들어있는 콘솔에 텍스트를 출력할 때 사용하는 객체
	   cout은  character output (문자 출력)을 의미함
	   <<는 삽입 연산자라고 부르고 std::cout에 오른쪽 값을 집어넣는 느낌
	   std::cout은 객체로써,  출력 스트림 객체를 사용해서 출력하는 방식
	   삽입 연산자 <<를 이용해 출력할 데이터를 연결해준다
	   함수가 아니라 객체라서, 함수 호출이 아닌 객체에 값을 넣는 방식

	   C언어에서는 printf() 같은 함수로 출력
	   C++에서는 std::cout이라는 객체에 삽입 연산자 <<로 데이터를 넣어서 출력
	 */

	std::cin >> name;
	//  C++에서 사용자 입력을 받는 문장으로, 사용자가 입력한 값을 name 변수에 저장
	/*  
	*   <C++에서 사용자에게 입력 값 받기>
		std::cin >> 변수이름; 으로 작성함
		사용자가 입력한 값을 변수이름에 저장

		std는 standard의 준말, C++ 표준 라이브러리라는 뜻
		::는 스코프 연산자로, std라는 이름 공간 안에 있는 cin을 쓸거야 라는 뜻
		cin는 character input, 입력 받을게요 라는 객체
		>> 스트림 추출 연산자. 방향이 오른쪽인 이유는 
		cin이 입력한 데이터를 변수로 밀어 넣는다는 느낌이기 때문.

		사용시 주의점
		공백 포함된 문자열은 받지 못한다
		"홍 길동" 이렇게 공백을 넣어 입력하면
		"홍"만 저장됨

		사용자에게 공백이 포함된 문자열을 받으려면?
		std::getline(std::cin, name); 이렇게 작성해야 전체 줄을 통째로 받음
	*/

	std::cout << "\n이름이 " + name + "이군요.\n\n";

	// 입력 받은 숫자를 문자열로 변경하기
	// std::to_string() 함수를 사용

	int age;

	std::cout << "나이를 입력하세요.\n";

	std::cin >> age; // 사용자에게 입력받은 숫자를 변수 age에 저장함
	//에스티디 씨아이엔

	std::cout << "\n나이가 " + std::to_string(age) + "이군요.\n\n";
	/* std::to_string() 함수 :
		숫자(정수, 실수 등) 값을 문자열로 변환하는 기능
		<string> 헤더에 정의되어 있음
		아규먼트로 넣은 숫자형 데이터를 문자열 타입으로 변환하여 반환함
	*/

	return 0;

}