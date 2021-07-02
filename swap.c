#include <stdio.h>
#include <assert.h>
#include<math.h>
#include <string.h>
#include <cs50.h>

string ari(string);

string ari(string s)
{
int ch=0;
int w=0;
int sent=0;
int read;
for(int i=0;s[i]!='\0';i++)
 {
   if(isalnum(s[i]))
    {
    ch++;
    }
   if(s[i]==' ')
    {
    w++;
    }
   if(s[i]=='.'||s[i]=='!'||s[i]=='?')
    {
    sent++;
    }
 }
float cw=(float)ch/w;
float ws=(float)w/sent;
float r=(4.71*cw)+(0.5*ws)-21.43;
read=ceil(r);
if(read==1)
 { return "Kindergarten"; }
else if(read==2)
 {return "First/Second Grade";}
else if(read==3)
 {return "Third Grade";}
else if(read==4)
 {return "Fourth Grade";}
else if(read==5)
 {return "Fifth Grade";}
else if(read==6)
 {return "Sixth Grade";}
else if(read==7)
 {return "Seventh Grade";}
else if(read==8)
 {return "Eighth Grade";}
else if(read==9)
 {return "Ninth Grade";}
else if(read==10)
 {return "Tenth Grade";}
else if(read==11)
 {return "Eleventh Grade";}
else if(read==12)
 {return "Twelfth Grade";}
else if(read==13)
 {return "College student";}
else if(read==14)
 {return "Professor";}
}
