#include <Windows.h>
#include <process.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void mythreadA(void* data)
{
	printf("mythreadA %d \n", GetCurrentThreadId());
}

void mythreadB(void* data)
{
	volatile int i;
	for (i = 0; i < 100000; i++) {}

	printf("mythreadB %d \n", GetCurrentThreadId());
}

int main(int argc, char* argv[])
{
	cout<<"Name    Haiqa Mushtaq"<<endl;
	cout<<"Roll no BSIT M2-20-13"<<endl;
	HANDLE myhandleA, myhandleB;

	myhandleA = (HANDLE)_beginthread(&mythreadA, 0, 0);
	myhandleB = (HANDLE)_beginthread(&mythreadB, 0, 0);
	WaitForSingleObject(myhandleA, INFINITE);
	WaitForSingleObject(myhandleB, INFINITE);

	return 0;
}
