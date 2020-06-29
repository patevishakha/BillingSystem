/*supermarket billing system using c++.the key feature of this application are listed below:
1] Bill report : It shows bill report of all items added in supermarket billing system.
2] Add,remove and Edit items  : With this feature one can add,remove and modify item details. In add items,one can add informations or details such as item number,item name,manufacturing date,price,quantity,tax percent and many more.
3] Show item details : This feature allows user to see the items and corresponding details given for the  
item while adding the item.
Use file to store data.
*/

#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;
class store
{
 int i,choice,count,sr,ch,per,total;
 float a,qty[100];
 char flag;
 string item[100];
 float price[100];
 public:
 void list();
 void display();
 void edit();
 void save();
};

// listing elements 
void store::list()
{
 cout<<"List:\n1]Jaggery\t80 Rs/kg\n2]wheat flour\t50 Rs/kg\n3]pressed rice\t50 Rs/kg\n4]Ghee\t\t120 Rs/kg\n5]sugar\t\t40 Rs/kg\n6]salt\t\t20 Rs/kg\n7]chilly powder\t50 Rs/kg\n\n";
 cout<<"*******************************************************************\n";
     i=0;
 do
     {
      cout<<"Enter the choice number of grocery you want to buy\n";
      cin>>choice;
     cout<<"\n********************************************\n";
      if(choice==1)
       {
         item[i]="Jaggery_";
          cout<<"How many kg's of jaggery you want to buy\n";
          cin>>a;
          qty[i]=a;
		  price[i]=80*a;   
          }
         if(choice==2)
       {
        item[i]="Wheat_flour";
         cout<<"How many kg's of Wheat flour you want to buy\n";
          cin>>a;
          qty[i]=a;
		   price[i]=50*a;    
          }
       if(choice==3)
       {
         item[i]="pressed_rice";
          cout<<"How many kg's of pressed rice you want to buy\n";
          cin>>a;
          qty[i]=a;
		  price[i]=50*a;     
          }
       if(choice==4)
       {
         item[i]="Ghee__";
          cout<<"How many kg's of Ghee you want to buy\n";
          cin>>a;
          qty[i]=a;
		  price[i]=120*a;     
          }
       if(choice==5)
       {
         item[i]="sugar__";
          cout<<"How many kg's of sugar you want to buy\n";
          cin>>a;
          qty[i]=a;
		  price[i]=40*a;     
          }
       if(choice==6)
       {
         item[i]="salt__";
          cout<<"How many kg's of salt you want to buy\n";
          cin>>a;
          qty[i]=a;  
		  price[i]=20*a;   
          }
          if(choice==7)
       {
         item[i]="chilly_powder";
          cout<<"How many kg's of chilly powder you want to buy\n";
          cin>>a;
          qty[i]=a;
		  price[i]=40*a;     
          }
        cout<<"\n*****************************************\nDo you want to make any other choices?(y/n)\n";
        cin>>flag;
          if(flag=='y')
            {
               i++;
               }
         }while(flag=='y');
 }

//save in the file 
void store::save()
{
	string sname;
	float sqty,sprice;
		ofstream save("Bills.txt",ios::app);
       	save<<"\nSHREE SUPER MARKET"<<endl;
      	save<<"ITEM\t\t\t QUANTITY \t\t PRICE\n";
		for(int l=0;l<=i;l++)
		{
			sname=item[l];
			sqty=qty[l];
			sprice=price[l];
			save<<sname<<"\t\t\t"<<sqty<<"\t\t"<<sprice<<endl;
		}
		save<<"Total price paid Rs.:"<<total<<endl;
}  


