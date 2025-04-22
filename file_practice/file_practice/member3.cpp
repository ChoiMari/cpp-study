/*****************************
	작성일 : 2025-04-23
	파일 실습 문제3
******************************/

/*
1. 사용자에게 "이름을 입력하세요."라는 메세지를 출력한 뒤 이름을 입력받으세요.
2. 사용자에게 "비번을 입력하세요."라는 메세지를 출력한 뒤 비번을 입력받으세요.
3. member.txt 에서 한 줄씩 "이름"과 "비번"을 검사하여 
	로그인 성공시 "로그인 성공" 실패시 "로그인 실패" 를 출력하세요.

*/
#include <iostream> //입출력스트림객체 cout,cin사용시 포함시켜야함
#include <string> // string 클래스 사용하려면 포함시켜야함
#include <fstream> // 파일입출력스트림 클래스 사용시 포함시켜야함
int main() {
	std::string login_name, login_pwd; // 로그인 시도한 이름과 비번

	std::string member_name, member_pwd; // member.txt 파일에서 읽어온 이름과 비번을 저장할 변수 선언 

	std::cout << "이름을 입력하세요 : "; // 입력 안내문 출력
	std::cin >> login_name; // 입력 받아 name에 저장
	std::cout << "비번을 입력하세요 : ";
	std::cin >> login_pwd;

	//member.txt에서 한 줄씩 읽어서 검사하기
	std::fstream member; //입력 출력 둘 다 되는 입출력 객체 선언
	//std::ifstream 입력 파일 스트림 클래스 써도 되지만 그냥 한번 써봄

	member.open("member.txt"); //파일열기

	if (!member) { // 예외처리
		std::cerr << "error : 파일이 없습니다 \n"; //cerr : character error의 약자, 표준 **오류** 출력 스트림
	}

	// 로그인

	bool success = false; // 로그인 성공 여부 저장할 변수

	while(member >> member_name >> member_pwd) { 
		//member에서 (공백문자를 만나기 전까지)읽어와서 파일에서 첫 번째 단어를 member_name에 저장하고
		// 두번째 단어를 member_pwd에 저장 
		if (login_name == member_name && login_pwd == member_pwd) { // 둘 다 맞아야 실행
			success = true; // 검사해서 맞는게 없음 false그대로기 때문에 성공 조건만 작성함 
			break;
		} 
	}


	if (success) {
		std::cout << "로그인 성공 ^____^\n";
	} else {
		std::cout << "로그인 실패 ㅠ_ㅠ\n";
	}

	//파일 닫음
	member.close();

	return 0;
}