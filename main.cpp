#include<iostream>
#include<vector>

int main() {
	using namespace std;

	vector<int> vec = { 1, 3, 5 }; // ������ �������: 3, �����: 3; 
	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;

	vec.push_back(2); 
	vec.push_back(4); //�������� � ������ 2 ����� �������� - ������ �������: 5, �����: ?

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	// � ������ ����� �������, ��� ��� �������� ������ ���������� ����� ������� ���������� ����� �������, �.�. ����� ���������� �� 2

	return EXIT_SUCCESS;
}