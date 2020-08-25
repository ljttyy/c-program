#include<stdio.h>

main()
{
    FILE *f,*f2;
    char ch;
    if((f=fopen("a1","w+"))==NULL){
        printf("open file a1 faild.");
        exit(0);
    }
    printf("input please:\n");
    ch=getchar();
    while(ch!='#'){
        fputc(ch,f);
        // putchar(ch);
        ch=getchar();
    }
    fclose(f);

    printf("\n\nfile a1 text:\n");
    if((f2=fopen("a1","r+")) == NULL){
        printf("open file a1 for output fial.");
        exit(0);
    }
    
    ch=fgetc(f2);
    while(ch!=EOF){
        putchar(ch);
        ch=fgetc(f2);
    }
}