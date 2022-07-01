#include <REGX52.H>

void Delay(void)
{
   unsigned char i;
   unsigned char j;
   for(i=0;i<100;i++)
   {
      for(j=0;j<200;j++)
      { ; }
   }
} 


void main(void)
{
	while(1)
	{
		if(P3 == 0xFB)
		{
			P2 = 0x7F;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x3F;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x1F;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x0F;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x07;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x03;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x01;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x00;
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0xFF;
			Delay (); 
			Delay ();
			if(P3 != 0xFB) break;
			P2 = 0x7F;
			if(P3 != 0xFB) break;
			
		}
		else
		{	
			
			P2 = 0xFE;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xFC;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xF8;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xF0;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xE0;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xC0;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0x80;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0x00;
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xFF;
			Delay (); 
			Delay ();
			if(P3 == 0xFB) break;
			P2 = 0xFE;
			if(P3 == 0xFB) break;
			
		}
  }
}