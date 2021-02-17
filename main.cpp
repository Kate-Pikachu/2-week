#include<iostream>
#include<vector>

int main() {
	using namespace std;

	vector<int> vec = { 1, 3, 5 }; // размер вектора: 3, объем: 3; 
	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;

	vec.push_back(2); 
	vec.push_back(4); //добавили в вектор 2 новых элемента - размер вектора: 5, объем: ?

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	// в выводе можно увидеть, что при нехватке пам€ти количество €чеек вектора становитс€ вдвое большим, т.е. объем умножаетс€ на 2

	return EXIT_SUCCESS;
}