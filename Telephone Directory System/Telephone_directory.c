//Telephone Directory System
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct record		//Universal Structure Declared
	{
	char name[30];
	char address[40];
	char tel_num[12];
	char cell_num[12];
	char email_id[30];
	}r;


/*Function used in Overall program are declared here*/

void title();
void menu();
int login(char username[10],char password[10]);
void welcome();
void a_key();
void find_error();
void addrec();
void disprec();
void delrec();
void editrec();
void l_case(char nm[30]);
void search_by_name(char nm[20]);
void search_by_tel_num(char nm[12]);
void search_by_cell_num(char nm[12]);
void search_by_email(char nm[20]);
void searchrec();
void center(char str[80],int row);
void mybox(int type,int start,int len,int wid);
void myline(int type,int start,int len);





/*Function to print text at the center of screen*/
void center(char str[80],int row)
{

	gotoxy((80-strlen(str))/2,row);
	printf("%s",str);
}

void mybox(int type,int start,int len,int wid)
{
	int i,j,k,a,b,c;
	int tol,tcl,bol,bcl,vl,hl;
	if(type==1)
		{
			tol=218;
			tcl=191;
			bol=192;
			bcl=217;
			vl=179;
			hl=196;
		}
	else if(type==2)
		{
			tol=201;
			tcl=187;
			bol=200;
			bcl=188;
			vl=186;
			hl=205;
		}
	else if(type==3)
		{
			tol=176;
			tcl=176;
			bol=176;
			bcl=176;
			vl=176;
			hl=176;
		}
	else if(type==4)
		{
			tol=177;
			tcl=177;
			bol=177;
			bcl=177;
			vl=177;
			hl=177;
		}
	else if(type==5)
		{
			tol=178;
			tcl=178;
			bol=178;
			bcl=178;
			vl=178;
			hl=178;
		}



	else
		{
			tol=248;
			tcl=248;
			bol=248;
			bcl=248;
			vl=248;
			hl=248;
		}


	//for starting row
	//Printing space before start
	for(i=0;i<start-1;i++)
		{
		printf(" ");
		}
	printf("%c",tol); //print opening L
		//printing line for 'len' times
	for(i=0;i<start+len;i++)
		{
		printf("%c",hl);
		}
	//printing Closing L in the top
	printf("%c",tcl);
	//for the middle lines
	for(j=0;j<wid;j++)
	{
		printf("\n");
		for(i=0;i<start-1;i++)
			{
			printf(" ");
			}
		printf("%c",vl);
		for(i=0;i<start+len;i++)
			{
			printf(" ");
			}
		printf("%c",vl);
	}


	//for ending row
	//Printing space before start
	printf("\n");
	for(i=0;i<start-1;i++)
		{
		printf(" ");
		}
	printf("%c",bol); //print closing L in the left of buttom
		//printing line for 'len' times
	for(i=0;i<start+len;i++)
		{
		printf("%c",hl);
		}
	//printing Closing L in the right of buttom
	printf("%c",bcl); //Your Box is Ready!!
	printf("\n");



}
void myline(int type,int start,int len)
{
	int i;
	int mid;
	if(type==1)
		{
			mid=196;
		}
	else if(type==2)
		{
			mid=205;
		}
	else if(type==3)
		{
			mid=220;
		}
	else if(type==4)
		{
			mid=45;
		}
	else if(type==5)
		{
			mid=254;
		}
	else if(type==6)
		{
			mid=176;
		}
	else if(type==7)
		{
			mid=177;
		}
	else if(type==8)
		{
			mid=178;
		}

	else
		{
			mid=219;
		}
	//printing space
	for(i=0;i<start-1;i++)
		{
			printf(" ");
		}
	//printing line
	for(i=0;i<len;i++)
		{
			printf("%c",mid);
		}

}

/*Function to display the title in the top*/
void title()
{
	clrscr();
	myline(2,1,80);
	center("TELEPHONE DIRECTORY SYSTEM",1);
	center("Developed By:SUBASH\n",2);
}


/*Function to check the username and password entered*/
int login(char username[10],char password[10])
{
	if(strcmp(username,"subash")==0)
		{
		if(strcmp(password,"123456789")==0)
			{
			return 1;
			}
		}
	else
		{
		  return 0;
		}
return 0;
}



/*Function that asks any key to enter*/
void a_key()
{
	center("ENTER ANY KEY!",24);
	getch();
	menu();
}


