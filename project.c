#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[1000][1300]= {"Green Line","Shyamoli Paribahan","Hanif Enterprise","Soudia Paribahan","Eagle Paribahan"};
char name[50][100]= {'\0'};
char number[50][100]= {'\0'};
int num1[50]= {0};
int busno;
void bus();
void name_number(int booking,char numstr[100]);
void booking();
int read_number(int busno);
void read_name(int busno);
void status();
void status_1(int busno);
void cancle();

int main()
{
    login();
    int num,i;
    do
    {
        system("cls");
        printf("\n\n\n");
        printf("--------------------------------------------------------------------------------");
        printf("~~~~~~~~~~~~~~~~~~~~~~~ WELCOME TO BUS RESERVATION SYSTEM ~~~~~~~~~~~~~~~~~~~~~~");
        printf("--------------------------------------------------------------------------------\n\n\n");
        printf(" Enter 1 : View Bus List & Details");
        printf("\n-----------------------------------");
        printf("\n");
        printf(" Enter 2 : Book Bus Tickets");
        printf("\n----------------------------");
        printf("\n");
        printf(" Enter 3 : Cancel Bus Tickets Booking");
        printf("\n--------------------------------------");
        printf("\n");
        printf(" Enter 4 : Booking tickets List Details");
        printf("\n----------------------------------------");
        printf("\n");
        printf(" Enter 5 : Exit");
        printf("\n----------------");
        printf("\n\n");
        printf("================================================================================\n\n");
        printf("Enter Your Choice : ");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            bus();
            break;
        case 2:
            booking();
            break;
        case 3:
            cancle();
            break;
        case 4:
            status();
            break;
        }
        getch();
    }
    while(num != 5);
    system("CLS");
    printf("--------------------------------------------------------------------------------\t\t\n");
    printf("\t\t\t\t Thank  You So Much \t\t\t\n");
    printf("--------------------------------------------------------------------------------\t\t\n");
    printf("\t\t\t Project Done By : Monowar Hossain Nibir\n");
    printf("\t\t\t Project Done By : Minhazul Amin Tomal\n");
    printf("\t\t\t Project Done By : Md. Fayjul Islam Nahid\n");

    getch();
    return 0;
}


void bus()
{
    int num,i;
    system("cls");
    printf("\n\n\n");
    printf(":::::::::::::::::::::::::::::: BUS RESERVATION SYSTEM ::::::::::::::::::::::::::\n\n\n");
    printf(" Bus No 1 : %s\n",ch[0]);
    printf("\n");
    printf(" Bus No 2 : %s\n",ch[1]);
    printf("\n");
    printf(" Bus No 3 : %s\n",ch[2]);
    printf("\n");
    printf(" Bus No 4 : %s\n",ch[3]);
    printf("\n");
    printf(" Bus No 5 : %s\n",ch[4]);
    printf("\n\n\n");
    printf("Enter Your Choice : ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf(" Bus Name : Green Line \n");
        printf(" Journey Route : Dhaka - Rangpur - Bogra - Rajshahi - Sylhet - Khulna\n");
        printf(" Bus Driver : Sohidur Rahman\n");
        printf(" Ticket Price : 1200 Taka\n ");
        break;
    case 2:
        printf(" Bus Name : Shyamoli Paribahan \n");
        printf(" Journey Route : Dhaka - Chittagong - Bogra - Jessore - Benapole - Rangpur \n");
        printf(" Bus Driver : Soyaib Haque\n");
        printf(" Ticket Price : 1200 Taka \n");
        break;
    case 3:
        printf(" Bus Name : Hanif Enterprise \n");
        printf(" Journey Route : Dhaka - Chittagong - Cox's bazar  \n");
        printf(" Bus Driver : Rayhan Shekh\n");
        printf(" Ticket Price : 1200 Taka \n");
        break;
    case 4:
        printf(" Bus Name : Soudia Paribahan \n");
        printf(" Journey Route : Dhaka - Khagrachori -  Fotikchori -  Teknaf \n");
        printf(" Bus Driver : Abdur Rafiu\n");
        printf(" Ticket Price : 1200 Taka \n");
        break;
    case 5:
        printf(" Bus Name : Eagle Paribahan \n");
        printf(" Journey Route : Dhaka - Rangpur - Bogra - Rajshahi - Sylhet - Chittagong  \n ");
        printf(" Bus Driver : Rokey Ahmed\n");
        printf(" Ticket Price : 1200 Taka \n");
    }
    getch();
}


