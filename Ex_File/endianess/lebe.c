#include <stdio.h>

int main()
{
	union sf_un{
		int val;
		char ch[4];
	};

	union sf_un u;
	int i;

	u.val = 0xAABBCCDD;

	printf("Address of u     = %p\n", &u);
	printf("Address of u.val = %p\n", &u.val);
	printf("Address of u.ch  = %p\n", &u.ch);

	printf("Value at address %p = 0x%x\n", &u.val, u.val);
	for(i=0;i<4;i++)
		printf("Value at address %p = 0x%x\n", &u.ch[i], (unsigned char)(u.ch[i]));
}

