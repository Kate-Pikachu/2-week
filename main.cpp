#include<iostream>
#include<vector>

int main() {
	using namespace std;

	vector<int> vec = { 1, 3, 5, 7, 9 }; // ������ �������: 5;
	vec.reserve(6); // ��������������� �����: 6
	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;

	vec.push_back(2); 
	vec.push_back(4); //�������� � ������ 2 ����� �������� - ������ �������: 7, �����: ?

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	// � ������ ����� �������, ��� ��� �������� ������ ���������� ����� ������� ����� 9

	return EXIT_SUCCESS;
}