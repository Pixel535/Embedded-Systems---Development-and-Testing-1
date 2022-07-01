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
	P2 = 0xFE;
	while(1)
   {
      Delay ();
		  switch(P2)
      {
          case 0xFE: P2 = 0xFD; break;
          case 0xFD: P2 = 0xFB; break;
          case 0xFB: P2 = 0xF7; break;
          case 0xF7: P2 = 0xEF; break;
					case 0xEF: P2 = 0xDF; break;
          case 0xDF: P2 = 0xBF; break;
					case 0xBF: P2 = 0x7F; break;
          case 0x7F: P2 = 0xFE; break;
      }
      Delay ();
   }
}
