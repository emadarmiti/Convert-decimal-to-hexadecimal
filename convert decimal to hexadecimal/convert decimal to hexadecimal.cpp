#include <iostream>
using namespace std;
void main()
{
 cout<<"************ WELCOME ************"<<endl<<endl;

	int number_dec,changer,count=0,number_hex[1000];
	cout<<"Enter the number decimal : ";
	cin>>number_dec;

for(;;)
{
	     changer=number_dec%16;
	     number_hex[count]=changer;

	     if(number_dec>=16){
	         number_dec=number_dec/16;
	         count++;}

	    else
	    	break;
}

cout<<"The number in hexadecimal is : ";
for(int i=0;i<=count;count--)
{
	
	if(number_hex[count]<=9) cout<<number_hex[count];
	else
		switch(number_hex[count])
	{
		case 10:cout<<"A";break;
		case 11:cout<<"B";break;
		case 12:cout<<"C";break;
		case 13:cout<<"D";break;
		case 14:cout<<"E";break;
		case 15:cout<<"F";break;
	}	
	
}

cout<<endl<<endl;
}