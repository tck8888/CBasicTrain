

#include <stdio.h>
#include <iostream>

using namespace std;

typedef void (*CallBackFunc)(int);

void printWelcome(int len) {
	cout << "printWelcome" << len << endl;
}

void printGoodBy(int len) {
	cout << "printGoodBy" << len << endl;
}

void test_callback(int times, CallBackFunc fun) {
	for (int i = 0; i < times; i++)
	{
		fun(i);
	}
	cout << "test_callback"  << endl;
	
}
int main() {
	test_callback(10, printWelcome);
	test_callback(10, printGoodBy);
	return 0;
}

