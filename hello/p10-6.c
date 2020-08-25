#include <stdio.h>

struct student{
    int num;
    double score;
    struct student * next;
};

#define LEN sizeof(struct student)

struct student * link_input(){
    struct student *head=NULL,*rail, *p;
    int i=1;
    while(1){
        printf("input No.%d student:",i);
        p=(struct student *)malloc(LEN);
        scanf("%d %f",&(p->num),&(p->score));
        if(p->num!=0){
            p->next=NULL;
            if(i==1){
                head=rail=p;
            }
            else{
                rail->next=p;
                rail=p;
            }
            i++;
        }
        else{
            free(p);
            break;
        }
    }
    return head;
}

struct student * link_add_sort(struct student *a,struct student *b){
    struct student *head=NULL,*p=NULL,*t,*q1,*q2;
    if(a!=NULL){
        p=a;
        while(p->next != NULL)
            p=p->next;
        p->next=b;
        p=a;
    }
    else if(b!=NULL){
        p=b;
    }
    else return head;

    while(p!=NULL){
        t=p;
        p=p->next;
        t->next=NULL;
        q1=head;
        if(head==NULL){
            head=t;
        }
        else {
            while(t->num > q1->num && q1->next != NULL){
                q2=q1;
                q1=q1->next;
            }
            if(t->num <= q1->num){
                if(q1==head){
                    t->next=head;
                    head=t;
                }
                else{
                    t->next = q1;
                    q2->next = t;
                }
            }
            else q1->next=t;
        }
    }
    return head;
}

struct student *desc_sort(struct student *head){
    struct student *p=head, *h=NULL,*t=NULL;
    if(head == NULL) return h;
    while(p!=NULL){
        t=p;
        p=p->next;
        t->next=h;
        h=t;
    }
    return h;
}

void print_link(struct student *head){
    struct student *p=head;
    if(head==NULL) {
        printf("no nodes.");
        return ;
    }
    while(p!=NULL){
        printf("(%d,%5.2f),",p->num,p->score);
        p=p->next;
    }
}

main()
{
    struct student *a, *b, *c ,*d;
    printf("input link a:\n");
    a=link_input();
    printf("\n\n");
    printf("input link b:\n");
    b=link_input();
    printf("\n\nlink a is:\n");
    print_link(a);
    printf("\nlink b is:\n");
    print_link(b);
    c=link_add_sort(a,b);
    printf("\n\n link c is:\n");
    print_link(c);
    d=desc_sort(c);
    printf("\n\n link d is:\n");
    print_link(d);
    printf("\n");
}