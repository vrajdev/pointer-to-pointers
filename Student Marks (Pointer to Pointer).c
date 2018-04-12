#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<alloc.h>

int main()
{
int groups, students;
float **scores, scoretotal;

printf("\nEnter the number of groups: ");
scanf("%d", &groups);

scores = (float**)malloc(groups);
if(scores == NULL)
{

printf("\n Memory Allocation Failed. ");
exit(1);
}

for(int g=0; g<groups; g= g+1)
{
printf("\nEnter the number of students: ");
scanf("%d", &students);
*(scores + g)= (float*)malloc(students);
if(*(scores + g) == NULL)
{
    printf("\nMemory Allocation Failed. ");
    exit(1);
}
scoretotal = 0;
printf("\nEnter the score for %d students in group %d", students, g+1);
for (int s=0; s<students; s=s+1)
{
    scanf("%f",(*(scores+g)+s));
    scoretotal= scoretotal + *(*(scores+g)+s);
}
printf("\nAverage for this group %f", scoretotal/students);

}

for(int r = 0; r <groups; r = r+1)
       free(*(scores+r));
free(scores);

printf("\n Press any key to continue..");
getch();
return 0;
}
