/*************************************
	작성일 : 2025-04-18
	동적 배열 변수와 포인터 실습
**************************************/

/*
조건1. 사용자로부터 x, y 2개의 자연수를 입력받으세요.
조건2. 만약 사용자가 x 와 y 에 0 이나 음수를 입력한다면 에러메세지를 출력하며 다시 입력 받으세요.
조건3. x * y 의 크기를 갖는 이차원 동적 배열 arr 을 선언하세요.
조건4. arr[0][0] 부터 arr[x][y] 까지 순서대로 1 부터 x * y 값까지를 저장하세요.
			 ex) 3, 5를 입력했을 경우, 배열에 1 ~ 15까지 저장
조건5. arr[0][0] 부터 arr[x][y] 까지 저장된 값을 출력하세요.
*/
#include <iostream> // std::cout, std::cin 함수 사용시 포함
int main() {
	int x, y;

	for (;;) { // 무한루프
		std::cout << "첫번째 자연수 입력 : "; //cout 출력스트림객체, 콘솔에 출력해주는 역할을 함
		std::cin >> x; // 사용자에게 입력 받아서 변수x에 저장함
		std::cout << "두번째 자연수 입력 : ";
		std::cin >> y;

		std::cout << "\n------------------------------------------\n";

		if (x > 0 && y > 0) { // x,y 둘 다 양수이면 실행
			break; // 반복문 빠져나감
		} else {
			std::cout << "\n입력값이 잘못되었습니다.\n";
			std::cout << "error : 1이상의 양수인 자연수를 입력하세요.\n\n";
		}
	}
	// 정적 배열
	// int array[5];  // 크기 5로 "컴파일 시점"에 고정됨


	// 동적 배열 변수? 실행 중 크기를 정하는 배열
	// 프로그램 실행 중에 크기를 정해서 만들 수 있는 배열 변수
	// new나 vector를 사용해서 만듦
	// 1차원 동적 배열 변수 선언 예) int* arr = new int[size]; 

	//  조건3.x * y 의 크기를 갖는 이차원 동적 배열 arr 을 선언하세요.(행은 x 열은 y크기의 2차원 동적 배열)
	//  2차원 동적 배열 선언에서 행부분은 포인터 배열로 만들고, 열부분은 1차원 배열로 만들어서 각 행(arr[i])에 붙인다
	int** arr = new int* [x];

	for (int i = 0; i < x; i++) {
		arr[i] = new int[y]; //각 행에 해당하는 포인터 배열 원소에 1차원 배열(열부분) 붙여넣기
		// arr[i]는 인덱스 i의 행전체에 해당하는 포인터를 말함
	}
	//	조건4.arr[0][0] 부터 arr[x][y] 까지 순서대로 1 부터 x * y 값까지를 저장하세요.
	//	ex) 3, 5를 입력했을 경우, 배열에 1 ~15까지 저장
	int num = 1;

	for (int i = 0;i < x;i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = num;
			num++;
		}
	}

	//	조건5.arr[0][0] 부터 arr[x][y] 까지 저장된 값을 출력하세요.
	for (int i = 0;i < x;i++) {
		for (int j = 0;j < y;j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	//중요! 동적으로 만든건 메모리 해제를 꼭 해야 
	// 메모리 누수(사용하지 않는 메모리가 공간을 계속 차지하고 있는 현상)가 안생김
	// 메모리 해제
	for (int i = 0; i < x; i++) {
		delete[] arr[i];  // 각 열 삭제
	}
	delete[] arr;         // 행 삭제

	return 0;
}


/*
해답

#include <iostream>
#include <string>

int main() {
	int x, y;

	while (1) {
		std::cout << "x를 입력하세요\n";
		std::cin >> x;
		std::cout << "y를 입력하세요\n";
		std::cin >> y;

		if (x > 0 && y > 0) {
			break;
		} else {
			std::cout << "x와 y모두 양수를 입력해주세요.\n";
		}
	}

	int** arr = new int* [x];
	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}

	int num = 1;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = num;
			num++;
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}
}

*/