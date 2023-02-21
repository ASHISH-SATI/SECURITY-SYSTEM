#include<bits/stdc++.h>

using namespace std;
 int main()
 {
 	int a, i=0;
 	string text, old , password1 , password2,pass,name,password0,age,user,word,word1;
 	string creds[2], cp[2];
	 cout<<"   Security System  "<< endl;
	 cout<<"_____________________"<<endl<<endl;
	 cout<<"| 1.Register        | "<<endl;
	 cout<<"| 2.Login           |"<<endl;
	 cout<<"| 3.Change password |   "<<endl;
	 cout<<"| 4.End program     |"<<endl<<endl;
	 
	 do{
	 	cout<<endl<<endl;
	 	cout<<"ENTER YOUR CHIOCE:-";
	 	cin>>a;
	 	switch(a)
	 	{
	 		case 1:{
	 			cout<<"..................."<<endl<<endl;
	 			cout<<"_________REGISTER______"<<endl;
	 			cout<<"|......................|"<<endl;
	 			cout<<"please enter username ";
	 			cin>>name;
	 			cout<<"please enter the password ";
	 			cin>>password0;
	 			cout<<"please enter your age";
	 			cin>>age;
	 			ofstream of1;
	 			of1.open("file.txt");
	 			if(of1.is_open()){
	 				of1<<name<<"\n";
	 				of1<<password0;
	 				cout<<"REGISTRATION SUCCESSFULL"<<endl;
				 }
				break;
				
			 }
		 case 2:{
		 i=0;
		 cout<<"------------------------"<<endl<<endl;
		 cout<<"..................."<<endl<<endl;
	 			cout<<"_________LOGIN______"<<endl;
	 			cout<<"|......................|"<<endl;
	 			ifstream of2;
	 			of2.open("file.txt");
	 			cout<<"Please enter the user name";
	 			cin>>user;
	 			cout<<"please enter the password";
	 			cin>>pass;
	 			if(of2.is_open())
	 			{
	 				while(!of2.eof())
	 				{
	 					while(getline(of2,text))
	 					{
	 						istringstream iss(text);
	 					    iss>>word;
	 						creds[i]=word;
	 						i++;
	 						
						 }
						 if(user==creds[0] && pass==creds[1])
						 {
						 	cout<<"-----login successfull-----";
						 	cout<<endl<<endl;
						 	cout<<"Details "<<endl;
						 	cout<<"Username: "+name<<endl;
						 	cout<<"Password "+pass<<endl;
						 	cout<<"Age "+age<<endl;
						 
					 }else
					 {
					 	cout<<endl<<endl;
					 	cout<<"INCORRECT CREDENTIALS"<<endl;
					 	cout<<" 1. Press 2 to login" << endl;
					 	cout<<" 2.Press 3 to change password "<<endl;
					 	break;
					 }
				
				}
				}
				 
				break;
	 }
	 case 3:{
	 	i=0;
	 	cout<<"------------Change password---------"<<endl;
	 	ifstream of0;
	 	of0.open("file.txt");
	 	cout<<"enter the old password:-";
	 	cin>>old;
	 	if(of0.is_open())
	 	{
	 		while(of0.eof())
	 		{
	 			while(getline(of0, text)){
	 				istringstream iss(text);
	 				iss>>word1;
	 				cp[i]=word1;
	 				i++;
				 }
				 if(old==cp[1])
				 {
				 	of0.close();
				 	ofstream of1;
				 	if(of1.is_open())
				 	{
				 		cout<<"Enter your new password";
				 		cin>>password1;
				 		cout<<"enter your password again";
				 		cin>>password2;
				 		if(password1==password2)
				 		{
				 			of1<<cp[0]<<"\n";
				 			of1<<password1;
				 			cout<<"password changed successfully"<<endl;
				 			
						 }
					 }
					 else
					 {
					 	of1<<cp[0]<<"\n";
					 	of1<<old;
					 	cout<<"password do not match"<<endl;
					 }
				 }
			 }
		 }else{
		 	cout<<"please enter the valid password"<<endl;
		 	break;
		 }
		break;
	 }
	 case 4:
		
	 
	 	{
	 		cout<<"-------ThankYou--------";
	 		break;
	 		
		 }
default:
{
	cout<<"enter a valid choice";
}
}
}



 while(a!=4);
 return 0;

}

