#include <iostream>
#define MODE 1 // �������� ���������� ��������� MODE
#if !defined MODE
#error Important macro required
#endif

int add(int x, int y) { return x + y; }

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
#if MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;
#elif MODE == 1
	std::cout << "������� � ������ ������" << std::endl;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������� ����� 2: ";
	std::cin >> b;
	std::cout << "��������� ��������: " << add(a, b) << std::endl;
#endif
}




/*
������ 1. ��������������� ���������
� ���� ������� �� ����������� ��������� ��������������� ���������, ������� ��
������� �����.

� ����� ��������� ��������� ��������:

��������  MODE � ������������� ���������.
���������, ��� ��������� ����������, ����� ��������� �� ������ ����������������
� ������ ������ ��������� � ������������� ���������� MODE. � ������, ���� MODE
����� �������� 0, �������� �� ������� �������� � ������ ����������. ���� MODE
����� �������� 1, ���������� ������� add, ������� ������ ���������� ��� �����.
�������� �� ������� �������� � ������ ������, ��������� ������������ ������ ���
����� � �������� ��������� �������� � ������� ������� add �� �������. ���� MODE
����� ����� ������ ��������, �������� �� ������� ������������ �����. ����������
�������. �������� ��������: ������� add ������ ���� ���������� ������, ���� MODE
����� �������� 1.

������ ������ ���������
�������
������� � ������ ������
������� ����� 1: 4
������� ����� 2: 6
��������� ��������: 10
*/