/*Display welcome screen after logging in*/
void welcome()
{
	clrscr();
	title();
	center("Welcome to the Telephone Directory",4);
	gotoxy(1,5);
	myline(1,23,34);
	center("Contact Me @",10);
	gotoxy(1,11);
	myline(2,34,12);
	gotoxy(1,12);
	mybox(1,20,28,5);
	gotoxy(1,13);
	printf("%32s : %s\n","Email","itssubas@gmail.com");
	printf("%32s : %s\n","Contact","-");
	printf("%32s : %s\n","Facebook","http://www.facebook.com/subasnet1");
	printf("%43s\n","All rights reserved");
	a_key();
}



/*Displays main menu options*/
void menu()
{
	char ch;
	clrscr();
	title();
	mybox(2,14,35,8);

	center("OPTIONS",4);
	center("-------",5);
	center("    Press [1] to ADD new record",6);
	center("     Press [2] to VIEW all records",7);
	center("   Press [3] to SEARCH record",8);
	center("     Press [4] to EDIT the record	",9);
	center("   Press [5] to DELETE record",10);
	center("Press [ESC] to EXIT   \n\n",11);
		  repeat:
	center("YOUR CHOICE:",15);
		ch=getche();
	if(ch==27)
	{
		center("Thank You!",17);
		getch();
		exit();
	}
	printf("\n");
	switch (ch)
	{
		case '1':
			addrec();
			break;
		case '2':
			disprec();
			break;
		case '3':
			searchrec();
			a_key();
			break;
		case '4':
			editrec();
			break;
		case '5':
			delrec();
			break;
		default:
			center("CHOICE INVALID!",14);
			goto repeat;
			//break;
	}
}



/*Function that runs when there occurs error during file opening.*/
void find_error()
{
	clrscr();
	title();
		center("Something Went Wrong. File Cannot b Opened. :(",5);
	a_key();
}



/*This function performs entire searching Operation*/
void searchrec()
{
	char ch;
	char s[20];
	clrscr();
	title();
	center("Searching Record...",4);
	printf("\n");
	mybox(2,14,35,8);
	printf("\n");
	//Displaying search options
	center("Search Options:",6);
	center("-----------------",7);
	center(" Press -> 1-to Search by NAME          ",8);
	center("  Press -> 2-to Search by TELEPHONE NUMBER",9);
	center("Press -> 3-to Search by MOBILE NUMBER",10);
	center("Press -> 4-to Search by EMAIL ADDRESS",11);
	center("Press -> 5-to Get Back to MAIN MENU  ",12);
		top:	//When wrong choice is entered, definately it prompts to enter again
	center("YOUR CHOICE:",17);
		ch=getche();
		switch(ch)
		{
		case '1':
			center("Enter Name:",18);
			gets(s);
			search_by_name(s);
			break;
		case '2':
			center("Enter Telephone No.:",18);
			gets(s);
			search_by_tel_num(s);
			break;
		case '3':
			center("Enter Mobile No:",18);
			gets(s);
			search_by_cell_num(s);
			break;
		case '4':
			center("Enter Email Address:",18);
			gets(s);
			search_by_email(s);
			break;
		case '5':
			menu();
			break;
		default:
			center("Choice Invalid!!",16);
			goto top;
		}

}


/*Searches if the required name is there in file or not*/
void search_by_name(char nm[20])
{
	FILE *fp;
	int flag=0;
	title();
	fp=fopen("contact.txt","rb+");
	if(fp==NULL)
	{
		find_error();
	}
		while(fread(&r,sizeof(r),1,fp)==1)
		{
			if(strcmp(strlwr(r.name),strlwr(nm))==0)
				{
				flag=1;
				printf("\nRecord Found for '%s'\n",nm);
				myline(3,1,40);
				printf("\n");
				printf("%15s : %s\n","Name",r.name);
				printf("%15s : %s\n","Address",r.address);
				printf("%15s : %s\n","Telephone No",r.tel_num);
				printf("%15s : %s\n","Mobile No",r.cell_num);
				printf("%15s : %s\n","Email",r.email_id);
				myline(3,1,40);
				}
		}
	fclose(fp);
	if(flag==0)
	{
		center("Record Not Found!! :(",5);
		center("Enter Any Key",6);
		getch();
		searchrec();
	}
}


