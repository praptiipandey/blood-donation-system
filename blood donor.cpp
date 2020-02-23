#include<iostream>
#include<conio.h>
#include<string.h>

class donor
{
	private:
		char name[20],sex[20],blood_grp[20];
		char blood_grp1[20],address[100];
		int donor_no[10], age[10],i, n, ch;
	public:
		void getdata();
		void display();
};

	void donor::getdata()
	{
	cout<<"\n How many donor details would u like to enter : " ;
	cin>>n;
	for(i=0;i<n;i++)
	{ cout<<"DONOR NUMBER	: ";
	  cin>>donor_no[i];
	cout<<"DONOR NAME	: ";
	cin>>name[i];
	cout<<"DONOR AGE	: ";
	cin>>age[i];
	cout<<"DONOR SEX (M/F)  : ";
	cin>>sex[i];
	cout<<"DONOR ADDRESS    : ";
	cin>>address[i];
	cout<<"DONOR BLOOD GROUP: ";
	cin>>blood_grp[i];
	}
      }
	void donor::display()
	{
	 cout<<"\n       DONOR DETAILS ";
	 cout<<"\n -----------------------";
	 cout<<"\n 1. BLOOD DONORS HAVING BLOOD GROUP O+";
	 cout<<"\n 2. BLOOD DONORS IN AGE GROUP BETWEEN 16 TO 25";
	 cout<<"\n 3. FEMALE DONORS HAVING BLOOD GROUP A & AGE BETWEEN 19 & 24";
	 cout<<"\n 4. EXIT ";
	 cout<<"\n Enter your Choice : ";
	 cin>>ch;
	 switch(ch)
	 {
	 case 1: cout<<"\n BLOOD DONORS WITH O+";
		 cout<<"\n --------------------------";
		 for(i=0;i<n;i++)
		 {
		 if(blood_grp[i]='O')
		 {
		 cout<<"\n"<<donor_no[i]<<"\t"<<name[i]<<"\t"<<age[i]<<"\t"<<address[i]<<"\t"<<blood_grp[i];
		 }
		 else
		 cout<<"No Donors with O+ group";
		 break;
		 }

	 case 2:
		 cout<<"\n BLOOD DONORS IN AGE GROUP BETWEEN 16 TO 25";
		 cout<<"\n --------------------------";
		 for(i=0;i<n;i++)
		 {
		 if(age[i]>=16 && age[i]<=25)
		 {
		 cout<<donor_no[i]<<name[i]<<age[i]<<address[i]<<blood_grp[i];
		 }
		 else break;
		 }

	 case 3:

		cout<<"\nFEMALE DONORS HAVING BLOOD GROUP A & AGE BETWEEN 19 & 24";
		 cout<<"\n --------------------------";
		 for(i=0;i<n;i++)
		 {
		 if(blood_grp[i]='A')
		  { if(age[i]>=19 && age[i]<=24)
		   { if(sex[i]='F')
		   cout<<donor_no[i]<<name[i]<<age[i]<<address[i]<<blood_grp[i];
		     } } }
		  break;

	case 4:
		break;
	}
  }


void main()
{
clrscr();
donor obj;
obj.getdata();
obj.display();
getch();
}

