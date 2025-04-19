/*********************************
	�ۼ��� : 2025-04-19
	�Լ� �ǽ� ���� 1
**********************************/

/*
����1 : �� ���� ������ �μ��� �Է¹޾� �� ���� �����ϴ� plus�Լ��� ���弼��.

����2 : �� ���� ������ �μ��� �Է¹޾� �� ���� �����ϴ� minus�Լ��� ���弼��.
����2-1 : �μ��� ������ ������� ū ������ ���� ���� �� ����� �����ؾ� �մϴ�.

����3 : �� ���� ������ �μ��� �Է¹޾� �� ���� �����ϴ� multiple�Լ��� ���弼��.

����4 : �� ���� ������ �μ��� �Է¹޾� �� �������� �����ϴ� divide�Լ��� ���弼��.
����4-1 : divide�Լ��� �Ǽ��� �����ؾ� �մϴ�.

����5 : main�Լ����� ���� 4���� �Լ��� �ѹ��� ȣ���Ͽ� ���ϵ� ���� std:cout ���� ����ϼ���.
*/

#include <iostream>

// �Լ� ���� ����, �ڵ� ������ main() ���� �Լ� �ؿ� �ۼ���
int plus(int x, int y);
int minus(int x, int y);
int multiple(int x, int y);
double divide(int x, int y);

int main() {
	// ����ڿ��� �� ���� ������ �Է� ����
	int x, y; // �Է� �� ������ ���� ����
	std::cout << "ù��° ���� �Է� : "; // ��� ��Ʈ�� ��ü cout�� �̿��� ���ڿ��� �����(�ȳ���)
	std::cin >> x; // ����ڿ��� �Է� ���� �޾� ���� x�� ����
	std::cout << "�ι�° ���� �Է� : ";
	std::cin >> y;

	std::cout << std::endl;

	// ����5: main�Լ����� ���� 4���� �Լ��� �ѹ��� ȣ���Ͽ� ���ϵ� ���� std : cout ���� ����ϼ���.
	std::cout << "�� ���� �� : " << plus(x, y) << std::endl; 
	//ǥ�ض��̺귯�� �ȿ� �ִ�(std::) endl �ٹٲ�, ���ۺ���ִ� ��ü
	std::cout << "�� ���� �� : " << minus(x, y) << std::endl;
	std::cout << "�� ���� �� : " << multiple(x, y) << std::endl;
	if (y == 0) {
		std::cout << "0���δ� ���� �� �����ϴ�." << std::endl;
	} else {
		std::cout << "�� ���� ������ : " << divide(x, y) << std::endl;
	}
	
	return 0;
}

// ����1: �� ���� ������ �μ��� �Է¹޾� �� ���� �����ϴ� plus�Լ��� ���弼��.
int plus(int x, int y) {
	return x + y;
}

// ����2 : �� ���� ������ �μ��� �Է¹޾� �� ���� �����ϴ� minus�Լ��� ���弼��.
// ����2-1 : �μ��� ������ ������� ū ������ ���� ���� �� ����� �����ؾ� �մϴ�.
int minus(int x, int y) {
	if (x < y) {
		return y - x;
	}
	return x - y;
}

// ����3 : �� ���� ������ �μ��� �Է¹޾� �� ���� �����ϴ� multiple�Լ��� ���弼��.
int multiple(int x, int y) {
	return x * y;
}

// ����4 : �� ���� ������ �μ��� �Է¹޾� �� �������� �����ϴ� divide�Լ��� ���弼��.
// ����4 - 1 : divide�Լ��� �Ǽ��� �����ؾ� �մϴ�.
double divide(int x, int y) {
	// ������ ���� : C++������ 0���� ������(���� ����), ��Ÿ�� ����(���� �� ����)
	// �Ķ���Ϳ� ����� y�� 0���� �� ������ ȣ���� ������ ���� �۾� �ʿ�(���� ó��) 
	return ((double) x) / y; // ������ ��� �� �� casting ����� ��� ����� �ǰ� ����
}

/*�ش�

#include <iostream>
#include <string>

int plus(int n1, int n2) {
	return n1 + n2;
}

int minus(int n1, int n2) {
	if (n2 >= n1) {
		return n2 - n1;
	} else {
		return n1 - n2;
	}
}

int multiple(int n1, int n2) {
	return n1 * n2;
}

float divide(int n1, int n2) {
	return n1 / n2 * 1.0f;
}

int main() {
	int n1, n2;
	std::string operation;

	std::cout << "���� 2�� �Է�";
	std::cin >> n1 >> n2;

	std::cout << "������ �Է� ( +, -, *, / )";
	std::cin >> operation;

	if (operation == "+") {
		std::cout << plus(n1, n2);
	} else if (operation == "-") {
		std::cout << minus(n1, n2);
	} else if (operation == "*") {
		std::cout << multiple(n1, n2);
	} else if (operation == "/") {
		std::cout << divide(n1, n2);
	} else {
		std::cout << "������ �����Դϴ�.";
	}

	return 0;
}
*/