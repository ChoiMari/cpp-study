/**************************************
		작성일 : 2025-04-28
			namespace
***************************************/

/*
	namespace란?
	이름들을 구분 짓는 공간.
	서로 다른 라이브러리나 코드끼리 이름이 충돌하지 않도록 이름의 구역을 나누는 것.

	왜 필요한가?
	C++ 프로그램이 커지다 보면 변수, 함수, 클래스 이름이 겹치는 문제가 생기는데
	namespace를 사용하면 이름 충돌을 방지 할 수 있다

	예) 학생 클래스의 이름,나이,주소,전화번호 변수
		교수 클래스의 이름,나이,주소,전화번호 변수
		이렇게 공통적으로 (변수나 함수 이름들이)겹치는 이름들이 생기는데
		이름 충돌을 방지하기 위해서 student_name, professor_name하면 이름이 길어지고 복잡해지는 단점.
		그럴때 namespace를 이용하면 된다!
*/

// namespace 선언하기(소문자로 작성한다)
/*
	namespace 작명{
		함수 또는 변수 선언;
		//(클래스, enum, struct 등 거의 모든 선언이 가능)
	}


*/

#include <iostream>

namespace student {
	//namespace안에서의 변수 선언
	std::string name; // 네임스페이스이름::변수명으로 사용하면 됨
	int age; //student::age
	std::string address;
	std::string phone;
	std::string major;

	//namespace안에서의 함수 선언(C++ 함수명 카멜표기가 권장사항)
	void printName() { //student::printName();으로 호출
		std::cout << "이름 : " << name << std::endl;
	}
}

namespace professor {
	std::string name;
	int age;
	std::string address;
	std::string phone;
	std::string subject;

	void printName() {
		std::cout << "이름 : " << name << std::endl;
	}
}

//namespace를 사용할 때는 ::을 항상 써주어야 할까?
//using namespace 사용하면 쓰지 않아도 된다
using namespace std; // 전역적으로(코드 전체에서) std라는 네임스페이스를 사용하겠다는 뜻
// 근데 남용하면 좋지 않음.. 코드가 커지면 네임스페이스 충돌 발생할 위험(이름이 서로 중복)
// std::cout이라고 썼던걸 using namespace으로 전역적으로 선언하면 
// (std:: 생략 가능)그냥 cout이라고 써도 된다.

int main(void) {

	//namespace의 사용
	//namespace이름::이름
	/*  여기서 ::은 스코프 연산자라고 부르고, 어떤 네임스페이스나 클래스 안에 정의된 요소에 접근할 때 사용함
		어디 안에 있는 누구라고 명확하게 지정해주는 역할  */
	student::name = "홍길동"; //namespace student안에 있는 name변수에 홍길동을 저장함
	professor::name = "성춘향";//namespace professor안에 있는 name변수에 성춘향을 저장함
	// 이렇게 name으로 변수명은 동일하지만, namespace안에 각각 선언하여 충돌없이 사용이 가능함.

	// std::도 namespace로 선언된 것.
	// namespace로 선언한 std안에 cout 출력 스트림 객체 사용한 것
	// std는 C++ 표준 라이브러리용 네임스페이스
	std::cout << student::name << std::endl; // 홍길동
	std::cout << professor::name << std::endl;// 성춘향

	//namespace안에서 선언한 함수 호출하기
	//namespace명::함수명();
	student::printName(); // 이름 : 홍길동
	professor::printName();// 이름 : 성춘향

	//using namespace std;로 선언함
	cout << "안녕하세요!" << endl;
	//std::cout << "안녕하세요!" << std::endl; 과 같은 코드
}

/*
	<C++ 코딩 표준> : 
	클래스와 구조체의 이름은 파스칼 표기법(대문자로 시작)
	지역변수, 함수의 매개 변수(파라미터) 이름은 카멜 표기법(소문자로 시작)
	함수명 카멜케이스
	정적(static) 변수 이름 앞에는 s를 붙인다
	메서드 이름은 동사목적어 쌍으로 표기하기
		public 메서드의 이름은 파스칼 표기
		그 외(private 등) 다른 메서드의 이름은 카멜 표기
		단, 메서드의 리턴타입이 bool상태를 반환하는 경우 이름의 동사부분은 최대한 의문문(is,can,has등)으로 작성
	상수 또는 #define으로 정의된 상수의 이름은 모두 대문자로 하고 _(언더바)로 단어 구분
	namespace는 모두 소문자로 작성
	boolean 타입 변수는 앞에 b를 붙인다.
	인터페이스 선언 할 땐 앞에 I를 붙인다
	열거형(enum)을 선언할 땐 앞에 e를 붙인다
	클래스 **멤버 변수**명은 앞에 m을 붙인다
	값을 반환하는 함수의 이름은 무엇을 반환하는지 알 수 있게 짓는다.
		예) 나이를 반환하는 함수이면 GetAge로 작명
	뒤에 추가적인 단어가 오지 않는 경우 줄임말은 모두 대문자로 표기
	클래스 멤버 변수에 접근할 때는 항상 setter와 getter를 사용한다.
	외부 헤더 파일을 인클루드 할 때는 #include<> 을 사용. 
	자체적으로 만든 헤더 파일을 인클루드 할 때는 #include "" 를 사용
	[출처] https://github.com/popekim/dev-docs-ko/blob/main/coding-standards/cpp.md(저작권 MIT)
*/