/*Searching by telephone number*/
void search_by_tel_num(char nm[12])
{
	FILE *fp;
	int flag=0;
	title();
	fp=fopen("contact.txt","rb+");
	if(fp==NULL)
	{
		find_error();
	}
	while(fread(&r,sizeof(r),1,fp)==1)
	{
		if(strcmp(strlwr(r.tel_num),strlwr(nm))==0)
			{
				flag=1;
				printf("\nRecord Found for '%s'\n",nm);
				myline(3,1,40);
				printf("\n");
				printf("%15s : %s\n","Name",r.name);
				printf("%15s : %s\n","Address",r.address);
				printf("%15s : %s\n","Telephone No",r.tel_num);
				printf("%15s : %s\n","Mobile No",r.cell_num);
				printf("%15s : %s\n","Email",r.email_id);
				myline(3,1,40);
			}
	}
	fclose(fp);
	if(flag==0)
	{
		center("Record Not Found!! :(",5);
		center("Enter Any Key",6);
		getch();
		searchrec();
	}
}


/*Searching by mobile number*/
void search_by_cell_num(char nm[12])
{
	FILE *fp;
	int flag=0;
	title();
	fp=fopen("contact.txt","rb+");
	if(fp==NULL)
	{
		find_error();
	}
	while(fread(&r,sizeof(r),1,fp)==1)
	{
		if(strcmp(strlwr(r.cell_num),strlwr(nm))==0)
			{
				flag=1;
				printf("\nRecord Found for '%s'\n",nm);
				myline(3,1,40);
				printf("\n");
				printf("%15s : %s\n","Name",r.name);
				printf("%15s : %s\n","Address",r.address);
				printf("%15s : %s\n","Telephone No",r.tel_num);
				printf("%15s : %s\n","Mobile No",r.cell_num);
				printf("%15s : %s\n","Email",r.email_id);
				myline(3,1,40);

			}
	}
	fclose(fp);
	if(flag==0)
	{
		center("Record Not Found!! :(",5);
		center("Enter Any Key",6);
		getch();
		searchrec();
	}
}


/*Searching by Email Address*/
void search_by_email(char nm[20])
{
	FILE *fp;
	int flag=0;
	title();
	fp=fopen("contact.txt","rb+");
	if(fp==NULL)
	{
		find_error();
	}
	while(fread(&r,sizeof(r),1,fp)==1)
	{
		if(strcmp(strlwr(r.email_id),strlwr(nm))==0)
			{
				flag=1;
				printf("\nRecord Found for '%s'\n",nm);
				myline(3,1,40);
				printf("\n");
				printf("%15s : %s\n","Name",r.name);
				printf("%15s : %s\n","Address",r.address);
				printf("%15s : %s\n","Telephone No",r.tel_num);
				printf("%15s : %s\n","Mobile No",r.cell_num);
				printf("%15s : %s\n","Email",r.email_id);
				myline(3,1,40);
			}

	}
	fclose(fp);
	if(flag==0)
	{
		center("Record Not Found!! :(",5);
		center("Enter Any Key",6);
		getch();
		searchrec();
	}

}




void main()
{
int chk_user,i;
char name[10],password[10],ch;
clrscr();
enter_again:
title();

printf("\n");
mybox(5,22,14,2);
center("Username:",5);
	gets(name);

center("Password:",6);
	for(i=0;i<9;i++)
		{
		password[i]=getch();
		printf("*");
		}
		password[i]='\0';
chk_user=login(name,password);
if(chk_user==1)
	{
	center("Loging In...",9);
	center("ENTER ANY KEY!",13);
	getch();

	welcome();
	}
else
	{
	center("Username or Password INCORRECT.",10);
	go:
	center("       Press ->1 to Enter Again",11);
	center("Press ->2 to Quit",12);
	gotoxy(39,13);
		ch=getche();
		if(ch=='1')
			{
			goto enter_again;
			}
		else if(ch=='2')
			{
			center("Thank You!",15);
			getch();
			exit();
			}
		else
			{
			goto go;
			}

	}



}



/*This function is called when a new record is to be added*/
void addrec()
{
	FILE *fp;
	struct record r;
	char more;
	int count=0;
	fp=fopen("contact.txt","ab+");
	if(fp==NULL)
		{
		find_error();
		}
	do
	{
		clrscr();
		title();
		printf("%22s\n","Adding New Record...");
		myline(3,3,37);
			printf("\n");
		printf("%15s : ","Name");
			gets(r.name);
		printf("%15s : ","Address");
			gets(r.address);
		printf("%15s : ","Telephone No.");
			gets(r.tel_num);
		printf("%15s : ","Mobile No.");
			gets(r.cell_num);
		printf("%15s : ","Email");
			gets(r.email_id);
		myline(3,3,37);
		fwrite(&r,sizeof(r),1,fp);
		printf("\nRecord of '%s' Successfully Stored...\n",r.name);
			count+=1;
		printf("Any More[Y/N]:");
			more=getche();

	}while(more=='y'||more=='Y');
	fclose(fp);
	printf("\n%d Records Added!",count);
	a_key();
}


