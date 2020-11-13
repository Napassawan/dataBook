#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct IDbook getData();
void printData(struct IDbook);

struct IDbook {
    char name[100];
    char ID_num[13];
    char Tel_num[11];
};

int main()
{
    int i = 0, num = 3;
    char tmp[10];
    struct IDbook phb[5];
    system("cls");

    do {
        printf("How many number do you want to add tel.no (Maximum:5) : ");
        gets_s(tmp);
    } while (atoi(tmp) < 0 || atoi(tmp) > 5);
    num = atoi(tmp);
    printf("Please add data\n");
    for (i = 0; i < num; i++) {
        phb[i] = getData();
    }
    printf("\nData list\n");
    for (i = 0; i < num; i++) {
        printData(phb[i]);
    }
    printf("Already Add !!!\n");
    _getch();
}

struct IDbook getData() {
    struct IDbook ID;

    printf("Enter name : ");
    gets_s(ID.name);
    printf("Enter ID : ");
    gets_s(ID.ID_num);
    printf("Enter Tel number : ");
    gets_s(ID.Tel_num);
    return ID;
}

void printData(struct IDbook pb) 
{
    printf("%s\t%s\t%s\n", pb.name, pb.ID_num , pb.Tel_num);
}