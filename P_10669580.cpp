#include <iostream>
using namespace std;
 #include<conio.h>
 #include<stdio.h>

struct student
    {
       char name[25];
	   char staff[50];

       int indexNo_;
       char year[20];
       int age;
	   long double tel;
	   int marks;
	   char grade[4];
    };
int main()
{
	
      
	char dow;
	int arr=0;
	do{

       student stud[10];


	   cout<<" Press 1 to Enter Record \n";
	   cout<<" Press 2 to Delete Record \n";
	   cout<<" Press 3 to audit\n";
	   cout<<" Press 4 to search info\n";
	   cout<<" Press 5 to display record\n";
	   cout<<"\n \t Select Option::";

	   
		 int rolchek=0;

       int sw;
	   cin>>sw;
	   

	   switch (sw)
	   {

		   case 1:
			 
			   
           cout<<"\n Enter the Data of the student no "<<arr+1<<" is :\n";
         
		   cout<<"\t Enter the  index number= ";
		  int rol2;
		   int rol;
		   
		   
		   cin>>rol;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==stud[j].indexNo_)
		   {
			   rolchek=1;
			   }
		   }
		   if(rolchek!=1){
			   stud[arr].indexNo_=rol;
			   

		  cout<<"\t Enter the Name =  ";
		 cin>>stud[arr].name;

		 cout<<"\t Enter the staff =  ";
		 cin>>stud[arr].staff;

		 cout<<"\t Enter the Telephone no =  ";
		 cin>>stud[arr].tel;

         cout<<"\t Enter the level=";
		 cin>>stud[arr].year;

		 cout<<"\t Enter the Markes =  ";
		 cin>>stud[arr].marks;

         cout<<"\t Enter the Grade = ";
		 cin>>stud[arr].grade;

         cout<<"\t Enter the Age = ";
         cin>>stud[arr].age;
		 arr=arr+1;
		   }
		   else
		   {
			   cout<<"This Record Already Entered\n";
		   }
			   
			   
            break;

			case 2:
					   
           cout<<"\n Enter the index  of the student To Delete ::\n";
         
		   
		
		   cin>>rol;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==stud[j].indexNo_)
		   {
			   		   
			   
			   stud[j].indexNo_='d';
		  cout<<"\t Record Deleted";
			   }
		   }
       
            break;

			case 3:
				 cout<<"\n Enter the index of the student To Update ::\n";
         
		   
		
		   cin>>rol;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==stud[j].indexNo_)
		   {
			   		cout<<"\t indexNo_ =  ";   
			   cout<<stud[j].indexNo_;
			   cout<<"\t Name =  ";
			   cout<<stud[j].name;
			  cout<<"\t  staff =  ";
			   cout<<stud[j].staff;
			    cout<<"\t  Telephone no =  ";
				cout<<stud[j].tel;
				 cout<<"\t level =";
				 cout<<stud[j].year;
			    cout<<"\t  Marks =  ";
			   cout<<stud[j].marks;
			      cout<<"\t Grade = ";
			   cout<<stud[j].grade;
			  

cout<<"\n\t ReEnter Data  ";

			    cout<<"\n\t Enter the Name =  ";
		 cin>>stud[j].name;

		 cout<<"\n\t Enter the staff =  ";
		 cin>>stud[j].staff;

		 cout<<"\n\t Enter the Telephone no =  ";
		 cin>>stud[j].tel;

         cout<<"\n\t Enter the level = ";
		 cin>>stud[j].year;

		 cout<<"\n\t Enter the Markes =  ";
		 cin>>stud[j].marks;

         cout<<"\n\t Enter the Grade = ";
		 cin>>stud[j].grade;

         cout<<"\n\t Enter the Age = ";
         cin>>stud[j].age;
		  
			   }
		   }
       
            break;

			case 4:


				 cout<<"\n Enter the index of the student To Search ::";
         
		   
		
		   cin>>rol;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==stud[j].indexNo_)
		   {
			   		   
			   
			 	cout<<"\n \t indexNo_ =  ";   
			   cout<<stud[j].indexNo_;
			   cout<<"\n \t Name =  ";
			   cout<<stud[j].name;
			  cout<<"\n \t  staff =  ";
			   cout<<stud[j].staff;
			    cout<<"\n \t  Telephone no =  ";
				cout<<stud[j].tel;
				 cout<<"\n \t level = ";
				 cout<<stud[j].year;
			    cout<<"\n \t  Marks =  ";
			   cout<<stud[j].marks;
			      cout<<"\n \t Grade = ";
			   cout<<stud[j].grade;
		  
		   }}
       
            break;

			case 5:
				cout<<"\n____________________________________________________________________________\n";	
        for(int i=0;i<1;i++)
		   {
			   
			   cout<<"indexNo_ ||";
			   cout<<" Name  ||";
			   cout<<" staff   || ";
			     cout<<"Tele no ||";
				 cout<<" level ||";
				 cout<<" Marks ||";
				 cout<<"  Grade ||";
			   for(int k=0;k<arr;k++)
		   {
			   if (stud[k].indexNo_!='d')
			   {

			   
			cout<<"\n";
			   cout<<" ";   
			   cout<<stud[k].index no_;
			   cout<<"    || ";
			   cout<<stud[k].name;
			  cout<<" || ";
			   cout<<stud[k].staff;
			    cout<<"   ||   ";
				cout<<stud[k].tel;
				 cout<<"   ||   ";
				 cout<<stud[k].year;
			    cout<<"  ||   ";
			   cout<<stud[k].marks;
			      cout<<"    ||  ";
			   cout<<stud[k].grade;
			   
			   }
			  	
			  
			    
		  
			   }}
		 cout<<"\n____________________________________________________________________________";
		
            break;


	       default:
		    cout<<"\t Worng option Selected ";
		   break;
	   
	}

    

    
	   cout<<"\n \n \t Do You want to Continue Again [Y/N]";
	   cin>>dow;

	}
	while(dow=='y');
	

	
	 
       return 0;
       getch();

}


