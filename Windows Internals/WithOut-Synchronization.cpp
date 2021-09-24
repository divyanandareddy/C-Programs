
#include <iostream>
#include <Windows.h>
#include <tchar.h>

int main()
{
	char text[256];

	std::cout << "Press enter to start (PID=" << GetCurrentProcessId() << ")..." << std::endl;
	std::cin.get();
	printf("Running...\n");

	for (int i = 0; i < 10000; i++)
	{
		sprintf_s(text, "Text from process %d\r\n", GetCurrentProcessId());

		HANDLE hFile = CreateFile(_T("c:\\test\\test.txt"), GENERIC_WRITE, FILE_SHARE_READ, 0, OPEN_ALWAYS, 0, 0);
		if (hFile == INVALID_HANDLE_VALUE)
		{
			DWORD err = ::GetLastError();
			std::cout << "Error Opening File " << GetLastError() << " at index  " << i << std::endl;
			break;
		}

		SetFilePointer(hFile, GetFileSize(hFile, NULL), NULL, FILE_BEGIN);
		DWORD bytes;
		WriteFile(hFile, text, strlen(text), &bytes, NULL);
		CloseHandle(hFile);
	}

	std::cout << "Done." << std::endl;
}

