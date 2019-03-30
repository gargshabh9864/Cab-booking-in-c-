#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
fstream fin;
int rate;
int add;
int cab=0;
//Declaration of variables.
class project
{
       public:
       int dd,yy,mm,x,sd,mu,su,ht;
       int ch,cwno,pay;
       char wb,cb,cname[20],carn[20],name[30],pick[20],drop[20];
       long cno;
       void getdata();
       void display();
       int Hatchback();
       int Sedan();
       int MUV();
       int SUV();
       int Payment();
       void menu();
       int car();
       int dated();
       int monthm();
       int yeary();
}p1, proj;

// Function to get data.
void project ::getdata()
{
	system("cls");
	cab=1;
	project p1;
	fin.open("cabhub.dat",ios::app,ios::out|ios::binary);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                          Enter your name : ";
		gets(name);
		fin<<name;
	system("cls");
	int z=car();
	switch(z)
	{
	    case 1:strcpy(carn,"Celerio");
		   break;
	    case 2:strcpy(carn,"Indica");
		   break;
	    case 3:strcpy(carn,"Verito Vibe");
		   break;
	    case 4:strcpy(carn,"Etios Liva");
		    break;
	    case 5:strcpy(carn,"Baleno");
		   break;
	    case 6:strcpy(carn,"Eon");
		   break;
	    case 7:strcpy(carn,"Polo");
		   break;
	    case 8:strcpy(carn,"Swift");
		   break;
	    case 9:strcpy(carn,"Wagon R");
		   break;
	    case 10:strcpy(carn,"Stingry");
		    break;
	    case 11:strcpy(carn,"Swift Dzire");
		    break;
	    case 12:strcpy(carn,"Indigo");
		    break;
	    case 13:strcpy(carn,"Verito");
		    break;
	    case 14:strcpy(carn,"Etios");
		    break;
	    case 15:strcpy(carn,"Amaze");
		    break;
	    case 16:strcpy(carn,"Vento");
		    break;
	    case 17:strcpy(carn,"Jetta");
		    break;
	    case 18:strcpy(carn,"SX4");
		    break;
	    case 19:strcpy(carn,"Verna");
		    break;
	    case 20:strcpy(carn,"Acent");
		    break;
	    case 21:strcpy(carn,"Duster");
		    break;
	    case 22:strcpy(carn,"Qwid");
		    break;
	    case 23:strcpy(carn,"Lodgy");
		    break;
	    case 24:strcpy(carn,"S-Cross");
		    break;
	    case 25:strcpy(carn,"Etios Cross");
		    break;
	    case 26:strcpy(carn,"Quanto");
		    break;
	    case 27:strcpy(carn,"Creta");
		    break;
	    case 28:strcpy(carn,"Captive");
		    break;
	    case 29:strcpy(carn,"Koleos" );
		    break;
	    case 30:strcpy(carn,"SantaFe");
		    break;
	    case 31:strcpy(carn,"Xylo");
		    break;
	    case 32:strcpy(carn,"Tevera");
		    break;
	    case 33:strcpy(carn,"Innova");
		    break;
	    case 34:strcpy(carn,"Scorpio");
		    break;
	    case 35:strcpy(carn,"Datsun Go+");
		    break;
	    case 36:strcpy(carn,"Sumo");
		    break;
	    case 37:strcpy(carn,"Bolero");
		    break;
	    case 38:strcpy(carn,"Enjoy");
		    break;
	    case 39:strcpy(carn,"Ertiga");
		    break;
	    case 40:strcpy(carn,"Movas");
		    break;
	    default:;
	    }
	   fin<<carn;
	   cout<<name<<" car is "<<carn;
	   cout<<"\nwith rate "<<rate;
	   cout<<" with additional charges "<<add<<"\n";
	   system("pause");
	   system("cls");
	   cout<<"\nEnter pickup point : ";
		gets(pick);
		fin<<pick;
	   cout<<"\nEnter drop place : ";
		gets(drop);
		fin<<drop;
	   int date=dated();
		fin<<date;
	   int month=monthm();
		fin<<month;
	   int year=yeary();
		fin<<year;
	   cout<<"\n"<<name<<" your car has been booked\n";
	   cout<<"Your car will be there at "<<pick;
	   cout<<"\n on ";
	   cout<<date<<"/"<<month<<"/"<<year;
	   int p= Payment();
	   if(p==1)
	   {
		char pay[20]={"Card"};
		       fin<<pay;
	   }
	   else
	   {
		char pay[20]={"Cash"};
		       fin<<pay;
	   }

	   fin.write((char*)&p1,sizeof(p1));
	   fin.close();
}

