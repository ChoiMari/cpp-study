/*****************************
	�ۼ��� : 2025-04-23
	���� �ǽ� ����3
******************************/

/*
1. ����ڿ��� "�̸��� �Է��ϼ���."��� �޼����� ����� �� �̸��� �Է¹�������.
2. ����ڿ��� "����� �Է��ϼ���."��� �޼����� ����� �� ����� �Է¹�������.
3. member.txt ���� �� �پ� "�̸�"�� "���"�� �˻��Ͽ� 
	�α��� ������ "�α��� ����" ���н� "�α��� ����" �� ����ϼ���.

*/
#include <iostream> //����½�Ʈ����ü cout,cin���� ���Խ��Ѿ���
#include <string> // string Ŭ���� ����Ϸ��� ���Խ��Ѿ���
#include <fstream> // ��������½�Ʈ�� Ŭ���� ���� ���Խ��Ѿ���
int main() {
	std::string login_name, login_pwd; // �α��� �õ��� �̸��� ���

	std::string member_name, member_pwd; // member.txt ���Ͽ��� �о�� �̸��� ����� ������ ���� ���� 

	std::cout << "�̸��� �Է��ϼ��� : "; // �Է� �ȳ��� ���
	std::cin >> login_name; // �Է� �޾� name�� ����
	std::cout << "����� �Է��ϼ��� : ";
	std::cin >> login_pwd;

	//member.txt���� �� �پ� �о �˻��ϱ�
	std::fstream member; //�Է� ��� �� �� �Ǵ� ����� ��ü ����
	//std::ifstream �Է� ���� ��Ʈ�� Ŭ���� �ᵵ ������ �׳� �ѹ� �ẽ

	member.open("member.txt"); //���Ͽ���

	if (!member) { // ����ó��
		std::cerr << "error : ������ �����ϴ� \n"; //cerr : character error�� ����, ǥ�� **����** ��� ��Ʈ��
	}

	// �α���

	bool success = false; // �α��� ���� ���� ������ ����

	while(member >> member_name >> member_pwd) { 
		//member���� (���鹮�ڸ� ������ ������)�о�ͼ� ���Ͽ��� ù ��° �ܾ member_name�� �����ϰ�
		// �ι�° �ܾ member_pwd�� ���� 
		if (login_name == member_name && login_pwd == member_pwd) { // �� �� �¾ƾ� ����
			success = true; // �˻��ؼ� �´°� ���� false�״�α� ������ ���� ���Ǹ� �ۼ��� 
			break;
		} 
	}


	if (success) {
		std::cout << "�α��� ���� ^____^\n";
	} else {
		std::cout << "�α��� ���� ��_��\n";
	}

	//���� ����
	member.close();

	return 0;
}