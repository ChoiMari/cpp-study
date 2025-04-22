/*****************************
	작성일 : 2025-04-23
	파일 실습 문제2
******************************/

/*
		< 출력예시 >
첫번째 회원 : 성함 OOO, 비번 OOO
두번째 회원 : 성함 OOO, 비번 OOO
세번째 회원 : 성함 OOO, 비번 OOO

문제)
실습 1에서 만든 member.txt에 저장된 회원 명부를 출력하는 member2.cpp 프로그램을 만드세요.

*/

#include <iostream>
#include <fstream> // 파일 입출력 헤더 파일 포함시킴
#include <string>

int main() {

	std::ifstream member_file; // 파일을 읽어올 입력 파일 스트림 객체 선언
	std::string str; //파일에서 읽어온 데이터를 저장할 문자열 변수 선언

	//일단 파일을 열어야 읽어올 수 있으니까
	member_file.open("member.txt");
	//현재 작업 공간과 같은 경로에 있는 member.txt을 읽기 위해서 연다(파일 없으면 오류 발생)

	if (!member_file) { // 파일이 없을 때 예외 처리
		std::cerr << "파일을 열 수 없습니다.\n";
		//std::cerr는 **표준 오류 스트림(Standard Error Stream)**을 나타내는 객체
		//주로 프로그램에서 경고/에러 메시지를 출력할 때 사용된다
		return 1; // 오류 코드 반환
	}

	// 읽어 오기 
	// std::getline() 함수 이용
	// 줄바꿈을 기준으로 잘라서 한 줄을 읽어옴
	int minus = 0; 

	for (int i = 1; std::getline(member_file, str); i++) {
		// 조건식 std::getline(member_file, str
		// member_file을 한 줄씩 읽어서 문자열 변수 str에 저장
		// member.txt파일을 다 읽으면 반복문 종료
	
		//제시된 출력 예시에 맞게 콘솔에 출력하기
		if (i % 2 == 1) { //i가 홀수 일 때 실행(홀수번째 출력일 때 실행)
			std::cout << i - minus << "번째 회원 : 성함 " << str << ", ";
			minus++;
		} else { // i가 짝수 일 때 실행(짝수번째 출력일 때 실행)
			std::cout << "비번 " << str << "\n"; 
			//줄바꿈을 기준으로 잘라서 읽기 때문에 줄바꿈은 가져오지 못하므로 따로 추가함
		}	
	}

	// 열었던 파일을 닫음
	member_file.close();

	return 0;
}

/*
해답

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream my_file2;
	std::string str1, str2;
	my_file2.open("member.txt");
	int i = 0;

	while (my_file2 >> str1 >> str2) {
		std::cout << i + 1 << "번째 회원 : 성함 " << str1 << ", 비번 " << str2 << std::endl;
		i++;
	}

	my_file2.close();

	return 0;
}

*/