//To display types of cars.
int project::car()
{
	int car1;
	s:
	cout<<"\nTypes of cars\n";
	cout<<"\n1. Hatchback (50 + 8 Rs/km(Non-AC),10 Rs/km(AC))"<<"\n"
	    <<"\n2. Sedan    (70 + 13 Rs/km(Non-AC),15 Rs/km(AC))"<<"\n"
	    <<"\n3. MUV      (100 + 15 Rs/km(Non-AC),17 Rs/km(AC))"<<"\n"
	    <<"\n4. SUV      (150 + 18 Rs/km(Non-AC),21 Rs/km(AC))"<<"\n"
	    <<"\n5. For main menu  ";
	cout<<"\n\nEnter your choice of car- ";
	cin>>ch;
	switch(ch)
	{
		case 1:car1=Hatchback();
		       break;
		case 2:car1=Sedan();
		       break;
		case 3:car1=MUV();
		       break;
	    case 4:car1=SUV();
		       break;
	    case 5: system("pause");
		       system("cls");
		       menu();
		       break;
	       default:cout<<"\nEntered wrong choice";
			goto s;
	   }
return car1;
}

//Hatchback function definition.
int project :: Hatchback()
{
	lb:
	cout<<"Names of cars\n\n";
	char ch1[20][20]={"1.Celerio\t\t","2.Indica\t","\t3.Verito Vibe\n","4.Etios Liva\t\t","5.Baleno\t\t","6.Eon\n","7.Polo\t\t\t","8.Swift \t", "\t9.WagonR\n","10.Stingry\n"};
	for(int i=0;i<10;i++)
	{
		cout<<ch1[i];
	}
	cout<<"\n\nEnter your choice == ";
	cin>>ht;
	rate=8;
	add=50;
	char c;
	switch(ht)
	{
		   case 1:
		   case 2:
		   case 3:
		   case 4:
		   case 5:
		   case 6:
		   case 7:
		   case 8:
		   case 9:
		   case 10:
			   break;
		   default:cout<<"you have entered a wrong choice \nWant to try again in hatchback or not(y/n) ";
				cin>>c;
				if(c=='y')
					{
						goto lb;
					}
				else
					getdata();

		   }
return ht;
}

//Sedan Function Definition.
int project :: Sedan()
{
		lb1:
		cout<<"\nNames of cars\n\n";
		char ch1[20][20]={"11.Swift Dzire \t","12.Indigo\t","13.Verito\n","14.Etios \t","15.Amaze\t","16.Vento\n","17.Jetta\t","18.Sx4\t\t", "19.Verna\n","20.Acent\n"};
		for(int i=0;i<10;i++)
			{
				cout<<ch1[i];
			}
		cout<<"\n\nEnter your choice== ";
		cin>>sd;
		rate=13;
		add=70;
		char c;
		switch(sd)
		{
		 case 11:
		 case 12:
		 case 13:
		 case 14:
		 case 15:
		 case 16:
		 case 17:
		 case 18:
		 case 19:
		 case 20:break;
		 default:cout<<"You want a Sedan car(y/n) - ";
			 cin>>c;
			 if(c=='y')
					{
						goto lb1;
					}
				else
					getdata();

		 }

return sd;
}

//MUV function definition.
int project :: MUV()
{
		lb:
		cout<<"\nNames of cars\n\n";
		char ch1[20][20]={"21.Duster \t","22 Qwid\t\t\t","23.Lodgy\n","24. S-Cross \t","25. Etios Cross \t","26. Quanto \n","27. Creta \t","28. Captive \t\t", "29. Koleos\n","30. SantaFe\n"};
		for(int i=0;i<10;i++)
		{
			cout<<ch1[i];
		}
		cout<<"\n\nEnter your choice== ";
		cin>>mu;
		rate=15;
		add=100;
		char c;
		switch(mu)
		{
			case 21:
			case 22:
			case 23:
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
				break;
			default:cout<<"you want a MUV car(y/n) - ";
				cin>>c;
				if(c=='y')
					{
						goto lb;
					}
				else
					getdata();

			}


return mu;
}

//SUV function definition.
int project :: SUV()
{
		lb:
		cout<<"\nNames of cars\n\n";
		char ch1[20][20]={"31.Xylo\t\t","32.Tevera \t\t","33.Innova \n","34.Scorpio \t","35.Datsan Go + \t\t","36.Sumo	\n","37.Bolero\t","38.Enjoy\t\t", "39.Ertiga\n","40.Movas \n"};
		for(int i=0;i<=10;i++)
		{
				cout<<ch1[i];
		}
		cout<<"\n\nEnter your choice== ";
		cin>>su;
		rate=17;
		add=150;
		char c;
		switch(su)
		{
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
			case 39:
			case 40:
				 break;
			default:cout<<"you want a SUV car(y/n) - ";
				cin>>c;
				if(c=='y')
					{
						goto lb;
					}
				else
					getdata();

			}


return su;
}

