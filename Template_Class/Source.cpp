#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    // ��������� ������ � 10 ����������
    Array array(10);

    // ��������� ������ ������� �� 1 �� 10
    for (int i = 0; i < 10; i++)
        array[i] = i + 1;

    // �������� ������ ������� �� 7 ���������
    array.resize(7);

    // ��������� ����� 15 ����� ��������� � �������� 4
    array.insertBefore(15, 4);

    // ������� ������� � �������� 5
    array.remove(5);

    // ��������� ����� 35 � 50 � ����� � � ������
    array.insertAtEnd(35);
    array.insertAtBeginning(50);

    // ������� ��� �������� �������
    for (int j = 0; j < array.getLength(); j++)
        std::cout << array[j] << " ";

	return 0;
}