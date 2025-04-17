/*************************
작성일 : 2025-04-17
	배열 변수
**************************/

#include <iostream>
#include <string>

int main() {
	// 배열 변수의 필요성
	std::string friend1;
	std::string friend2;
	std::string friend3;

	friend1 = "홍길동";
	friend2 = "성춘향";
	friend3 = "변사또";
	//-> 일일이 변수에 저장하려면 번거롭다

	// 배열 변수에 저장하면 편리
	//3개의 값을 저장할 수 있는 배열 생성
	std::string fruit1[3];

	//배열변수의 각 값에 접근하기 위해서는 []라는 연산자 이용

	//배열 요소 추가
	fruit1[0] = "apple";
	fruit1[1] = "banana";
	fruit1[2] = "orange";

	std::cout << fruit1[0] << std::endl;
	std::cout << fruit1[1] << std::endl;
	std::cout << fruit1[2] << std::endl;

	//배열을 선언하는 동시에 값 지정
	std::string fruit2[] = { "apple", "banana", "orange" };

	std::cout << fruit2[0] << std::endl;
	std::cout << fruit2[1] << std::endl;
	std::cout << fruit2[2] << std::endl;

	// 다차원 배열
	std::string fruit[2][2] = { // 2x2인 배열(인덱스 00부터 11까지 있음)
		{ "apple", "banana" },
		{ "orange", "strawberry" }
	};

	std::cout << fruit[0][0] << "\n"; //apple 이 출력됩니다.
	std::cout << fruit[0][1] << "\n"; //banana 가 출력됩니다.
	std::cout << fruit[1][0] << "\n"; //orange 가 출력됩니다.
	std::cout << fruit[1][1] << "\n"; //strawberry 가 출력됩니다.

	//std::cout << fruit[0][2]; //인덱스의 범위를 넘어갔기 때문에 에러가 남.

	std::cout << "\n";

	//sizeof() : 변수 또는 데이터 타입의 크기를 바이트 반위로 반환해 주는 연산자
	std::string friend_array[] = { "홍길동", "성춘향", "변사또" };

	int i;

	for (i = 0; i < sizeof(friend_array) / sizeof(friend_array[0]); i++) {
		std::cout << friend_array[i] << std::endl;
	}
	// sizeof(friend_array) / sizeof(friend_array[0])
	//-> C++에서 **배열의 전체 길이(원소 개수)**를 구하는 아주 대표적인 방식

	return 0;
}