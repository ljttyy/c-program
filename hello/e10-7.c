#include<stdio.h>
#define LEN sizeof(struct student)
#define NULL 0

struct student
{
    long num;
    float score;
    struct student * next;
};



struct student *creat()
{
    struct student *head;
    struct student *p,*rail;
    int n;
    n=0;
    printf("input num and score(%d):\n",n);
    p=rail=(struct student *)malloc(LEN);
    scanf("%ld,%f",&p->num,&p->score);
    head=NULL;

    while(p->num!=0)
    {
        n=n+1;
        if(n==1) head=p;
        else rail->next=p;
        rail=p;
        printf("input num and score(%d):\n", n);
        p=(struct student *)malloc(LEN);
        scanf("%ld,%f",&p->num,&p->score);
    }
    rail->next=NULL;
    return head;
}

void print_link(struct student *head)
{
    struct student *p = head;
    while(p!=NULL)
    {
        printf("num:%ld  score=%5.1f\n",p->num,p->score);
        p=p->next;
    }
}

struct student *del(struct student *head, int num)
{
    struct student *p=head, *t;
    if(p->num == num)
    {
        head = head->next;
        free(p);
        return head;
    }
    while(p->next->num != num && p->next->next != NULL)
        p=p->next;
    if(p->next->num == num)
    {
        t=p->next;
        p->next = p->next->next;
        free(t);
        return head;
    }
    else
    {
        printf("On Del node not find.\n");
        return head;
    }
    
}

struct student *insert(struct student *head, struct student *stu)
{
    struct student *p=head;
    if(stu->num <= p->num)
    {
        stu->next=head;
        head=stu;
        return head;
    }
    while(p->next->num < stu->num && p->next->next != NULL)
        p=p->next;
    if(p->next->next == NULL)
    {
        p->next->next=stu;
        stu->next=NULL;
        return head;
    }
    else
    {
        stu->next = p->next->next;
        p->next->next=stu;
        return head;
    }
}

main()
{
    struct student * head;
    struct student *t;
    head=creat();
    print_link(head);
    head=del(head,4);
    print_link(head);
    t=(struct student *)malloc(LEN);
    t->num=7;
    t->score=70;
    head=insert(head,t);
    print_link(head);
    t=(struct student *)malloc(LEN);
    t->num=10;
    t->score=80;
    head=insert(head,t);
    print_link(head);
}    