/*It displays the list of records added*/
void disprec()
{

	FILE *fp;
	int counter=0;
	clrscr();
	title();
	fp=fopen("contact.txt","rb+");
	if(fp==NULL)
		{
		find_error();
		}
	printf("Displaying all Records..\n");
	myline(1,1,80);
	printf("%-18s%-17s%-11s%-11s%-20s\n","NAME","ADDRESS","TEL.NO","MOB NO","EMAIL");
	myline(1,1,80);
	while(fread(&r,sizeof(r),1,fp)==1)
	       {
		       counter+=1;
		       printf("%-18s%-17s%-11s%-11s%-20s\n",r.name,r.address,r.tel_num,r.cell_num,r.email_id);
	       }
	myline(1,1,80);
	fclose(fp);
	printf("\nTotal Records Found:%d",counter);
	a_key();

}


/*It deletes the record desired by user. You have to SEARCH BY NAME*/
void delrec()
{
	FILE *fp;
	FILE *temp;
	int flag=1;
	char k_word[20],ch;
	title();
	printf("\nDeleting Record...");
	myline(3,1,40);
	printf("\n\nEnter Name to Delete :");
		gets(k_word);
	fp=fopen("contact.txt","rb+");
	temp=fopen("tempfile.txt","ab+");
		if(fp==NULL||temp==NULL)
			{
				find_error();
			}
	while(fread(&r,sizeof(r),1,fp)==1)
	{
	if(strcmp(strlwr(r.name),strlwr(k_word))==0)
		{
		printf("Record Found for '%s'\n",k_word);
		myline(3,1,40);
		printf("\n");
		printf("%15s : %s\n","Name",r.name);
		printf("%15s : %s\n","Address",r.address);
		printf("%15s : %s\n","Telephone No",r.tel_num);
		printf("%15s : %s\n","Mobile No",r.cell_num);
		printf("%15s : %s\n","Email",r.email_id);
		myline(3,1,40);
		printf("\nDo you Want to Delete This Record?[Y/N]");
			ch=getche();
			if(ch=='y'||ch=='Y')
				{
					printf("\nRecord Successfully Deleted!");
					flag=0;
					continue;
				}
			else
				{
					goto down;
				}
		}
	else
		{
		down:
		fwrite(&r,sizeof(r),1,temp);
		}


	}
	fclose(fp);
	fclose(temp);
	remove("contact.txt");
	rename("tempfile.txt","contact.txt");

	if(flag==1)
		{
			center("Sorry, Record Not Found!",8);
			a_key();
		}
		a_key();
}



/*It searches record by name,displays it and asks user to enter new record*/
void editrec()
{
	FILE *fp;
	int flag=1;
	long int size=sizeof(r);
	char k_word[20];
	title();
	printf("Editing Record...\n");
	myline(3,1,40);
	printf("\nEnter Name :");
		gets(k_word);

	fp=fopen("contact.txt","rb+");
		if(fp==NULL)
			{
				find_error();
			}
		fflush(stdin);
	while(fread(&r,sizeof(r),1,fp)==1)
	{
	if(strcmp(strlwr(r.name),strlwr(k_word))==0)
		{
		flag=1;
		printf("\nOld Record of '%s'\n",k_word);
		myline(2,1,40);
		printf("\n");
		printf("%15s : %s\n","Name",r.name);
		printf("%15s : %s\n","Address",r.address);
		printf("%15s : %s\n","Telephone No",r.tel_num);
		printf("%15s : %s\n","Mobile No",r.cell_num);
		printf("%15s : %s\n","Email",r.email_id);
		myline(2,1,40);
		printf("\nEnter New Record...\n");
	printf("%15s : ","Name");
		gets(r.name);
	printf("%15s : ","Address");
		gets(r.address);
	printf("%15s : ","Telephone No.");
		gets(r.tel_num);
	printf("%15s : ","Mobile No.");
		gets(r.cell_num);
	printf("%15s : ","Email");
		gets(r.email_id);
	myline(3,1,40);

		printf("\nRecord Successfully Edited....");
		fseek(fp,-size,SEEK_CUR);
		fwrite(&r,sizeof(r),1,fp);
		}
	else
		{
			flag=0;
		}
	}
	fclose(fp);
	if(flag==0)
		{
			center("Sorry, Record Not Found! :(",6);
			a_key();
		}
		a_key();
}


/*Date:2071/11/26 TUESDAY*/
/*Copyright : Subash Basnet*/

