#include<iostream>
#include<algorithm>
#include<chrono>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<forward_list>


using namespace std;
using namespace chrono;

template <typename T>
void sort_time(T x) {
	auto begin = steady_clock::now();
	sort(x.begin(), x.end());
	auto end = steady_clock::now();
	auto delta = duration_cast<nanoseconds>(end - begin);
	cout << "Time: " << delta.count() << " nanoseconds - ";
}

template <typename P>
void sort_time_listiki(P x) {
	auto begin = steady_clock::now();
	x.sort();
	auto end = steady_clock::now();
	auto delta = duration_cast<nanoseconds>(end - begin);
	cout << "Time: " << delta.count() << " nanoseconds - ";
}


int main() {

	vector<int> vec = { 1,3,5,7,9 };
	array<int, 5> arr = { 1,3,5,7,9 };
	deque<int> dq = { 1,3,5,7,9 };
	list<int> ls = { 1,3,5,7,9 };
	forward_list<int> fl = { 1,3,5,7,9 };

	sort_time(vec); cout << "vector" << endl;
	sort_time(arr); cout << "array" << endl;
	sort_time(dq); cout << "deque" << endl;
	sort_time_listiki(ls); cout << "list" << endl;
	sort_time_listiki(fl); cout << "forward list" << endl;

	return EXIT_SUCCESS;
}