/***********************************
	�ۼ��� : 2025-04-17
	�迭 ���� ���� Ǯ��
************************************/
#include <iostream>
#include <string>
int main() {
	
	// ���� 1) city��� �迭������ �����ϰ�, 3���� ���� �̸��� ������ ������ �ּ���.	
	// �迭 ���� �� �� �Ҵ�
	std::string city[3];

	city[0] = "Korea";
	city[1] = "Canada";
	city[2] = "USA";

	// ���� 2) city��� �迭������ "�����԰� ����"�� 3���� ���� �̸��� ������ ������ �ּ���.
	// �迭 ����� ���ÿ� �ʱ�ȭ
	std::string city2[] = { "Korea", "Canada", "USA" };

	// ���� 3) �ǽ�1 OR �ǽ�2 ���� ������ �迭���� city�� ����� ������ for���� �̿��ؼ� ����� �ּ���.
	for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++) { // i�� city �迭�� ����(������ ����)��ŭ �ݺ� ����
		// �迭 ��ü�� ũ��(����Ʈ) / �迭 ���� �ϳ��� ũ��(����Ʈ) = �迭�� ����(�迭�� ������ ����)
		std::cout << city[i] << std::endl;
		//std::endl �ٹٲ�(\n) ��� ���, �� �ٲٸ鼭 ���� ���⵵ ���� ��
	}
	
	return 0;
}

/* ���� 1 �ش�
* 
#include <iostream>
#include <string>

int main() {
	std::string city[3];

	city[0] = "korea";
	city[1] = "china";
	city[2] = "usa";

	std::cout << city[0] << std::endl;
	std::cout << city[1] << std::endl;
	std::cout << city[2] << std::endl;
}

*/

/* ���� 2 �ش�
#include <iostream>
#include <string>

int main() {
	std::string city[3] = { "korea", "china", "usa" };

	std::cout << city[0] << std::endl;
	std::cout << city[1] << std::endl;
	std::cout << city[2] << std::endl;
}

*/

/* ���� 3 �ش�
#include <iostream>
#include <string>

int main() {
	std::string city[3] = { "korea","china","usa" };

	int i;

	for (i = 0; i < sizeof(city) / sizeof(city[0]); i++) {
		std::cout << city[i] << std::endl;
	}
}

*/