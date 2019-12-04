#include<stdio.h>
#include <string.h>
#include<conio.h>
#include <stdlib.h>
int empty();
int empty2();
void inserting();
void displaying();
void searching();
void deletefiling();
void updation();
void symptoms();
void heart_disease();
void dirrehea();
void thyroidism();
void migrane();
void malaria();
void dangue();
void eye_infection();
void dental_problem();
void food_poision();
void ear_infection();

void symptoms()
{
	int n;
	printf("\n OKAY,Lets start with the diagonsis ");
	printf("\nWhich of the following symptoms are you facing: \n");
	printf("\n1. High blood Pressure\n");
    printf("2. vomitting\n");
    printf("3. lack of concentration\n");
    printf("4. immense headache\n");
    printf("5. High fever\n");
    printf("6. pain in joints\n");  
    printf("7. Pain in eyes\n");
    printf("8. tooth ache \n");
    printf("9. Blurry vision or tingling in arms\n");
    printf("10. Pain in ear?\n");
    printf("enter symptom number :");
    scanf("%d",&n);
    
    if(n==1)
    {
    	heart_disease();
	}
	if(n==2)
	{
		dirrehea();
	}
    if(n==3)
    {
    	thyroidism();
	}
	if(n==4)
	{
		migrane();
	}
	if(n==5)
	{
		malaria();
	}
	if(n==6)
	{
		dangue();
	}
	if(n==7)
	{
		eye_infection();
	}
	if(n==8)
	{
		dental_problem();
	}
	if(n==9)
	{
		food_poision();
	}
	if(n==10)
	{
		ear_infection();
	}
	if(n>=11 || n<=0)
	{
		printf("Invalid choice!");
		symptoms();
	}
	
    printf("\n");
}
struct doctor
{
 char name[100];
 int id;
 char spec[100];
 char qual[100];
 char t[10];
}dr;

void heart_disease()
{

	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.Frequent sweating? \n");
	printf("2.Shortness of breath? \n");
	printf("3.Chest pain? \n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1|| i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("\n");
		printf("The disease maybe a heart disease!");
		printf("\n\n");
		printf("\nWe would suggest you to see a cardiologist!\n");
		printf("Here is List Of All Doctors Of our hospital\n");
		FILE *fp;
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
  printf("Doctor ID %d is not available in the file\n",r);
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 }
 fclose(fp);
}
}

