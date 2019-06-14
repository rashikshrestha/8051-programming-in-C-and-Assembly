#include<reg51.h>

d[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void delay(int ms)
{
    int i,j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 100; j++);
}

void main()
{
	int c=0;
	P2 = 8;
	
	while(1)
		for(c=0;c<10;c++)
		{
			P0 = d[c];
			delay(1000);
		}	
		
}
