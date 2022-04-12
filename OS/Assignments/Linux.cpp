
#include <iostream>
#include <thread>
using namespace std;


void thread_function(int Z)
{
	for (int i = 0; i < Z; i++) {
		cout << "Thread 1 \n";
	}
}

class thread_object {
public:
	void operator()(int x)
	{
		for (int i = 0; i < x; i++)
			cout << "Thread 2 \n";
	}
};

int main()
{
	cout<<"Name	Haiqa Mushtaq"<<endl;
	cout<<"Roll no BSIT M2-20-13"<<endl;
	
	cout << "Threads 1 and 2 and 3 operating independently" << endl;

	thread th1(thread_function, 3);

	thread th2(thread_object(), 3);

	auto f = [](int x) {
		for (int i = 0; i < x; i++)
			cout << "Thread 3 \n";
	};

	thread th3(f, 3);

	th1.join();

	th2.join();

	th3.join();

	return 0;
}