// for making any changes 
 void store::edit()
     {
        cout<<"\n\n**************************************************\nwould you like to add / delete any items form the list\n";
              do
               {
                cout<<"Press\n1]To add an element\n2]To delete an element\n3]skip\n";
                cin>>ch;
                    if(ch==3)
                        {
                           break;
                           
                         }
                 // adding any new element into the list         
                  if(ch==1)
                    {
                       i++;
                         do
                              {
                               cout<<"Enter the choice number of grocery you want to buy\n";
                               cin>>choice;
                               if(choice==1)
                                   {
                                    item[i]="Jaggery";
                                    cout<<"How many kg's of jaggery you want to buy\n";
                                    cin>>a;
                                    qty[i]=a;
									price[i]=80*a;     
                                     }
                                if(choice==2)
                                      {
                                        item[i]="Wheat_Flour";
                                         cout<<"How many kg's of Wheat flour you want to buy\n";
                                         cin>>a;
                                          qty[i]=a;
										  price[i]=50*a;     
                                          }
                               if(choice==3)
                                   {
                                    item[i]="Pressed_Rice";
                                     cout<<"How many kg's of pressed rice you want to buy\n";
                                         cin>>a;
                                         qty[i]=a;
										 price[i]=50*a;     
                                     }
                           if(choice==4)
                               {
                                item[i]="Ghee     ";
                                cout<<"How many kg's of Ghee you want to buy\n";
                                cin>>a;
                                qty[i]=a;
								price[i]=120*a;     
                                }
                    if(choice==5)
                    {
                     item[i]="Sugar  ";
                     cout<<"How many kg's of sugar you want to buy\n";
                     cin>>a;
                     qty[i]=a;
					 price[i]=40*a;     
                    }    
       if(choice==6)
       {
         item[i]="Salt  ";
          cout<<"How many kg's of salt you want to buy\n";
          cin>>a;
          qty[i]=a;
		  price[i]=20*a;     
          }
if(choice==7)
 {
  item[i]="Chilly_Powder";
  cout<<"How many kg's of chilly powder you want to buy\n";
  cin>>a;
  qty[i]=a;
  price[i]=50*a;     
  }
        cout<<"\nDo you want to continue with adding element to the list?(y/n)\n";
        cin>>flag;
          if(flag=='y')
            {
               i++;
               }
         }while(flag=='y');
    display();
  }
          
int ed,swap,c,j;
float out,*ptr;
 
    // deleting any element from the list 
          if(ch==2)
           { 
               do
                    {
                    	 cout<<"\n\n************************************\nEnter the serial number of Item you want to delete\n";
                    cin>>ed;
                        c=ed;
                        ed=ed-1;
                        item[ed].clear();
                        qty[ed];
                        price[ed];
                         for(j=ed;j<=i;j++)
                             {
                              item[ed]=item[c];
                              qty[ed]=qty[c];
                              price[ed]=price[ed];
                              ed++;c++;
                              }
                         i--;
                     cout<<"Do you want to continue with deleting process?(y/n)\n";
                     cin>>flag;
                    }while(flag=='y');
               }
             cout<<"\n\nDo you want to continue with adding or deleting the list?(y/n)\n";
          cin>>flag;
          }while(flag=='y');
          per=1;
          
  }
  
    //to display item purchased with it's price  
     void store::display()
      {
      	total=0;
          sr=1;
          cout<<"\n\n***************************************************\n\n";
         cout<<"ITEM\t\t\t QUANTITY \t\t PRICE\n";
          for(count=0;count<=i;count++)
           {
               cout<<sr<<"]"<<item[count]<<"\t\t\t"<<qty[count]<<"\t\t"<<price[count]<<endl; 
                sr++;              
               }
               cout<<"\n**************************************************\n";
               if(per==1)
               {
               for(int k=0;k<=i;k++)
               {
               	total=price[k]+total;
			   }
			   cout<<"Total price you need to pay:"<<total<<"Rs\n";
			}
			
      }
   
   //main function
   
     int main()
     {
      store s;
         cout<<"Welcome to SHREE Super Market\n";
          s.list();
            s.display();
              s.edit();
          s.display();
          s.save();
               return 0;
 } 
       




