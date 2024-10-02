#include<stdio.h>
typedef struct{
       int mob;
       char name[45];
       int usn;
       }stud;
int main()
{
    stud s[5];
    for(int i=0;i<5;i++){

        printf("\nEnter student name: ");
        scanf("%s",s[i].name);
        printf("\nEnter student usn: ");
        scanf("%d",&s[i].usn);
        printf("\nEnter mobile no.:");
        scanf("%d",&s[i].mob);
        printf("\n");

    }
    return 0;

}
