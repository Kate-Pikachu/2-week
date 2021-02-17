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
	vec.push_back(11); //добавили в вектор 1 новый элемент - размер вектора: 1000000001, объем: ?

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	//наблюдени€: если вводить слишком большой размер вектора, то компьютер очень греетс€ и пыхтит во врем€ компил€ции,
	//ну и в результате он не т€нет и выдает ошибку

	return EXIT_SUCCESS;
}