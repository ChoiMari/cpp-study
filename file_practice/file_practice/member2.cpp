/*****************************
	�ۼ��� : 2025-04-23
	���� �ǽ� ����2
******************************/

/*
		< ��¿��� >
ù��° ȸ�� : ���� OOO, ��� OOO
�ι�° ȸ�� : ���� OOO, ��� OOO
����° ȸ�� : ���� OOO, ��� OOO

����)
�ǽ� 1���� ���� member.txt�� ����� ȸ�� ��θ� ����ϴ� member2.cpp ���α׷��� ���弼��.

*/

#include <iostream>
#include <fstream> // ���� ����� ��� ���� ���Խ�Ŵ
#include <string>

int main() {

	std::ifstream member_file; // ������ �о�� �Է� ���� ��Ʈ�� ��ü ����
	std::string str; //���Ͽ��� �о�� �����͸� ������ ���ڿ� ���� ����

	//�ϴ� ������ ����� �о�� �� �����ϱ�
	member_file.open("member.txt");
	//���� �۾� ������ ���� ��ο� �ִ� member.txt�� �б� ���ؼ� ����(���� ������ ���� �߻�)

	if (!member_file) { // ������ ���� �� ���� ó��
		std::cerr << "������ �� �� �����ϴ�.\n";
		//std::cerr�� **ǥ�� ���� ��Ʈ��(Standard Error Stream)**�� ��Ÿ���� ��ü
		//�ַ� ���α׷����� ���/���� �޽����� ����� �� ���ȴ�
		return 1; // ���� �ڵ� ��ȯ
	}

	// �о� ���� 
	// std::getline() �Լ� �̿�
	// �ٹٲ��� �������� �߶� �� ���� �о��
	int minus = 0; 

	for (int i = 1; std::getline(member_file, str); i++) {
		// ���ǽ� std::getline(member_file, str
		// member_file�� �� �پ� �о ���ڿ� ���� str�� ����
		// member.txt������ �� ������ �ݺ��� ����
	
		//���õ� ��� ���ÿ� �°� �ֿܼ� ����ϱ�
		if (i % 2 == 1) { //i�� Ȧ�� �� �� ����(Ȧ����° ����� �� ����)
			std::cout << i - minus << "��° ȸ�� : ���� " << str << ", ";
			minus++;
		} else { // i�� ¦�� �� �� ����(¦����° ����� �� ����)
			std::cout << "��� " << str << "\n"; 
			//�ٹٲ��� �������� �߶� �б� ������ �ٹٲ��� �������� ���ϹǷ� ���� �߰���
		}	
	}

	// ������ ������ ����
	member_file.close();

	return 0;
}

/*
�ش�

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream my_file2;
	std::string str1, str2;
	my_file2.open("member.txt");
	int i = 0;

	while (my_file2 >> str1 >> str2) {
		std::cout << i + 1 << "��° ȸ�� : ���� " << str1 << ", ��� " << str2 << std::endl;
		i++;
	}

	my_file2.close();

	return 0;
}

*/