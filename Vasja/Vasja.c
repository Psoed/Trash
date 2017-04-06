// Vasja.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <locale.h>
#define SM 60


int main()
{
	setlocale(LC_ALL, "RUS");
	int sec, mm, left;
	printf(" Перевод секунд в минуты и секунды!\n");
	printf(" Укажите число секунд, которое нужно перевести\n");
	scanf("%d", &sec);
	mm = sec/SM;
	left = sec% SM;
	printf("%d секунды это %d минут, %d секунды\n",sec, mm, left);
	}


