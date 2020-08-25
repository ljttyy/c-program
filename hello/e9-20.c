#include<stdio.h>

void copy_string(char *from, char *to)
{
    while(*to++=*from++);
}

main()
{
    char *a="I am a teacher.";
    char b[]="You are a student.";
    printf("string_a=%s\nstring_b=%s\n",a,b);
    copy_string(a,b);
    char * format="a=%s\nb=%s\n";
    printf(format,a,b);
    
}