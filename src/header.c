#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
extern int id;
extern short int arr[100];
struct st
{
	int roll;
	char name[20];
	float marks;
	struct st* next;
};

int count(struct st* );
void rev_list(struct st**);
void stud_add(struct st **, short int *);
void stud_show(struct st*);
void stud_save(struct st *);
void stud_del(struct st **, short int *);
void stud_exit(struct st*);
void del_all(struct st**);
void stud_sort(struct st*);
void stud_modify(struct st**, char);