void booking()
{

    int i=0;
    char numstr[100];
    system("cls");
    printf(":::::::::::::::::::::::::::::: BUS RESERVATION SYSTEM ::::::::::::::::::::::::::\n\n\n");
    printf(" Bus No 1 : %s\n",ch[0]);
    printf("\n");
    printf(" Bus No 2 : %s\n",ch[1]);
    printf("\n");
    printf(" Bus No 3 : %s\n",ch[2]);
    printf("\n");
    printf(" Bus No 4 : %s\n",ch[3]);
    printf("\n");
    printf(" Bus No 5 : %s\n",ch[4]);
    printf("\n\n\n");
    printf("Enter the Bus number:--->");
    scanf("%d",&busno);
    system("cls");
    printf(":::::::::::::::::::::::::::::: BUS RESERVATION SYSTEM ::::::::::::::::::::::::::\n\n\n");
    printf("Your Bus Number is %d ****** %s",busno,ch[busno-1]);
    status_1(busno);
    FILE *f1, *fopen();
    char str1[80]="32",str2[4],str3[4];
    int seat1,seat2,booking=0;
    if(busno == 1)
    {
        f1 = fopen("tr1.txt","r+");
        fgets(str1,80,f1);
        fclose(f1);
    }
    else if(busno == 2)
    {
        f1 = fopen("tr2.txt","r+");
        fgets(str1,80,f1);
        fclose(f1);
    }
    else if(busno == 3)
    {
        f1 = fopen("tr3.txt","r+");
        fgets(str1,80,f1);
        fclose(f1);
    }
    else if(busno == 4)
    {
        f1 = fopen("tr4.txt","r+");
        fgets(str1,80,f1);
        fclose(f1);
    }
    else if(busno == 5)
    {
        f1 = fopen("tr5.txt","r+");
        fgets(str1,80,f1);
        fclose(f1);
    }
    seat1=atoi(str1);//covert the string into number
    if(seat1 <= 0)
    {
        printf("There is no blank seat in this bus ");
    }
    else
    {
        printf("\n\n\n\t\t\tAvailable Seats:%d\n",seat1);
        printf("\n\t\t\t\tNumber of Tickets:----->");
        scanf("%d",&booking);
        printf("\n");

        seat1=seat1-booking;
        itoa(busno,numstr,10);
        name_number(booking,numstr);
        printf("\n\t\t\t\tThe Total booking amount is %d Taka",1200*booking);
        itoa(seat1, str1, 10);//for reading the seats from the user.
        if(busno == 1)
        {
            f1 = fopen("tr1.txt","w");
            fputs(str1,f1);
            fclose(f1);
        }
        else if(busno == 2)
        {
            f1 = fopen("tr2.txt","w");
            fputs(str1,f1);
            fclose(f1);
        }
        else if(busno == 3)
        {
            f1 = fopen("tr3.txt","w");
            fputs(str1,f1);
            fclose(f1);
        }
        else if(busno == 4)
        {
            f1 = fopen("tr4.txt","w");
            fputs(str1,f1);
            fclose(f1);
        }
        else if(busno == 5)
        {
            f1 = fopen("tr5.txt","w");
            fputs(str1,f1);
            fclose(f1);
        }
    }
}



void name_number(int booking,char numstr[100])
{
    char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
    int number;
    FILE *a,*b;
    int i=0;
    strcat(numstr,".txt");
    strcat(tempstr1,numstr);
    strcat(tempstr2,numstr);
    a = fopen(tempstr1,"a");//for open the file to write the name in the file
    b = fopen(tempstr2,"a");//for open the file for writing the number in the file
    for(i=0; i<booking; i++)//for entering the person name and seat number in the file
    {
        printf("============================Enter the details for ticket no %d============================\n\n\n",i+1);
        printf("\t\tEnter the seat number:--->");
        scanf("%d",&number);
        printf("\t\tEnter the name of person:--->");
        scanf("%s",name[number-1]);
        printf("\n================================================================================================\n\n");
        printf("\n");
        itoa(number, tempstr, 10);
        fprintf(a,"%s ",name[number-1]);
        fprintf(b,"%s ",tempstr);

    }
    fclose(a);
    fclose(b);
}



int read_number(int busno)//for putting the numeric value in the array
{
    char tempstr[100],tempstr2[12]="number";
    FILE *a,*b;
    char numstr[100];
    int i=0,j=0,k;
    itoa(busno,numstr,10);
    strcat(numstr,".txt");
    strcat(tempstr2,numstr);
    a = fopen(tempstr2,"a+");//for open the file to write the name in the file
    while(!feof(a))
    {
        number[i][j] = fgetc(a);

        if(number[i][j] == ' ')
        {
            j=0;
            i++;
        }
        else
        {
            j++;
        }
    }
    k=i;
    for(i=0; i<k; i++)
    {
        num1[i] = atoi(number[i]);
    }
    fclose(a);
    return k;
}


