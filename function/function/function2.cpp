/*******************************
	�ۼ��� : 2025-04-19
	�Լ� �ǽ� ����2
********************************/

/*
����1 : ȸ�� 3���� "�̸�", "����" ������ �����ϴ� �迭���� member�� �����ϼ���.
����1-1 : ���� ���� std:string ���� �Է¹޾Ƶ� �����մϴ�.
����1-2 : �迭���� member�� ��� �Լ��� ������ �� �־�� �ϹǷ� �Լ� �ۿ� "����������" ����Ǿ�� �մϴ�.

����2 : std:cin ���� 3ȸ�� ���� "�̸�", "����"�� �Է¹޾� �迭���� member�� �����ϴ� register_member�Լ��� �����ϼ���.

����3 : for���� std:cout ���� �迭���� member�� ����� ȸ������ "�̸�", "����"�� ��� ����ϴ� show_member�Լ��� �����ϼ���.

����4 : main�Լ����� �켱 register_member�Լ��� ȣ���Ͽ� ����ڷκ��� ȸ�������� �Է¹�������.
����4-1 : register_member�Լ��� ������ �Ϸ�Ǹ� show_member�Լ��� ȣ���Ͽ� ȸ�������� ����ϼ���.
*/
#include <iostream>
#include <string>

//����1: ȸ�� 3���� "�̸�", "����" ������ �����ϴ� �迭���� member�� �����ϼ���.
//����1 - 1 : ���� ���� std : string ���� �Է¹޾Ƶ� �����մϴ�.
//����1 - 2 : �迭���� member�� ��� �Լ��� ������ �� �־�� �ϹǷ� �Լ� �ۿ� "����������" ����Ǿ�� �մϴ�.
std::string member[3][2];

// ���ϰ� ������ 2���� �迭���� member�� �� ����, ������ ����� ������
const int MEMBER_ROWS_LANTH = sizeof(member) / sizeof(member[0]);
const int MEMBER_COLS_LANTH = sizeof(member[0]) / sizeof(member[0][0]);

void register_member();
void show_member();

int main() {
	//����4: main�Լ����� �켱 register_member�Լ��� ȣ���Ͽ� ����ڷκ��� ȸ�������� �Է¹�������.
	register_member();

	//����4-1 : register_member�Լ��� ������ �Ϸ�Ǹ� show_member�Լ��� ȣ���Ͽ� ȸ�������� ����ϼ���.
	show_member();

	return 0;
}

// ����2 : std:cin ���� 3ȸ�� ���� "�̸�", "����"�� �Է¹޾� 
// �迭���� member�� �����ϴ� register_member�Լ��� �����ϼ���.
void register_member() {
	std::string name, age;
	for (int i = 0;i < MEMBER_ROWS_LANTH;i++) { //2���� �迭 member�� ���� ũ�⸸ŭ ����
		std::cout << "ȸ��" << i + 1 << "\n";
		std::cout << "�̸� : ";
		std::cin >> name;
		std::cout << "���� : ";
		std::cin >> age;
		// �׳� for�ݺ��� �Ѱ��� 
		// [i][0]�϶�,[i][1]�϶� �־ �ʱ�ȭ �ص���, �ٵ� �ε����� ���ڸ� ���� �ִ°� �Ⱦ
		// ��ø���� ����
		for (int j = 0; j < MEMBER_COLS_LANTH; j++) {//2���� �迭 member�� ���� ũ�⸸ŭ ����
			if (j == 0) { //[i][0]�϶� �̸� ����
				member[i][j] = name;
			} else if(j == 1) { //[i][1]�϶� ���� ����
				member[i][j] = age;
			}
		}
		std::cout << std::endl;
	}
}
/*
//����3 : for���� std:cout ���� �迭���� member�� 
// ����� ȸ������ "�̸�", "����"�� ��� ����ϴ� show_member�Լ��� �����ϼ���.
void show_member() {
	for (int i = 0;i < MEMBER_ROWS_LANTH;i++) { //2���� �迭���� �� ����(ũ��)��ŭ �����
		std::cout << "<ȸ��" << i + 1 << "> �̸� : " << member[i][0]<< ", ���� : " << member[i][1] << "\n";
	}
}
*/

void show_member() {
	for (int i = 0; i < MEMBER_ROWS_LANTH; i++) { //2���� �迭���� �� ����(ũ��)��ŭ �����
		for (int j = 0; j < MEMBER_COLS_LANTH; j++) {
			if (j == 0) {
				std::cout << "<ȸ��" << i + 1 << "> \n";
				std::cout << "�̸� : " << member[i][j];
			} else if (j == 1) {
				std::cout << ", ���� : " << member[i][j];
			}
		}
		std::cout << "\n\n";
	}
}

/* �ش�

#include <iostream>
#include <string>

std::string member[3][2];

void register_member() {
	std::cout << "�̸�, ���� ������ 3���� �Է����ּ���.";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> member[i][j];
		}
	}

}

void show_member() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << member[i][j] + " ";
		}

		std::cout << "\n";
	}
}

int main() {
	register_member();
	show_member();

	return 0;
}

*/