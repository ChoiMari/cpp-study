/***************************
작성일 : 2025-04-17
if문 실습
****************************/

/*
* 실습1
조건1 : 나이를 입력하세요. 라는 문구를 출력하고 사용자로부터 숫자를 입력받으세요.
조건2 : 입력된 숫자가 1이상 7이하면 "유아", 8이상 13이하면 "초등학생",
              14이상 16이하면 "중학생", 17이상 19이하면 "고등학생", 20이상이면 "성인"을 출력하세요.

# hint C++은 1 < age < 7 과 같이 한 번에 부등호 두 개를 쓸 수 없어요.
# (1 < age && age < 7) 과 같은 형식으로 나누어서 써주어야 해요. 
*/
#include <iostream> // std::cout 사용시 포함시켜야 함
#include <string> // std::string 문자열 자료형 사용시 포함시켜야 함 
int main() {
     
 //조건1: 나이를 입력하세요.라는 문구를 출력하고 사용자로부터 숫자를 입력받으세요.
    int age;

    std::cout << "나이를 입력하세요. \n\n"; // 출력 스트림 객체를 사용해 콘솔에 출력
    std::cout << "나이 입력 : ";
    std::cin >> age; // 사용자에게 나이(정수)를 입력 받아 정수타입 변수 age에 저장

/* 조건2: 입력된 숫자가 1이상 7이하면 "유아", 8이상 13이하면 "초등학생",
    14이상 16이하면 "중학생", 17이상 19이하면 "고등학생", 20이상이면 "성인"을 출력하세요. */
    if (age >= 1 && age <= 7) {
        std::cout << "\n유아\n\n";
    } else if (age >= 8 && age <= 13) {
        std::cout << "\n초등학생\n\n";
    } else if (age >= 14 && age <= 16) {
        std::cout << "\n중학생\n\n";
    } else if (age >= 17 && age <= 19) {
        std::cout << "\n고등학생\n\n";
    } else if (age >= 20 && age <= 120) { // else로 하면 안됨.. 사용자가 음수로 주거나 이상한값줘도 다 성인이라고 나옴
        std::cout << "\n성인\n\n";
    } else  {
        std::cout << "\nerror : 1~120까지의 정수로 나이를 입력하세요.\n\n";
    }

    /* 실습2
     조건1 : "이름을 입력하세요." 라는 문구를 출력하고 사용자로부터 이름을 입력받으세요.
     조건2 : "홍길동"이 입력되면 "남자", "성춘향"이 입력되면 "여자", 
     그 외의 내용이 입력되면 "모르겠어요." 를 출력하세요.
    */

    //조건1 : "이름을 입력하세요." 라는 문구를 출력하고 사용자로부터 이름을 입력받으세요.
    std::string name; // 문자열 변수 name 선언

    std::cout << "이름을 입력하세요. \n\n";
    std::cout << "이름 입력 : ";
    std::cin >> name; // 사용자에게 값을 입력 받아 변수 name에 저장

    // 조건2: "홍길동"이 입력되면 "남자", "성춘향"이 입력되면 "여자",
    // 그 외의 내용이 입력되면 "모르겠어요." 를 출력하세요. 
    if (name == "홍길동") { // 자바에서는 문자열은 ==은 주소 비교라서 ==으로 못하고 .equals()함수로 비교하는데(C언어도 주소비교라 함수써야함)
        // C++은 ==으로 문자열 값비교가 가능
        std::cout << "\n남자\n\n";
    } else if (name == "성춘향") {
        std::cout << "\n여자\n\n";
    } else {
        std::cout << "\n모르겠어요.\n\n";
    }



    return 0;
}

/*
실습 1 해답
#include <iostream>

int main() {
    int age;

    std::cout << "나이를 입력하시오.";
    std::cin >> age;

    if (age >= 1 && age <= 7) {
        std::cout << "유아";
    }
    else if (age >= 8 && age <= 13) {
        std::cout << "초등학생";
    }
    else if (age >= 14 && age <= 16) {
        std::cout << "중학생";
    }
    else if (age >= 17 && age <= 19) {
        std::cout << "고등학생";
    }
    else if (age >= 20) {
        std::cout << "성인";
    }

    return 0;
}
*/

/*
실습 2 해답

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "이름을 입력하시오.";
    std::cin >> name;

    if (name == "홍길동") {
        std::cout << "남자";
    }
    else if (name == "성춘향") {
        std::cout << "여자";
    }
    else {
        std::cout << "모르겠어요";
    }

    return 0;
}

*/