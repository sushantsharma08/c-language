#include<stdio.h>
int tofh (int ndisk, char source, char temp, char dest);
int main()
{
char source='S' ,temp='T',dest='D';
int ndisk;
printf("Enter the number of disks ");
scanf("%d",&ndisk) ;
printf ("Sequence is : \n");
tofh(ndisk,source,temp,dest) ;
}
int tofh (int ndisk, char source, char temp, char dest)
{
if (ndisk>0)
{
tofh(ndisk-1, source,dest, temp);
printf ("Move Disk %d %c->%c\n ",ndisk,source,dest);
tofh(ndisk-1,temp,source,dest) ;
}
}