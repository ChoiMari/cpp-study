/*****************************
	작성일 : 2025-04-23
	파일 실습 문제1
******************************/

/* 
	조건
	1. 사용자에게 "이름 (엔터) 비밀번호 (엔터) 로 
       3명의 회원 정보를 순차적으로 입력하세요." 라는 메세지를 출력하세요.

    2. 사용자로부터 입력된 정보를 member.txt 에 기록하세요. 
       ( member.txt 는 member1.cpp 와 같은 위치에 생성되면 됩니다. )
*/

#include <fstream>
#include <iostream>
#include <string>
int main() {
	// 사용자로부터 입력 된 정보(member)를 member.txt에 기록하기
	std::ofstream member_file; // 파일 출력 객체 선언

	member_file.open("member.txt"); //member.txt텍스트 여는 메서드 호출, 일단 파일을 열어야 쓰니깐
	// 소스코드와 같은 위치의 디렉토리에 member.txt가 없으면 새로 생성하고
	// 이미 있으면 덮어씀

	std::cout << "이름 (엔터) 비밀번호 (엔터)로 3명의 회원 정보를 순차적으로 입력하세요.\n\n";

	// 회원 3명에 대해서 정보를 2개 받아야함, 3행 X 2열 배열 
	std::string member[3][2]; // 사용자에게 받은 정보를 저장하는 2차원 배열 선언

	for (int i = 0;i < 3;i++) { //i가 0~2까지 총 3번 실행
		for (int j = 0;j < 2;j++) { //j가 0~1까지 총 2번 실행
			if (j == 0) { // 2차원 배열 member의 열 인덱스가 0일 때 실행
				std::cout << "이름 : "; // 안내문을 다르게 출력하려고 if - else if문 사용
				std::cin >> member[i][j]; // 사용자에게 입력 받아 2차원 문자열 배열 member에 저장
				member_file << member[i][j] << "\n"; // 저장된 문자열을 member_file에 씀
				// 파일에 데이터를 쓸 때, 
				// 엔터(줄바꿈)를 포함하려면 std::ofstream 객체에 데이터를 쓸 때 줄바꿈 문자를 명시적으로 추가해야 함
			}
			else if (j == 1) { // 2차원 배열 member의 열 인덱스가 1일 때 실행
				std::cout << "비밀번호 : "; 
				std::cin >> member[i][j]; // 비밀번호를 입력 받아 배열에 저장
				member_file << member[i][j] << "\n"; // 저장된 문자열을 member_file에 씀
			}
		}
		std::cout << std::endl; //std::endl 버퍼 비우기 + 줄바꿈을 수행함
	}

	// 파일을 열었음 닫아 주어야 함
	member_file.close();

	return 0;
}


/*
해답

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ofstream my_file;
	my_file.open("member.txt");
	std::string arr[3][2];
	std::cout << "이름 (엔터) 비밀번호 (엔터) 로 3명의 회원 정보를 순차적으로 입력하세요.\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> arr[i][j];
			my_file << arr[i][j] << " ";
		}
		my_file << std::endl;
	}

	my_file.close();
	return 0;
}




*/