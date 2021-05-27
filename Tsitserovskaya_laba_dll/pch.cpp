// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.
int groupNmber()
{
	return 561220;
}

void nameStudent(char *PnameStudent)
{
	strcpy_s(PnameStudent, 50, "Tsitserovskaya Alena\n");
}