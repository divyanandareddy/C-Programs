#include <iostream>
#include <Windows.h>

int main()
{
	//HANDLE hfile = CreateFile("D:\Desktop\data.txt", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0); // by default it would be CreateFileW() for unicode version but we are passing ASCII value thats why we will get error
	HANDLE hfile = CreateFileA("D:\\data.txt", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0); // CreateFileA() for ASCII vesion
	CloseHandle(hfile);

	HANDLE hfile1 = CreateFileW(L"D:\\data1.txt", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0); // CreateFileW() for Unicode vesion
	CloseHandle(hfile1);

	HANDLE hfile2 = CreateFile(L"D:\\data2.txt", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0); // CreateFile() for Unicode vesion
	CloseHandle(hfile2);

	return 0;
}
