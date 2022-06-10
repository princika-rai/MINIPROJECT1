#include<iostream>
using namespace std;
#include <fstream>
#include <string>
int bill=0;
int userdata()
{
    int k=0;
    string line;
    string find;
    char name[25];
    int id=0;
    float debt=0;
   ofstream myfile;
    myfile.open("data.txt");
    while(k!=3){
        cout<<"press 1 for adding data"<<endl;
        cout<<"press 2 for update "<<endl;
        cin>>k;
        if(k==1)
        {
            cout<<"enter ID "<<endl;
            cin>>id;
            cout<<"enter Name"<<endl;
            cin>>name;
            cout<<"enter debt "<<endl;
            cin>>debt;
            myfile<<name<<endl;
            myfile<<id<<endl;
            myfile<<debt<<endl<<endl<<endl;
        }
        if(k==2)
        {
            cout<<"name u want to update "<<endl;
            cin>>find;
            ifstream file;
            file.open("data.txt");
            while (!file.eof() && line!=find)
            {
                getline(file,line);
            }
            cout<<"enter ID "<<endl;
            cin>>id;
            cout<<"enter Name"<<endl;
            cin>>name;
            cout<<"enter Debt "<<endl;
            cin>>debt;
            myfile<<name<<endl;
            myfile<<id<<endl;
            myfile<<debt<<endl<<endl<<endl;
        }
        if(k==3){
            myfile.close();
        }
    }
    return 0;
}
int customer(){
struct customer{
char name[10];
int password;
};
	struct customer c1;
	int flag;
	cout<<"\tUsername: "<<endl;
	cin>>c1.name;
	cout<<"\tenter your 4 digit password : "<<endl;
	cin>>c1.password;
	if (c1.password==1234 || c1.password==2345||c1.password==3456||c1.password==4567){
	cout<<"\tYou are our regular customer"<<endl;
	cout<<"\tyou're eligible for the discount"<<endl;
	flag=1;
	}
	else{
		cout<<" Register yourself "<<endl;
        userdata();
	}
return 0;
}
int Display(){
cout<< "\tIce-Cream "<<endl;
cout<< "\tJeans "<<endl;
cout<< "\tT-shirt "<<endl;
cout<< "\tSprite(clear hain) "<<endl;
cout<< "\tDettol "<<endl;
cout<<"\n"<<"\n"<<endl;
return 0;
}
int Prizes(){
    cout<<"\t***__**__*** /n /n"<<endl;
    cout<<"\tIce-Cream for 5999"<<endl;
    cout<<"\tJeans for 6999"<<endl;
    cout<<"\tT-Shirt for 7999"<<endl;
    cout<<"\tSprite for 8999"<<endl;
    cout<<"\tDettol for 9999"<<endl;
    cout<<"\t***\n"<<endl;
    cout<<"\t#Athithi_Kharido_Bhava#\n "<<endl;
    return 0;
}
int Discount(){
    int n, flag;
cout<<"\tDiscount is only for our regular customers"<<"\n \n ";
cout<<"\t*__*"<<"\n \n ";
cout<<"\tPlease Enter your Credentials before proceeding further"<<endl;
customer();
if(flag==1){
        cout<<"\tEnter the code on which you need the discount"<<endl;
for(int i=0;i<=3;i++){
        cin>>n;
switch(n){
       
        case 5999: cout<<" You have purchased Ice Cream for only 599"<<endl;
       // bill=bill+599;
        break;
         case 6999: cout<<" You have purchased Jeans for only 699 "<<endl;
        // bill=bill+699;
        break;
         case 7999: cout<<" You have purchased T-Shirt for only 799"<<endl;
        // bill=bill+799;
        break;
         case 8999: cout<<" You have purchased Sprite for 899"<<endl;
        // bill=bill+899;
        break;
         case 9999: cout<<" You have purchased Dettol for only 99"<<endl;
         //bill=bill+99;
        break;
         case 1:
            goto exit;
        default :
        cout<<"press 1 to exit"<<endl;
        break;
    }
    }
}
else{
        cout<<"Dear Customer. \n you're not eligible for the Discount"<<endl;
}
exit:
    cout<<"*"<<endl;
cout<<"                Thank You, for visiting our store.\n *Keep Visiting*                   "<<endl;
return 0;
}
int Buy(){
    int n;
    cout<< "Enter the code of the respective items you want to purchase: " <<endl;
    cout<<"enter the item code"<<endl;
    cin>>n;
    //item code is same as item prize ex: Code of ice is 5999 whose prize is also 5999
    for( int i=0;i<=n;i++){
    switch(n){
        case 5999: cout<<" You have purchased Ice Cream for only @5999\n\n";
        break;
         case 6999: cout<<" You have purchased Jeans for only @6999\n\n ";
        break;
         case 7999: cout<<" You have purchased T-Shirt for only @7999\n\n";
        break;
         case 8999: cout<<" You have purchased Sprite for @8999\n\n";
        break;
         case 9999: cout<<" You have purchased Dettol for only @9999\n\n";
        break;
        default :
        cout<<"\tPlease enter the right code";
        break;
    }
    }
    return 0;
}

int Bill(){
	int Q;
	cout<<"Enter the total number of product : ";
	cin>>Q;
	cout<<" "<<endl;
	int qty[Q]={};
	double price[Q]={};
	double B=0.0;
	for(int i=0;i<Q;i++){
	  cout<<"Enter quantity of each product"<<i+1<<":";
	  cin>>qty[i];
	  cout<<"Enter the price of each product" <<i+1<<":";
	  cin>>price[i];
	  cout<<" "<<endl;
	}
	cout<<"\n";
	cout<<" "<<endl;
	cout<<"s.no\tQTY\t\tprice\tTotal\n---------------------------------------------------------\n";
	cout<<" "<<endl;
	for(int i=0;i<Q;i++){
		cout<<i+1<<"\t\t"<<qty[i]<< "\t\t"<<price[i]<<" \t\t"<<(qty[i]*price[i])<<endl;
		B=B+(qty[i]*price[i]);}
	cout<<"---------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t"<<B<<endl;
	double paid=0.0;
	cout<<"---------------------------------------------------------\n";
	cout<<"Enter paid amount:";
	cin>>paid;
	cout<<"paid\t"<<paid<<endl;
	cout<<"remaining\t"<<(paid-B)<<endl;
	cout<<"---------------------------------------------------------\n";
		

		return 0;
			
}



int main(){
    cout<<"\t**----> Welcome to Our Store<----**\n" <<endl;
    cout<<"\tFollow the instructions below to purchase items from our shop"<<endl;
int value;
while(true){
    cout<<"\tEnter 1 To display items in the menu: "<<endl;
    cout<<"\tEnter 2 To display prizes of the items: "<<endl;
    cout<<"\tEnter 3 To know the discount: "<<endl;
    cout<<"\tEnter 4 If you want to buy something : "<<endl;
    cout<<"\tPress 6 to genrate your bill: "<<endl;
    cout<<"\tPress 7 to exit: "<<endl;
    cout<<"\tPress 8 to Manage User Data"<<endl;

    cout<<"\n"<<"\n"<<"\n"<<endl;
    cin>>value;
    switch(value){
        case 1 : Display();
         break;
        case 2 : Prizes();
         break;
        case 3 : Discount();
         break;
        case 4 : Buy();
         break;
        case 6 : Bill();
         break;
         case 7: customer();
         default:
         cout<<"\tInvalid Input"<<endl;
         break;
    }
}
}