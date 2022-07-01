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
	P2 = 0x3F;
	while(1)
   {
      Delay ();
		  switch(P2)
      {
          case 0x3F: P2 = 0x9F; break;
          case 0x9F: Delay (); Delay (); P2 = 0xCF; break;
          case 0xCF: P2 = 0xE7; break;
          case 0xE7: Delay (); Delay (); P2 = 0xF3; break;
					case 0xF3: P2 = 0xF9; break;
					case 0xF9: Delay (); Delay (); P2 = 0xFC; break;
					case 0xFC: P2 = 0x3F; break;
      }
   }
}
