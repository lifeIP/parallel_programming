#include <iostream>
#include <thread>
int s = 0;

void hello() {
	std::cout << "Hello world!!!\n";
	s++;
}

int main() {
	std::thread t(hello);
	t.join();
	std::cout << s;
}