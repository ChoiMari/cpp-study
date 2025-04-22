/*********************************
	작성일 : 2025-04-21
	C++로 파일 쓰기
**********************************/
#include <iostream>
#include <fstream> //파일 입출력을 다루기 위한 표준 헤더 파일
//이 헤더를 포함하면 파일을 읽고 쓰는 데 사용할 수 있는 파일 스트림 클래스들을 사용할 수 있음

int main() {
	/*
		std::ofstream: 파일에 데이터를 쓰기 위한 스트림 클래스(Output File Stream)
		파일에 데이터를 쓰기 위해 사용하는 클래스
		파일을 쓰기 모드로 열고, 데이터를 파일에 기록하는 스트림 객체
	*/
	std::ofstream my_file2; // 출력 파일 스트림 객체 선언

	my_file2.open("my_file2.txt"); //my_file2.txt파일 없으면 새로 만들고, 있으면 기존 내용 싹 지움.
	

	my_file2 << "hello"; // my_file2.txt 파일에 hello라는 문자열을 씀

	my_file2.close(); // 열었던 파일을 닫음. 닫지 않으면 저장되지 않거나 손상 가능성

	//-> 실행 했더니 소스코드와 같은 경로에 my_file2.txt 파일이 만들어짐 hello라고 쓰여있음

	return 0;
}