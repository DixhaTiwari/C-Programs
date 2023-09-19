#include<stdio.h>
int main(){
FILE *ptr;
int num;
ptr=fopen("Harry.txt", "r");
fscanf(ptr, "%d", &num);
printf("The value of num is %d\n", num);
fclose(ptr);
return 0;
}