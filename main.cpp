#include<iostream>
#include<vector>

int main() {
	using namespace std;

	long int n = 1000000000;
	vector<int> vec(n);

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	for (auto i = 0; i < n; i++) {
		vec[i] = 12;
	}
	vec.push_back(11); //�������� � ������ 1 ����� ������� - ������ �������: 1000000001, �����: ?

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	//����������: ���� ������� ������� ������� ������ �������, �� ��������� ����� ������� � ������ �� ����� ����������,
	//�� � � ���������� �� �� ����� � ������ ������

	return EXIT_SUCCESS;
}