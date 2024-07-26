#include<stdio.h>
void main()
{
   int RTP,STP,RB,SA,RC,SC,RP,SH;
   RB=12000000;
   RC=3000000;
   RP=6000000;
   SA=11000000;
   SC=8000000;
   SH=8000000;
   RTP=RB+RC+RP;
   STP=SA+SC+SH;
   printf("%d",RTP);
   printf("\n%d\n",STP);
   if (RTP>STP)
    {
    printf("raman is more whether than suman");
    }
   else if(RTP<STP)
   {
     printf("suman is more whether than raman");
   }
   else (RTP==STP)
   {
       printf("both are eqally whether");
   }
}
