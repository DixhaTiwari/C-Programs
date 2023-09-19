#include<stdio.h>

/*struct abc
{
    char a;
    int b;
    char c;
};
void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}*/

#pragma pack(1)
struct abc
{
    char a;
    int b;
    char c;
};
void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}