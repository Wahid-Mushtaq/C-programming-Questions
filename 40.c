//Display contents of a character array.
#include<stdio.h>
int main(){
char arr[11]={'H','e','y',' ','b','u','n','t','y','\0'};
int i=0;
while(arr[i]!='\0')
{ printf("%c",arr[i]);
  i++;
}
return 0;
}