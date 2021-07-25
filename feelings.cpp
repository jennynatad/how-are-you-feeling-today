#include <iostream>
using namespace std;
 
int main () {
   
   
   char feelings;
   char response='Y',y,N,n;
   
    
   
   feeling_today:
   
   	cout<<"HOW ARE YOU TODAY: \n";
	cout<<"a. HAPPY b. SAD c. COOL d. MAD e. SILLY \n";
	
	cout<<"REACTION: ";
	cin>>feelings;
	
	if (feelings == 'a' || feelings == 'A')
	{
		cout<<"DISPLAY: "<<" :)"<<endl;
				
				cout<<"ANOTHER TRY [Y/N]?: ";
				cin>>response;
				
				if (response == 'Y' || response == 'y')
				{
					goto feeling_today;
				}
				else if (response == 'N' || response == 'n')
				{
					return 0;
				}
	}
	else if (feelings == 'b' || feelings == 'B')
	{
		cout<<"DISPLAY: "<<" :("<<endl;
				
				cout<<"ANOTHER TRY [Y/N]?: ";
				cin>>response;
				
				if (response == 'Y' || response == 'y')
				{
					goto feeling_today;
				}
				else if (response == 'N' || response == 'n')
				{
					return 0;
				}
	}
	else if (feelings == 'c' || feelings == 'C')
	{
		cout<<"DISPLAY: "<<" 8)"<<endl;
				
				cout<<"ANOTHER TRY [Y/N]?: ";
				cin>>response;
				
				if (response == 'Y' || response == 'y')
				{
					goto feeling_today;
				}
				else if (response == 'N' || response == 'n')
				{
					return 0;
				}
	}
	else if (feelings == 'd' || feelings =='D')
	{
		cout<<"DISPLAY: "<<" >:("<<endl;
				
				cout<<"ANOTHER TRY [Y/N]?: ";
				cin>>response;
				
				if (response == 'Y' || response == 'y')
				{
					goto feeling_today;
				}
				else if (response == 'N' || response == 'n')
				{
					return 0;
				}
	}
	else if (feelings == 'e' || feelings == 'E')
	{
		cout<<"DISPLAY: "<<" ;p"<<endl;
				
				cout<<"ANOTHER TRY [Y/N]?: ";
				cin>>response;s
				
				if (response == 'Y' || response == 'y')
				{
					goto feeling_today;
				}
				else if (response == 'N' || response == 'n')
				{
					return 0;
				}
	}
	
	else
	{
		cout<<"\t\t\t\t\t\t INVALID CHOICE \n\n"<<endl;
		goto feeling_today;
	}
}
