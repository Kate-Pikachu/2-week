#include<iostream>
#include<vector>

int main() {
	using namespace std;

	vector<int> vec = { 1, 3, 5, 7, 9 }; // размер вектора: 5;
	vec.reserve(6); // зарезервировали объем: 6
	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;

	vec.push_back(2); 
	vec.push_back(4); //добавили в вектор 2 новых элемента - размер вектора: 7, объем: ?

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	// в выводе можно увидеть, что при нехватке пам€ти количество €чеек вектора стало 9

	return EXIT_SUCCESS;
}