//Function for payment options
int project :: Payment()
{
p:
cout<<"\n Enter mode of payment (1 for Card and 2 for Cash) - ";
	cin>>pay;

	if(pay==1)
	{
		cout<<" Enter Card Number: ";
		cin>>cno;
		cout<<" Enter type of Card: ";
		gets(cname);
		cout<<" Enter CWN: ";
		cin>>cwno;
		system("cls");
		cout<<"\n\n\n\n\n\n\n                              CONGRATULATIONS                ";			cout<<"\n\n\n                Your Payment has been made Successfully\n\n";			cout<<"\n\n                           THANK YOU               \n\n\n";
		cout<<"\n\n   _________________________Have a Nice Journey______________________\n";
		cout<<"\n\n________________________________________________________________________________\n";
		system("pause");
		system("cls");
		menu();
	   }
	 else if(pay==2)
	  {
		cout<<"Payment will be done to the driver as per the distance travelled\n\n";
		system("cls");
		cout<<"\n\n\n\n\n\n\n                           CONGRATULATIONS                ";
		cout<<"\n\n\n                    ____THANK YOU____          \n\n\n";
		cout<<"\n\n   _____________________Have a Nice Journey___________________________\n";
		cout<<"\n\n________________________________________________________________________________\n";system("pause");
		system("cls");
		menu();
	  }
	else
	 {
		cout<<"Enter relevant option\n";
		goto p;

	 }
return pay;
}

//Function for menu options.
void project:: menu()
{
       man:
		cout<<"\n1.Want to book\n";
		cout<<"\n2.Display\n";
		cout<<"\n3.exit\n";
		cout<<"\nEnter your choice - ";
		cin>>x;

		switch(x)
		{
			case 1  : getdata();
				  break;
			case 2  : display();
				  break;
			case 3  : exit(0);
				  break;
			default : cout<<"entered Wrong choice";
				  goto man;
		}
}

//function to input date.
int project::dated()
{
	dq:
	cout<<"\nEnter date(dd): ";
	cin>>dd;
	switch(dd)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30: break;
		default: cout<<"Wrong choice ";
			 cout<<"type again ";
			 goto dq;
	  }
return dd;
}

//function to input month.
int project::monthm()
{
	m:
	cout<<"\nEnter month(mm): " ;
	cin>>mm;
	switch(mm)
	{

			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			break;
			default :
				cout<<"Enter wrong Month";
			goto m;
	}
return mm;
}

//function to input year.
int project::yeary()
{
yea:
cout<<"\nEnter year(20XX): ";
cin>>yy;
char y;
	switch(yy)
	{
		case 19:
		break;
		default:cout<<"Invalid year";
			cout<<"\nWant to type again(y or n)- ";
			cin>>y;
			if(y=='y')
				goto yea;
			else
				getdata();
	}
return yy;
}

//function to display contents from file.
void project:: display()
{
fin.open("project.dat", ios::in|ios::out);

	 if(cab==1)
	 {
		 while(!fin.eof())
		 {
		   fin.read((char*)&p1, sizeof(p1));
		   cout<<"\n\n\n\n"<<name<<" your car "<<carn<<" has been booked.";
		   cout<<"\n\nIt will be reached at "<<pick<<" on "<<dd<<"-"<<mm<<"-"<<yy;
		   cout<<"\n\n";
		   system("pause");
		   exit(0);
		  }
	  }

	  else
	  {
		cout<<"No car has been booked.";

	  }
fin.close();
}

//main body.
void main()
{
clrscr();
char tc;
cout<<"\n                            WELCOME TO GARG CAB SERVICE                  \n";
cout<<"\n                 	   Himanshu Garg is there to serve you          \n";
cout<<"\n                          Madhukar (Garh) colony, Jaipur                  \n";
cout<<"\n                                 M.9024942300                       \n";
cout<<"\n\nTerms and conditions\n";
cout<<"\n1.All additional charges have to be payed.";
cout<<"\n2.Minimum waiting time is 15 minutes.";
cout<<"\n3.There can be delay in cab service due to weather and other circumstances.";
cout<<"\n4.The car has to be cancelled within 24 hours of booking.";
cout<<"\n5.For cancellation after 24 hours cancellation charges will be applied.";
cout<<"\n\n\nIf you are agree - enter y: ";
	cin>>tc;
	if(tc=='y')
	{
		cout<<"\n";
		system("pause");
		system("cls");
		proj.menu();
	}
	else
	{
		exit(0);
	}

getch();
}
