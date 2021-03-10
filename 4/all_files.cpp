#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


int* rand_array(int n) {
	int* a = new int[n + 1];
	for(int i = 0; i < n; ++i) {
		a[i] = rand() % 1000;
	}
	a[n] = -1;

	return a;
}

void print_array(int *a) {
	for(; *a != -1; ++a)
		std::cout << *a << ' ';

	std::cout << "\n-------------------\n";
}

int max(int x, int y) {
	return x > y ? x : y;
}

int max_array(int* a) {
	int m = *a;
	for(++a; *a + 1; a++)
		m = max(*a, m);
	return m;
}

int size_array(int* a) {
	int* p;
	for(p = a; *p + 1; ++p);
	return p - a;
}

bool is_in_array(int* a, int n, int x) {
	for(int* p = a; p != a + n; ++p)
		if(*p == x)
			return true;
	return false;
}

bool bin_search(int* a, int n, int x) {
	int l = 0;
	int r = n - 1;
	while(l <= r) {
		int m = (r + l) / 2;
		
		if(a[m] == x)
			return true;

		if(a[m] < x)
			l = m + 1;
		else
			r = m - 1;					
	}

	return false;
}

bool bin_search(int* l, int* r, int x) {
	if(l >= r)
		return false;
	
	int* m = l + (r - l) / 2;

	if(*m == x)
		return true;

	if(*m < x)
		return bin_search(m + 1, r, x);
	else
		return bin_search(l, m, x);
}

int main() {
	srand(time(NULL));
	int* a = rand_array(10);
	int n = size_array(a);

	std::sort(a, a + n);
	
	print_array(a);

	delete[] a;
return 0;
}