void read_name(int busno)//for putting the numeric value in the array
{
    char tempstr1[12]="status";
    FILE *b;
    char numstr[100];
    int i=0,j=0,k=0;
    itoa(busno,numstr,10);
    strcat(numstr,".txt");
    strcat(tempstr1,numstr);
    b = fopen(tempstr1,"a+");//for open the file to write the name in the file
    while(!feof(b))
    {
        name[i][j] = fgetc(b);

        if(name[i][j] == ' ')
        {
            j=0;
            i++;
        }
        else
        {
            j++;
        }

    }
    name[i][j]='\0';
    k=i;
    fclose(b);
}

void status()
{
    system("cls");
    printf("========================= BUS RESERVATION SYSTEM =====================\n\n\n");
    int i,busno,index=0,j;
    printf("Enter the number of bus:---->");
    scanf("%d",&busno);
    j=read_number(busno);
    read_name(busno);
    printf("_______________________________________________________________________\n");
    printf("                                      Bus.no-->%d----> \n",busno,ch[busno-1]);
    printf("_________________________________________________________________________\n");
    char tempname[33][10]= {"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
        {
            printf("%d.%s\t",index+1,tempname[index+1]);
            index++;
        }
        printf("\n");
    }
}

void status_1(int busno)
{
    printf("Your Bus Number is %d ****** %s",busno,ch[busno-1]);
    system("cls");
    printf("===================== BUS RESERVATION SYSTEM ========================\n\n\n");
    int i,index=0,j;
    j=read_number(busno);
    read_name(busno);
    char tempname[33][10]= {"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
        {
            printf("%d.%s\t",index+1,tempname[index+1]);
            index++;
        }
        printf("\n");
    }
}


void cancle()
{
    int seat_no,i,j;
    char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
    printf("Enter the bus number:---->");
    scanf("%d",&busno);
    itoa(busno,numstr,10);
    strcat(numstr,".txt");
    strcat(tempstr1,numstr);
    strcat(tempstr2,numstr);
    read_number(busno);
    read_name(busno);
    status_1(busno);
    printf("Enter the seat number:--->");
    scanf("%d",&seat_no);
    FILE *a,*b;
    a = fopen(tempstr1,"w+");
    b = fopen(tempstr2,"w+");
    for(i=0; i<32; i++)
    {
        if(num1[i] == seat_no)
        {
            for(j=0; j<32; j++)
            {
                if(num1[j] != seat_no && num1[j] != 0)
                {
                    fprintf(b,"%d ",num1[j]);
                    fprintf(a,"%s",name[j]);
                }
                else if(num1[j] == seat_no && num1[j] != 0)
                {
                    strcpy(name[j],"Empty ");
                }
            }
        }
    }
    fclose(a);
    fclose(b);
    printf("\n\n");
    printf("============================================================================\n");
    printf("\t\t\t\tYour 1200 Taka Has Been Returned To Your Account \t\t\t\n");
    printf("===========================================================================\n");
}


void login()
{
    int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
    {
        system("cls");

        printf("\t\t********************************************************\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*        ===================================           *\n");
        printf("\t\t*         WELCOME TO BUS RIDE OF BANGLADESH            *\n");
        printf("\t\t*        ===================================           *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*                    Project Done                      *\n");
        printf("\t\t*                Monowar Hossain Nibir                 *\n");
        printf("\t\t*                Minhazul Amin Tomal                   *\n");
        printf("\t\t*                Md. Fayjul Islam Nahid                *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*    Department Of Computer Science & Engineering      *\n");
        printf("\t\t*               # EAST WEST UNIVERSITY #               *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t*                                                      *\n");
        printf("\t\t********************************************************\n\n\n");

        printf("\n:::::::::::::::::::::::::::::::::: LOGIN FORM  :::::::::::::::::::::::::::::::::  ");
        printf(" \n                       ENTER USERNAME(abc):-");
        scanf("%s", &uname);
        printf(" \n                       ENTER PASSWORD(123):-");
        while(i<10)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13) break;
            else printf("*");
            i++;
        }
        pword[i]='\0';
        i=0;
        if(strcmp(uname,"abc")==0 && strcmp(pword,"123")==0)
        {
            printf("  \n\n\n       WELCOME TO OUR SYSTEM ! ");
            printf("               LOGIN IS SUCCESSFUL ! ");
            printf("\n\n\n         Press any key to continue...");
            getch();
            break;
        }
        else
        {
            printf("\n         SORRY !");
            printf("           YOU ENTERED WRONG PASSWORD ! ");
            a++;

            getch();

        }
    }
    while(a<=2);
    if (a>2)
    {
        printf("\nSorry you have entered the wrong username and password for four times!!!");

        getch();

    }
    system("cls");
}

