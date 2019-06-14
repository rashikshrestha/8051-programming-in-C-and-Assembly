#include<reg51.h>
#define POV 60 //Persistence Of Vision
#define DELAY 5

d[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void delay(int ms)
{
    int i,j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 100; j++);
}

void disp(int x)
{
	int i;
  for (i = 0; i < DELAY; i++)
	{
		P0 = d[x/10];
		P2 = 4;
		delay(POV);
		
		P0 = d[x%10];
		P2 = 8;
		delay(POV);
	}
}

void main()
{
	int c=0;
	P0 = 0;
	
	while(1)
		for(c=1;c<100;c++)
			disp(c);
}
