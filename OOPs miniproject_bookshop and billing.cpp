
/*INPUT-
1.LOGIN ID-1353(DEMO ID)
2.PASSWORD-pass(DEMO)
3.ENTER THE ITEM NUMBER YOU WISH TO ORDER AND THE QUANTITY
4.CONFIRM ORDER*/

//OUTPUT-BILL IS GENERATED SHOWING , BILL NO. AND ORDER ID ALONG WITH THE TOTAL AMOUNT TO BE PAID BY THE CUSTOMER.

//CODE-

#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<map>
#include<iterator>
//#include<windows.h>
using namespace std;
class one
{
public:
	void menu1();
};
void one::menu1()
{   
	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO HITESHI STATIONERY=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====PLACE YOUR ORDER====="<<endl;
	//using maps(stl)
	map<int,string> art;
     art.insert(pair<int, string>(1, "NOTEBOOK SMALL (72 PAGES) (Rs.20)"));
     art.insert(pair<int, string>(2, "NOTEBOOK SMALL (144 PAGES)(Rs.40)"));
     art.insert(pair<int, string>(3, "NOTEBOOK SMALL (200+ PAGES)(Rs.50)"));
     art.insert(pair<int, string>(4, "NOTEBOOK A4 SIZE(72 PAGES)  (Rs.30)"));
     art.insert(pair<int, string>(5, "NOTEBOOK A4 SIZE (144 PAGES) (Rs.50)"));
     art.insert(pair<int, string>(6, "NOTEBOOK A4 SIZE (200+ PAGES) (Rs.60)"));
     art.insert(pair<int, string>(7, "REGISTER (72 PAGES) (Rs.30)"));
     art.insert(pair<int, string>(8, "REGISTER (144 PAGES) (Rs.50)"));
     art.insert(pair<int, string>(9, "REGISTER (200+ PAGES) (Rs.75)"));
     art.insert(pair<int, string>(10,"PENS (Rs.20)"));
     art.insert(pair<int, string>(11,"PENS (Rs.40)"));
     art.insert(pair<int, string>(12,"STUDY TABLE (Rs.200)"));
     art.insert(pair<int, string>(13,"LAMP (RS.150)"));
     art.insert(pair<int, string>(14,"DRAWING SHEETS (Rs.10)"));
     art.insert(pair<int, string>(15,"FOR OTHER ACCESSORIES CONTACT SELLER"));
     art.insert(pair<int, string>(16,"EXIT"));

     map<int,string>::iterator itr;
     cout << "SERIAL NO.\tARTICLE\n";
     for (itr= art.begin(); itr !=  art.end(); ++itr) {
        cout  << itr->first
             << "\t   \t" << itr->second << '\n';
     }
     cout << endl;
	
	/*cout<<"\n\n\n\t===========================\t\t\t==============================\t\t\t==========================="<<endl;
	cout<<"\t[1]NOTEBOOK SMALL (72 PAGES) (Rs.20)\t\t[2]NOTEBOOK SMALL (144 PAGES)(Rs.40)\t\t[3]NOTEBOOK SMALL (200+ PAGES)(Rs.50)\n\t[4]NOTEBOOK A4 SIZE (72 PAGES) (Rs.30)\t\t[5]NOTEBOOK A4 SIZE (144 PAGES)(Rs.50)\t\t[6]NOTEBOOK A4 SIZE (200+ PAGES)(Rs.60)\n\t[7]REGISTER (72 PAGES)(Rs.30)\t\t\t[8]REGISTER (144 PAGES) (Rs.50)\t\t\t[9]REGISTER (200+ PAGES)(Rs.75)\n\t[10]PENS(Rs.20)\t\t\t\t\t[11]PENS (Rs.40)\t\t\t\t[12]STUDY TABLE (Rs.200) \n\t[13]LAMP (Rs.150)\t\t\t\t[14]DRAWING SHEETS (Rs.10)\t\t\t[15]FOR OTHER ACCESSORIES CONTACT OWNER\n\t===========================\t\t\t==============================\t\t\t===========================\n\t[16]EXIT"<<endl;
*/ cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one //single inheritance
	{
	protected:
		 int  ord,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
     string y,ye;
     public:
void menu2()
{ofstream write;
write.open("order.text");
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}

   a:
   b:
   c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): ";
    cin>>ch;

   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY ARTICLES DO YOU WANT?";
   		cin>>ord;

   		a=20;
   		s=s+a*ord;
   		write<<"YOU ORDER: NOTEBOOK SMALL (72 PAGES) :RUPEES 20";
   		write<<" \n";
   		write<<"NUMBER OF ORDER IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :NOTEBOOK SMALL (72 PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY  "<<endl;
   	break;

   	case 2:
   		cout<<"\n\n\tHOW MANY ARTICLES DO YOU WANT :";
   		cin>>ord;

	    b=30;
   		s=s+b*ord;
   		write<<"YOU ORDER  NOTEBOOK SMALL (144 PAGES) : 30";
   		write<<" \n";
   		write<<"NUMBER OF ORDER IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :NOTEBOOK SMALL (144 PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY"<<endl;
   	break;

   	case 3:
   		cout<<"\n\n\tHOW MANY ARTICLES DO YOU WANT :";
   		cin>>ord;

   		c=50;
   		s=s+c*ord;
   			write<<"YOU ORDER  NOTEBOOK SMALL (200+ PAGES)  : 50";
   			write<<" \n";
   				write<<"NUMBER OF NOTEBOOK SMALL (200+ PAGES)  IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :NOTEBOOK SMALL (200+ PAGES)  "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 4:
   		cout<<"\n\n\tHOW MANY NOTEBOOK A4 (72 PAGES) DO YOU WANT?";
   		cin>>ord;

   		d=20;
   		s=s+d*ord;
   		write<<"YOU ORDER  NOTEBOOK A4 (72 PAGES) : 30";
   	write<<" \n";
   		write<<"NUMBER OF NOTEBOOK A4 (72 PAGES) IS : "<<ord;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  :NOTEBOOK A4 (72 PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 5:
   		cout<<"\n\n\tHOW MANY ARTICLE DO YOU WANT?";
   		cin>>ord;

   		e=40;
   		s=s+e*ord;
   		write<<"YOU ORDER  NOTEBOOK A4 (144 PAGES) : 40";
   		write<<" \n";
   		write<<"NUMBER OF NOTEBOOK A4 (144 PAGES) IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  :NOTEBOOK A4 (144 PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 6:
   		cout<<"\n\n\tHOW MANY ARTICLES DO YOU WANT?";
   		cin>>ord;

   		f=50;
   		s=s+f*ord;
   		write<<"YOU ORDER NOTEBOOK A4 (200+ PAGES) : 400";
   		write<<"\n ";
   			write<<"NUMBER OF NOTEBOOK A4 (200+ PAGES) IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :NOTEBOOK A4 (200+ PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 7:
   		cout<<"\n\n\tHOW MANY REGISTERS(72 PAGES) DO YOU WANT?";
   		cin>>ord;

   		g=30;
   		s=s+g*ord;
   		write<<"YOU ORDER REGISTER (72 PAGES) : 30";
   		write<<"\n ";
   			write<<"NUMBER OF REGISTER (72 PAGES) IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :REGISTER (72 PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 8:
   		cout<<"\n\n\tHOW MANY REGISTER (144 PAGES) YOU WANT :";
   		cin>>ord;

   		h=50;
   		s=s+h*ord;
   		write<<"YOU ORDER REGISTER (144 PAGES) : 50";
   		write<<" \n";
   			write<<"NUMBER OF REGISTER (144 PAGES) IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   :REGISTER (144 PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

	case 9:
	cout<<"\n\n\tHOW MANY REGISTERS (200+ PAGES) DO YOU WANT ?";
   		cin>>ord;

		i=60;
		s=s+i*ord;
		write<<"YOU ORDER REGISTER (200+ PAGES) : 60";
		write<<" \n";
			write<<"NUMBER OF REGISTER (200+ PAGES) IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :REGISTER (200+ PAGES) "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 10:
   		cout<<"\n\n\tHOW MANY PENS DO YOU WANT?";
   		cin>>ord;

   		j=20;
   		s=s+j*ord;
   		write<<"YOU ORDER PENS : 20";
   		write<<" \n";
   			write<<"NUMBER OF PENS IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :PENS "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY"<<endl;
   	break;

   	case 11:
   			cout<<"\n\n\tHOW MANY PENS DO YOU WANT ?";
   		cin>>ord;

   		k=40;
   		s=s+k*ord;
   		write<<"YOU ORDER PENS : 40";
   		write<<" \n";
   			write<<"NUMBER OF PENS IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  :PENS "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 12:
   		cout<<"\n\n\tHOW MANY STUDY TABLES DO YOU WANT?";
   		cin>>ord;

   		l=200;
   		s=s+l*ord;
   		write<<"YOU ORDER study table : 200";
   		write<<" \n";
   		write<<"NUMBER OF study table IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :STUDY TABLE "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY "<<endl;
   	break;

   	case 13:
   		cout<<"\n\n\tHOW MANY LAMPS DO YOU WANT?";
   		cin>>ord;

   		m=150;
   		s=s+m*ord;
   		write<<"YOU ORDER  LAMP  : 150";
   		write<<" \n";
   			write<<"NUMBER OF LAMP IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :LAMP "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY"<<endl;
   	break;

   	case 14:
   		cout<<"\n\n\tHOW MANY DRAWING SHEETS DO YOU WANT?";
   		cin>>ord;

   		n=10;
   		s=s+n*ord;
   		write<<"YOU ORDER DRAWING SHEETS : 324";
   		write<<" \n";
   			write<<"NUMBER OF DRAWING SHEETS IS : "<<ord;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER :DRAWING SHEETS "<<endl<<"\tYOUR ORDER  IS SAVED SUCCESSFULLY"<<endl;
   	break;

   	case 15:
   		cout<<"\n\n\t CONTACT SELLER FOR OTHER ACCESSORIES:";
   		write<<"\n";
   	break;
    
	case 16:
    	cout<<"\t\t\t\tbbye!!!"<<endl;
    	break;
    	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU HAVE ENTERED A WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT TO UPDATE YOUR ORDER? (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL... ";}
   	/*for(int a=1;a<8;a++)
	{
		sleep(500);
		cout << "...";
	}
   	cout<<"n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("CLS");*/
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t                    CASH MEMO                "<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No. : CP51           Order ID : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  HITESHI OWNER "<<endl;
						cout << endl;
                        cout <<"\t\t\t\t\t\t\t\t    TOTAL AMOUNT TO BE PAID IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;


  write.close();
  }
  void show1()
  {
  	one::menu1();
  	menu2();
  }

};
class three:public one,public two //multiple inheritance
{
	public:
		void total()
      {
      		long userId; //for administrator

			d:
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!=1353)
			{
				cout<<"\n  Enter correct id\n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\t \n";
			z:
			string pwd="pass";  //password
			string pass="";  // string
			char c;
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = ";
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating
					goto p;
				}

      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to our system\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
};
//driver function
int main()
{
   three ob;
   ob.total();
   getch();
   return 0;
}  

                                          //THANKYOU!!!