void dirrehea()
{
	int i;
	FILE *fp;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.nausea? \n");
	printf("2.loose stools? \n");
	printf("3.abdominal pain? \n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be dirrehea!");
		printf("\n\n");
		printf("\nWe would suggest you to see a physician!");
	printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
   }
 fclose(fp);

}
}
void thyroidism()
{
    FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.mood disorder? \n");
	printf("2.fatigue? \n");
	printf("3.frequent weight gain or loss?\n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be thyroidism!");
		printf("\n\n");
		printf("\nWe would suggest you to see an endicrinologist!");
		printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void migrane()
{
    FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.Loss of appetite? \n");
	printf("2.Pale skin?\n");
	printf("3.Senstivity to light,noise and smell?\n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be migrane!");
		printf("\n\n");
		printf("\nWe would suggest you to see a physician!");
		printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "r");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void malaria()
{
	FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.muscle pain? \n");
	printf("2.vomitting? \n");
	printf("3.nausea?\n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid !\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be malaria!");
		printf("\n\n");
		printf("\nWe would suggest you to see a physician!");
        printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void dangue()
{
    FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.skin rash? \n");
	printf("2.pain behind eyes? \n");
	printf("3.nausea?\n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be dangue!");
		printf("\n\n");
		printf("\nWe would suggest you to see a physician!");
	    printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void eye_infection()
{
	FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.itchy eyes? \n");
	printf("2.burning in eyes? \n");
	printf("3.redness in eyes?\n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be an eye infection!");
		printf("\n\n");
		printf("\nWe would suggest you to see an eye specilist!");
        printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void dental_problem()
{
	FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.bloody gums? \n");
	printf("2.swelling in face or cheeks? \n");
	printf("3.senstivity to the pressure of chewing and eating? \n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be a dental problem!");
		printf("\n\n");
		printf("\nWe would suggest you to see a dentist!");
	printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void food_poision()
{
	FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.excessive thirst or dry mouth? \n");
	printf("2.oral temperature higher than 100.4 F? \n");
	printf("3.bloody vomit or stools? \n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be food poisioning!");
		printf("\n\n");
		printf("\nWe would suggest you to see a physician!");
	printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctor", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
void ear_infection()
{
	FILE *fp;
	int i;
	printf("\nOkay! Now please answer the following questions to help us analyse your problem.\n");
	printf("1.Do you experience a spinning sensation? \n");
	printf("2.Difficulty in hearing? \n");
	printf("3.Any sort of discharge from the ear? \n");
	printf("\nHow many symptoms are true? ");
	scanf("%d",&i);
	if(i==1 || i==0)
	{
		symptoms();
	}
	if(i>3)
	{
		printf("Invalid choice!\n");
		symptoms();
	}
	else if(i==2 || i==3)
	{
		printf("The disease may be an ear infection!");
		printf("\n\n");
		printf("\nWe would suggest you to see an ENT!");
	printf("Here is List Of All Doctors Of our hospital\n");
		fp = fopen("doctor", "rb");
		if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
		while( fread(&dr, sizeof(dr), 1, fp) == 1 )
    {
        printf("Name: %s \n", dr.name);
        printf("ID: %d \n", dr.id);
        printf("Specialization: %s \n", dr.spec);
        printf("Qualification: %s \n", dr.qual);
        printf("timings: %s \n\n", dr.t);
    }
}       
		fclose(fp);
		int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not available in the file\n",r);
}
 else
 {
  fp = fopen("doctort", "rb");
  while (fread(&dr, sizeof(dr), 1, fp))
  {
   s = dr.id;
   if (s == r)
   {
    printf("Thanks! Your appointment is Booked\n");
    printf("KINDLY! Update Your Record\n\t\t\tTHANK YOU\t\t\t");
   }
  }
 
 fclose(fp);
}
}
struct Patient
{
 int nic;
 char name[100];
 int age;
 char p[15];
 char Disease[20];
}stud;
//    FUNCTION TO INSERT RECORDS TO THE FILE
void insert()
{
 FILE *fp;
 fp = fopen("Record.txt", "a");
 printf("Enter the last four digit of your NIC :");
 scanf("%d", &stud.nic);
 printf("Enter the fisrt Name :");
 scanf("%s",&stud.name);
 printf("Enter the age :");
 scanf("%d", &stud.age);
 printf("Enter the phone number :");
 scanf("%s", &stud.p);
 printf("Enter Your Disease if your are new patient write NULL:");
 scanf("%s", &stud.Disease);
 fwrite(&stud, sizeof(stud), 1, fp);
 fclose(fp);
 printf("RECORD INSERTED!");
 symptoms();
}
//    FUNCTION TO DISPLAY RECORDS
void disp()
{
 FILE *fp1;
 fp1 = fopen("Record.txt", "r");
 if(fp1==NULL)
 {
 	printf("There is no previous Pateint records");
 }
 else
 {
 while (fread(&stud, sizeof(stud), 1, fp1))
 {
 
 printf("\nNIC = %d", stud.nic);
    printf("\nName    = %s", stud.name);
    printf("\nage    = %d", stud.age);
	printf("\nphone number    = %s", stud.p);
	printf("\nprevious disease    = %s\n", stud.Disease);
}
}
 fclose(fp1);
}
//    FUNCTION TO SEARCH THE GIVEN RECORD
void search()
{
 FILE *fp2;
 int r, s, avl;
 printf("\nEnter the last four digits of NIC you want to search  :");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("This record is not available in the file\n");
 }
 else
 {
  fp2 = fopen("Record.txt", "r");
  while (fread(&stud, sizeof(stud), 1, fp2))
  {
   s = stud.nic;
   if (s == r)
   {
   	printf("RECORD SEARCHED!");
    printf("\nNIC = %d", stud.nic);
    printf("\nName    = %s", stud.name);
    printf("\nage    = %d", stud.age);
	printf("\nphone number    = %s", stud.p);
	printf("\nprevious disease    = %s\n", stud.Disease);
    symptoms();
   }
}
   if(s!=r)
   {
   printf("Kindly! register yourself\n");
   }
  fclose(fp2);
 }

}
//    FUNCTION TO UPDATE THE RECORD
void update()
{
 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 printf("Enter NIC to update:");
 scanf("%d", &r);

 if (r == 0)
 {
  printf("NIC %d is not Available in the file", r);
 }
 else
 {
  fpo = fopen("Record.txt", "r");
  fpt = fopen("TempFile.txt", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.nic;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
   else
   {
    printf("\n\t1. Update age of NIC %d", r);
    printf("\n\t2. Update Your Disease\n");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
     printf("Enter age : ");
     scanf("%d", &stud.age);
     break;
    case 2:
     printf("Enter disease in this form ****-**** : ");
     scanf("%s", &stud.Disease);
     break;
    default:
     printf("Invalid Selection");
     break;
    }
    fwrite(&stud, sizeof(stud), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record.txt", "w");
  fpt = fopen("TempFile.txt", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
  {
   fwrite(&stud, sizeof(stud), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf("RECORD UPDATED");
 }
}


//FUNCTION TO CHECK THE FILE IS EMPTY OR NOT
int empty()
{
 int c = 0;
 FILE *fp;
 fp = fopen("Record.txt", "r");
 while (fread(&stud, sizeof(stud), 1, fp))
  c = 1;
 fclose(fp);
 return c;
}
// MAIN PROGRAM
void main()
{
	printf("\t\t\t00000000000000000000000000000000000000000000000000000000000000000000\t\t\t\n");
	printf("\n");
	printf("\t\t\t00000000000000000000000000000000000000000000000000000000000000000000\t\t\t\n");
	printf("\n");
	printf("\t\t\t*********************HOSPITAL MANAGEMENT SYSTEM*********************\t\t\t\n");
	printf("\n");
	printf("\t\t\t00000000000000000000000000000000000000000000000000000000000000000000\t\t\t\n");
	printf("\n");
	printf("\t\t\t00000000000000000000000000000000000000000000000000000000000000000000\t\t\t\n");
	printf("\n");
 int emp;
 int pin,d;
 int y=786;
 int c,x;
 char ch;
 printf("1. Access As Admin?\n2. Access As Patient?:\n");
 scanf("%d",&x);
 if(x==2)
 {
 do
 {
  printf("\n\t---Select your choice---------\n");
  printf("\n\t1. NEW PATIENT? INSERT YOUR RECORD\n\t2. IF YOU ARE OUR PREVIOUS PATIENT PLEASE SEARCH YOUR RECORD");
  printf("\n\t3. UPDATE YOUR INFORMATION\n\t4. EXIT\n");
  printf("\n\n------------------------------------------\n");
  printf("\nEnter your choice:");
  scanf("%d", &c);
  fflush(stdin);
  printf("\n");
  switch (c)
  {
  case 1:
   insert();
   break;
  case 2:
   search();
   break;
  case 3:
   update();
   break;
   case 4:
   	exit(1);
  default:
   printf("\nYour choice is wrong\nPlease try again...\n");
   break;

  }
 } while (c != 5);
}
if(x==1)
{
	int pin,d;
	int y=786;
	printf("enter pin code:\n");
	scanf("%d",&pin);
	if(pin==y)
	{
	do
	{
	
  printf("\n\t---Select your choice---------\n");
  printf("\n\t1. INSERT NEW DOCTOR\n\t2. DISPLAY ALL DOCTORS\n\t3. SEARCH ANY SPECIFIC DOCTOR");
  printf("\n\t4. DELETE DOCTOR RECORD\n\t5. UPDATE DOCTOR INFORMATION\n\t6. DISPLAY ALL PATIENTS RECORDS\n\t7. EXIT\n");
  printf("\n\n------------------------------------------\n");
  printf("\nEnter your choice:");
  scanf("%d", &d);
  printf("\n");
  switch (d)
  {
  case 1:
   inserting();
   break;
  case 2:
    emp = empty2();
   if (emp == 0)
    printf("\nThe file is EMPTY\n");
   else
   displaying();
   break;
  case 3:
   searching();
   break;
  case 4:
   deletefiling();
   break;
  case 5:
   updation();
   break;
  case 6:
  emp = empty();
   if (emp == 0)
   printf("\nThe file is EMPTY\n");
   else
   disp();
   break;
  case 7:
  exit(1);
   break;
  default:
   printf("\nYour choice is wrong\nPlease try again...\n");
   break;

  }
 } while (d != 6); 
}
if(pin!=y)
{
 	printf("Wrong pin code!");
}		
}
}

//    FUNCTION TO DISPLAY DOCTORS RECORDS
void displaying()
{
 FILE *fp1;
 fp1 = fopen("doctor", "r");
 while (fread(&dr, sizeof(dr), 1, fp1))
 {
 printf("\nID= %d", dr.id);
    printf("\nName       = %s", dr.name);
    printf("\nSpecialization    = %s", dr.spec);
    printf("\nQualification    =%s",dr.qual);
    printf("\nTime       =%s\n",dr.t );
}
 fclose(fp1);
}
//    FUNCTION TO SEARCH THE GIVEN DOCTOR RECORD
void searching()
{
 FILE *fp2;
 int r, s, avl;
 printf("\nEnter the doctor ID you want to search  :");
 scanf("%d", &r);
 if (r == 0)
  printf("Doctor ID %d is not available in the file\n",r);
 else
 {
  fp2 = fopen("doctor", "r");
  while (fread(&dr, sizeof(dr), 1, fp2))
  {
   s = dr.id;
   if (s == r)
   {
    printf("\nID= %d", dr.id);
    printf("\nName    = %s", dr.name);
    printf("\nSpecialization    = %s\n", dr.spec);
    printf("\nQualification    =%s\n",dr.qual);
   }
  }
  fclose(fp2);
 }
}
//    FUNCTION TO DELETE A DOCTOR RECORD


void deletefiling()
{
 FILE *fpo;
 FILE *fpt;
 int r, s;
 printf("Enter the doctor ID you want to delete :");
 scanf("%d", &r);
 if (avlid(r) == 0)
  printf("Doctor ID %d is not available in the file\n", r);
 else
 {
  fpo = fopen("doctor", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&dr, sizeof(dr), 1, fpo))
  {
   s = dr.id;
   if (s != r)
    fwrite(&dr, sizeof(dr), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("doctor", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&dr, sizeof(dr), 1, fpt))
   fwrite(&dr, sizeof(dr), 1, fpo);
  printf("\nRECORD DELETED\n");
  fclose(fpo);
  fclose(fpt);
 }
}
//    FUNCTION TO UPDATE THE RECORD
void updation()
{
 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 printf("Enter doctor ID to update:");
 scanf("%d", &r);
 if (r == 0)
 {
  printf("Doctor ID %d is not Available in the file", r);
 }
 else
 {
  fpo = fopen("doctor", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&dr, sizeof(dr), 1, fpo))
  {
   s = dr.id;
   if (s != r)
    fwrite(&dr, sizeof(dr), 1, fpt);
   else
   {
    printf("\n\t1. Update Name of ID %d", r);
    printf("\n\t2. Update Specialization of ID %d", r);
    printf("\n\t3. Update Qualification  of ID %d",r);
    printf("\n\t4. Update Timing of ID %d",r);
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
     printf("Enter Name:");
     scanf("%s", &dr.name);
     break;
    case 2:
     printf("Enter Specialization : ");
     scanf("%s", &dr.spec);
     break;
    case 3:
     printf("Enter Qualification: ");
     scanf("%s", &dr.qual);
     break;
    case 4:
     printf("Enter Timing: ");
     scanf("%s", &dr.t);
     break;
    default:
     printf("Invalid Selection");
     break;
    }
    fwrite(&dr, sizeof(dr), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("doctor", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&dr, sizeof(dr), 1, fpt))
  {
   fwrite(&dr, sizeof(dr), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf("RECORD UPDATED");
 }
}

//    FUNCTION TO CHECK GIVEN NIC IS AVAILABLE //
int avlid(int ino)
{
 FILE *fp;
 int c = 0;
 fp = fopen("doctor", "r");
 while (!feof(fp))
 {
  fread(&dr, sizeof(dr), 1, fp);

  if (ino == dr.id)
  {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}
//FUNCTION TO CHECK THE FILE IS EMPTY OR NOT
int empty2()
{
 int c = 0;
 FILE *fp;
 fp = fopen("doctor", "r");
 while (fread(&dr, sizeof(dr), 1, fp))
  c = 1;
 fclose(fp);
 return c;
}
//    FUNCTION TO INSERT RECORDS TO THE FILE
void inserting()
{
 FILE *fp;
 fp = fopen("doctor", "a");
 printf("Enter the doctor's first name   :");
 scanf("%s", &dr.name);
 printf("Enter the last four digit of NIC as doctor ID   :");
 scanf("%d", &dr.id);
 printf("Enter the specialization of doctor    :");
 scanf("%s", &dr.spec);
 printf("Enter the qualification of doctor     :");
 scanf("%s", &dr.qual);
 printf("Enter the timing of doctor    :");
 scanf("%s", &dr.t);
 fwrite(&dr, sizeof(dr), 1, fp);
 fclose(fp);
}
