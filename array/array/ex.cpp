/*************************
�ۼ��� : 2025-04-17
	�迭 ����
**************************/

#include <iostream>
#include <string>

int main() {
	// �迭 ������ �ʿ伺
	std::string friend1;
	std::string friend2;
	std::string friend3;

	friend1 = "ȫ�浿";
	friend2 = "������";
	friend3 = "�����";
	//-> ������ ������ �����Ϸ��� ���ŷӴ�

	// �迭 ������ �����ϸ� ��
	//3���� ���� ������ �� �ִ� �迭 ����
	std::string fruit1[3];

	//�迭������ �� ���� �����ϱ� ���ؼ��� []��� ������ �̿�

	//�迭 ��� �߰�
	fruit1[0] = "apple";
	fruit1[1] = "banana";
	fruit1[2] = "orange";

	std::cout << fruit1[0] << std::endl;
	std::cout << fruit1[1] << std::endl;
	std::cout << fruit1[2] << std::endl;

	//�迭�� �����ϴ� ���ÿ� �� ����
	std::string fruit2[] = { "apple", "banana", "orange" };

	std::cout << fruit2[0] << std::endl;
	std::cout << fruit2[1] << std::endl;
	std::cout << fruit2[2] << std::endl;

	// ������ �迭
	std::string fruit[2][2] = { // 2x2�� �迭(�ε��� 00���� 11���� ����)
		{ "apple", "banana" },
		{ "orange", "strawberry" }
	};

	std::cout << fruit[0][0] << "\n"; //apple �� ��µ˴ϴ�.
	std::cout << fruit[0][1] << "\n"; //banana �� ��µ˴ϴ�.
	std::cout << fruit[1][0] << "\n"; //orange �� ��µ˴ϴ�.
	std::cout << fruit[1][1] << "\n"; //strawberry �� ��µ˴ϴ�.

	//std::cout << fruit[0][2]; //�ε����� ������ �Ѿ�� ������ ������ ��.

	std::cout << "\n";

	//sizeof() : ���� �Ǵ� ������ Ÿ���� ũ�⸦ ����Ʈ ������ ��ȯ�� �ִ� ������
	std::string friend_array[] = { "ȫ�浿", "������", "�����" };

	int i;

	for (i = 0; i < sizeof(friend_array) / sizeof(friend_array[0]); i++) {
		std::cout << friend_array[i] << std::endl;
	}
	// sizeof(friend_array) / sizeof(friend_array[0])
	//-> C++���� **�迭�� ��ü ����(���� ����)**�� ���ϴ� ���� ��ǥ���� ���

	return 0;
}