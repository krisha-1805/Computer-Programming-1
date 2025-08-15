//Convert bytes into KB, MB and GB

#include<stdio.h>
int main()
{
   int bytes;
   float KB,MB,GB;
   printf("Enter the number of bytes=");
   scanf("%d",&bytes);
   KB=(float)bytes/1024;
   MB=KB/1024;
   GB=MB/1024;
   printf("KB=%f\nMB=%f\nGB=%f",KB,MB,GB);
   return 0;
}
