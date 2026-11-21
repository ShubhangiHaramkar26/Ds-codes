Shubhangi Haramkar
Roll no: CO2047
Div:A
Batch:A3

Title: Implement a hospital patient registration system using queue 

#include<stdio.h>
#include<string.h>
#define MAX 20
struct patient
{
int patientID;
char arrivalTime[20];
};
int main()
{
struct patient queue[MAX];
int front = -1;
int rear = -1;
int choice;
int i;
while(1)
{
printf("\n===== hospital patient registration system======");
printf("\n 1. Add Patient");
Piyush Vitthal Gore
CO2045
div A
Batch A3 printf("\n 2. Attend Patient");
printf("\n 3. View Patient");
printf("\n 4. check Queue Empty");
printf("\n 5. Exit");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
//1. Add patients
case 1:
if(rear==MAX - 1)
{
printf("Queue is full\n");
}
else
{
if(front == -1)
{
front = 0;
}
rear++;
printf("Enter patient ID");
scanf("%d",&queue[rear].patientID);
printf(" Enter Arrival time");
scanf("%s",queue[rear].arrivalTime);
printf("patient added successfully\n"); }
break;
//ATTEND PATIENT
case 2:
if(front==-1 || front>rear)
{
printf("Queue is empty\n");
}
else
{
printf("Attend patient ID: %d\n",queue[front].patientID);
printf("Arrival time: %s\n",queue[front].arrivalTime);
front++;
if(front>rear)
{
front=-1;
rear=-1;
}
}
break;
//3. View patient
case 3:
if(front==-1)
{
printf("Queue is empty\n"); }
else
{
printf("------patient Details------\n");
for(i = front; i<=rear; i++)
{
printf("Patient ID:%d\n", queue[i].patientID);
printf("arrival time:%s\n", queue[i].arrivalTime);
}
}
break;
//4. check queue empty
case 4:
if(front==-1)
{printf("queue is empty\n");}
else
{printf("queue is not empty\n");}
break;
//5.Exit
case 5:
printf("Existing program...\n");
return 0;
default:
printf("valid choice\n"); }
}
return 0;
}
===============================================
student@TAEComp-01:~/Desktop/Prachiti.DSlab$ g++ lab5.c
student@TAEComp-01:~/Desktop/Prachiti.DSlab$ ./a.out
===== hospital patient registration system======
1. Add Patient
2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:1
Enter patient ID0528
Enter Arrival time11.00
patient added successfully
===== hospital patient registration system======
1. Add Patient
2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:1
Enter patient ID123
Enter Arrival time12.00
patient added successfully
===== hospital patient registration system======
1. Add Patient 2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:1
Enter patient ID345
Enter Arrival time12.30
patient added successfully
===== hospital patient registration system======
1. Add Patient
2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:2
Attend patient ID: 528
Arrival time: 11.00
===== hospital patient registration system======
1. Add Patient
2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:3
------patient Details------
Patient ID:123
arrival time:12.00
Patient ID:345
arrival time:12.30
===== hospital patient registration system====== 1. Add Patient
2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:4
queue is not empty
===== hospital patient registration system======
1. Add Patient
2. Attend Patient
3. View Patient
4. check Queue Empty
5. ExitEnter your choice:5
Existing program…

