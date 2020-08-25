#include <stdio.h>

struct 
{
    int num;
    char name[10];
    char sex;
    char job;
    union 
    {
        int class;
        char position[10];
    }category;
}person[2];

main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("input person infomation[%d]:\n",i);
        scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);
        if(person[i].job == 's')
        {
            printf("input No.%d class:",person[i].num);
            scanf("%d",&person[i].category.class);
        }
        else if(person[i].job == 't')
        {
            printf("input No.%d position:",person[i].num);
            scanf("%s",person[i].category.position);
        }
    }
    printf("\n\n");

    printf("num     name     sex     job     class/position\n");
    for(i=0;i<2;i++)
    {
        printf("%d     %s     %c     %c",person[i].num,person[i].name,person[i].sex,person[i].job);
        if(person[i].job=='s')
            printf("     %d\n",person[i].category.class);
        else if(person[i].job=='t')
            printf("     %s\n",person[i].category.position);
        printf("\n");
    }
    
}
