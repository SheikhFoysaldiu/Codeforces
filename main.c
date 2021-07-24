#include<stdio.h>
#include<string.h>

struct Student
{
    
    int id;
    char name[50];
    float percentage;
};

int main()
{
int i;
struct Student rec[2];
for(int i=0; i<1; i++)
{
    printf("Enter Student's Name : ");
    scanf("%s",rec[i].name);
    
    printf("\nEnter Student's id : ");
    scanf("%d",&rec[i].id);

    printf("\nEnter Student's Percentage");
    scanf("%f",&rec[i].percentage);

}
for(int i=0; i<1; i++)
{
    
    printf("\n\nStudent's Name %s",rec[i].name);
    
    printf("\nStudent's ID %d",rec[i].id);
    
    printf("\nStudent's Percentage %f",rec[i].percentage);
  
}
    
}