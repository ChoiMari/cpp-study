/*****************************
	�ۼ��� : 2025-04-23
	���� �ǽ� ����1
******************************/

/* 
	����
	1. ����ڿ��� "�̸� (����) ��й�ȣ (����) �� 
       3���� ȸ�� ������ ���������� �Է��ϼ���." ��� �޼����� ����ϼ���.

    2. ����ڷκ��� �Էµ� ������ member.txt �� ����ϼ���. 
       ( member.txt �� member1.cpp �� ���� ��ġ�� �����Ǹ� �˴ϴ�. )
*/

#include <fstream>
#include <iostream>
#include <string>
int main() {
	// ����ڷκ��� �Է� �� ����(member)�� member.txt�� ����ϱ�
	std::ofstream member_file; // ���� ��� ��ü ����

	member_file.open("member.txt"); //member.txt�ؽ�Ʈ ���� �޼��� ȣ��, �ϴ� ������ ����� ���ϱ�
	// �ҽ��ڵ�� ���� ��ġ�� ���丮�� member.txt�� ������ ���� �����ϰ�
	// �̹� ������ ���

	std::cout << "�̸� (����) ��й�ȣ (����)�� 3���� ȸ�� ������ ���������� �Է��ϼ���.\n\n";

	// ȸ�� 3�� ���ؼ� ������ 2�� �޾ƾ���, 3�� X 2�� �迭 
	std::string member[3][2]; // ����ڿ��� ���� ������ �����ϴ� 2���� �迭 ����

	for (int i = 0;i < 3;i++) { //i�� 0~2���� �� 3�� ����
		for (int j = 0;j < 2;j++) { //j�� 0~1���� �� 2�� ����
			if (j == 0) { // 2���� �迭 member�� �� �ε����� 0�� �� ����
				std::cout << "�̸� : "; // �ȳ����� �ٸ��� ����Ϸ��� if - else if�� ���
				std::cin >> member[i][j]; // ����ڿ��� �Է� �޾� 2���� ���ڿ� �迭 member�� ����
				member_file << member[i][j] << "\n"; // ����� ���ڿ��� member_file�� ��
				// ���Ͽ� �����͸� �� ��, 
				// ����(�ٹٲ�)�� �����Ϸ��� std::ofstream ��ü�� �����͸� �� �� �ٹٲ� ���ڸ� ��������� �߰��ؾ� ��
			}
			else if (j == 1) { // 2���� �迭 member�� �� �ε����� 1�� �� ����
				std::cout << "��й�ȣ : "; 
				std::cin >> member[i][j]; // ��й�ȣ�� �Է� �޾� �迭�� ����
				member_file << member[i][j] << "\n"; // ����� ���ڿ��� member_file�� ��
			}
		}
		std::cout << std::endl; //std::endl ���� ���� + �ٹٲ��� ������
	}

	// ������ ������ �ݾ� �־�� ��
	member_file.close();

	return 0;
}


/*
�ش�

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ofstream my_file;
	my_file.open("member.txt");
	std::string arr[3][2];
	std::cout << "�̸� (����) ��й�ȣ (����) �� 3���� ȸ�� ������ ���������� �Է��ϼ���.\n";

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