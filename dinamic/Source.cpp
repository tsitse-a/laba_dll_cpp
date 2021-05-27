#include<iostream>
#include<Windows.h>
#include"Header.h"

using namespace std;

int main()
{
    HINSTANCE hdll = LoadLibrary(L"Tsitserovskaya_laba_dll.dll");
    if (hdll == NULL)
    {
        cout << L"�� ������� ���������� ����������";
        return 1;
    } 

    PgroupNmber CreateGroup;
    CreateGroup = (PgroupNmber)GetProcAddress(hdll, "groupNmber");
    if (CreateGroup == NULL)
    {
        cout << L"�� ������� ���������� �������";
        return 1;
    }

    PnameStudent CreateNameStudent;
    CreateNameStudent = (PnameStudent)GetProcAddress(hdll, "nameStudent");
    if (CreateNameStudent == NULL)
    {
        cout << L"�� ������� ���������� �������";
        return 1;
    }

    char x[50];
    cout << CreateGroup() << "\n";
    CreateNameStudent(x);
    cout << x;
    FreeLibrary(hdll);
    system("pause");
}