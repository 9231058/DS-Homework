/*
 * In The Name Of God
 * ========================================
 * [] File Name : stack.c
 *
 * [] Creation Date : 25-02-2015
 *
 * [] Last Modified : Wed 25 Feb 2015 10:26:50 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
static int S[1024];
static int head;

void push(int val)
{
	if (head < 1024) {
		S[head] = val;
		head++;
	}
}

int pop(void)
{
	if (head > 0) {
		head--;
		return S[head];
	}
	return -1;
}
