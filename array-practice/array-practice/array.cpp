/***********************************
	작성일 : 2025-04-17
	배열 변수 문제 풀이
************************************/
#include <iostream>
#include <string>
int main() {
	
	// 문제 1) city라는 배열변수를 선언하고, 3개의 나라 이름을 값으로 지정해 주세요.	
	// 배열 선언 후 값 할당
	std::string city[3];

	city[0] = "Korea";
	city[1] = "Canada";
	city[2] = "USA";

	// 문제 2) city라는 배열변수를 "선언함과 동시"에 3개의 나라 이름을 값으로 지정해 주세요.
	// 배열 선언과 동시에 초기화
	std::string city2[] = { "Korea", "Canada", "USA" };

	// 문제 3) 실습1 OR 실습2 에서 선언한 배열변수 city에 저장된 값들을 for문을 이용해서 출력해 주세요.
	for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++) { // i가 city 배열의 길이(원소의 개수)만큼 반복 실행
		// 배열 전체의 크기(바이트) / 배열 원소 하나의 크기(바이트) = 배열의 길이(배열의 원소의 개수)
		std::cout << city[i] << std::endl;
		//std::endl 줄바꿈(\n) 대신 사용, 줄 바꾸면서 버퍼 비우기도 같이 함
	}
	
	return 0;
}

/* 문제 1 해답
* 
#include <iostream>
#include <string>

int main() {
	std::string city[3];

	city[0] = "korea";
	city[1] = "china";
	city[2] = "usa";

	std::cout << city[0] << std::endl;
	std::cout << city[1] << std::endl;
	std::cout << city[2] << std::endl;
}

*/

/* 문제 2 해답
#include <iostream>
#include <string>

int main() {
	std::string city[3] = { "korea", "china", "usa" };

	std::cout << city[0] << std::endl;
	std::cout << city[1] << std::endl;
	std::cout << city[2] << std::endl;
}

*/

/* 문제 3 해답
#include <iostream>
#include <string>

int main() {
	std::string city[3] = { "korea","china","usa" };

	int i;

	for (i = 0; i < sizeof(city) / sizeof(city[0]); i++) {
		std::cout << city[i] << std::endl;
	}
}

*/