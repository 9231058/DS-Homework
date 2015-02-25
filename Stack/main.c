/*
 * In The Name Of God
 * ========================================
 * [] File Name : main.c
 *
 * [] Creation Date : 25-02-2015
 *
 * [] Last Modified : Wed 25 Feb 2015 10:26:36 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <stdio.h>

#include "stack.h"

int main(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < 10; i++)
		push(i);
	for (i = 0; i < 10; i++)
		printf("%d\n", pop());
}
