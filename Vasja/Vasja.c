// Vasja.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <locale.h>
#define SM 60


int main()
{
	setlocale(LC_ALL, "RUS");
	int sec, mm, left;
	printf(" ������� ������ � ������ � �������!\n");
	printf(" ������� ����� ������, ������� ����� ���������\n");
	scanf("%d", &sec);
	mm = sec/SM;
	left = sec% SM;
	printf("%d ������� ��� %d �����, %d �������\n",sec, mm, left);
	}


