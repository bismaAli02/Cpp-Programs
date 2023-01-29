#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//declaring all variables
const int total=10;
string name[total];
string father[total];
int age[total];
int matricmarks[total];
string discipline[total];
string subjects[total];
string city[total];
float aggrigate[total];
int English[total];
int Maths[total];
int Chemistry[total];
char option1;
int Physics[total];
int Urdu[total];
int IslamicStudies[total];
int ComputerScience[total];
string username, password;
char option;
char cpp;
int count=0; 
int count1=0;
bool is_valid = false;

//function prototypes
void clearscreen();
void infoU();
int calculateU();
void subject();
void result();
void timetable();
void events();
char menuU();
void login();
void header();
void info();
void display();
int calculate();
void sorting();
void exam();
void show_panel();
char menuA();
void show_student_panel();
void addintoarray();
string parsedata(string record,int field);
void load();

main(){
	load();
	header();
	int num;
	cout<<" Choose your Option : " <<endl;
	cout<<" 1. Admin Login " <<endl;
	cout<<" 2. Student Login" <<endl;
	cin>> num;
	if(num==1){	
		while(is_valid == false) {
			login();
			if(is_valid == true) {
				show_panel();
			}
		}
	}
	else if(num==2){
		login();	
	}
}

void show_student_panel() {
	while (option<= '8'){
		option=menuU();
		if(option=='1'){ 	
			infoU();
			clearscreen();
		}
		else if(option=='2'){	
      		calculateU();
			clearscreen();
		}
		else if(option=='3'){
			subject();
			clearscreen();
		}
		else if(option=='4'){
			result();
		    clearscreen();				
		}
		else if(option=='5'){
			timetable();
			clearscreen();			
			}
		else if(option=='6'){
			events();
			clearscreen();
		}
		else if(option=='7'){
			header();
			login();
		}
		else if(option=='8'){
			cout<<" Thanks for using the College Management System" <<endl;
			break;
		}	
	}
}

void login(){
	cout<<" Enter the Username : " <<endl;
	cin>> username;
	cout<<" Enter the Password : " <<endl;
	cin>> password;
	if(username == "Admin" && password == "admin_123") {
		is_valid = true;
	show_panel();
	} else if(username == "fsc21.edu.pk" && password=="muaaz_fsc21") {
		show_student_panel();
	}
	 else {
		cout << "================================ ";
		cout << "\n Invalid username or password \n";
		cout << "================================ \n";
		login();
	}
	
}
void header(){
		cout<<" ****************************************** " <<endl;
		cout<<"          College Management System     " <<endl;
		cout<<"******************************************* " <<endl;
}
char menuU(){
char op;
header();
cout<<" Main Menu " << endl;
cout<<" 1. Write Your All records " <<endl;
cout<<" 2. Click for merit list " << endl;
cout<<" 3. Check the offered courses and their subjects " << endl;
cout<<" 4. View your exams result " <<endl;
cout<<" 5. Check the timetable " <<endl;
cout<<" 6. View latest events " <<endl;
cout<<" 7. Back To Login Window"<<endl;	
cout<<" 8. Exit" <<endl;
cout<<" Your option----" <<endl;
cin>> op;	
    return op;
}
void info() {
	cout << " Enter the name of student : " << endl;
	cin >> name[count];
	cout << " Enter the student father name : " << endl;
	cin >> father[count];
	cout << " Enter the age of student : " << endl;
	cin >> age[count];
	cout << " Enter the matric marks of student : " << endl;
	cin >> matricmarks[count];
	cout << " Enter the discipline of student : " << endl;
	cin >> discipline[count];
	cout << " Enter the subjects of student : " << endl;
	cin >> subjects[count];
	cout << " Enter the city of student : " << endl;
	cin >> city[count];
	aggrigate[count] = (matricmarks[count] / 1100.0) * 100.0;
	count++;
}
void infoU(){
for(int x=0; x<count; x++){
	cout<<" Enter your name : " <<endl;
	cin>> name[x];
	cout<<" Enter your father name : " <<endl;
	cin>> father[x];
	cout<<" Enter your age :" <<endl;
	cin>> age[x];
	cout<<" Enter the discipline you want to choose : "<<endl;
	cin>> discipline[x];
	cout<<" Enter your city name : " <<endl;
	cin>> city[x];
	cout<<" Enter your matric marks : " <<endl;
	cin>> matricmarks[x];	
}
}
int calculateU(){
	for(int y=0; y<count; y++){
		aggrigate[y]=(matricmarks[y]/1100.0)*100.0;		
	}
	for(int z=0; z<1; z++){
		if(aggrigate[z]>=80.00){
		cout<<" Alhamdullilah"<<"\t"<< name[z] <<"\t"<< father[z] <<"\t"<<" You have been selected in" <<"\t"<< discipline[z]<<"\t"<< "Your Aggrigate is : " << aggrigate[z] <<endl;
		}
		else{
			cout<<" Wait for the 2nd List " <<endl;
		}
	}
}
void display()
{
	for (int y = 0; y < count; y++)
	{
		cout << name[y] << "\t" << father[y] << "\t" << age[y] << "\t"<< "\t" << matricmarks[y] << "\t" << discipline[y] <<"\t" <<   subjects[y]<< "\t" <<      city[y] << endl;
	}
}
int calculate(int s)
{
	float largest = -1.0;
	int index;
	for (int x = s; x < total; x++)
	{
		if (largest < aggrigate[x])
		{
		 largest = aggrigate[x];
			index = x;
		}
	}
	return index;
}
void sorting()
{
	int highest;
	float temp;
	string temp1;
	for (int idx = 0; idx < total; idx++)
	{
		highest = calculate(idx);
		temp = aggrigate[highest];
		aggrigate[highest] = aggrigate[idx];
		aggrigate[idx] = temp;
		temp1 = name[highest];
		name[highest] = name[idx];
		name[idx] = temp1;
		cout << temp1 << "\t" << temp << endl;
	}
}
void exam(){
	cout<<" Enter the English Marks : " << endl;
	cin>> English[count1];
	cout<<" Enter the Physics Marks : " << endl;
	cin>> Physics[count1];
	cout<<" Enter the Chemistry Marks : " << endl;
	cin>> Chemistry[count1];
	cout<<" Enter the Mathematics Marks : " << endl;
	cin>> Maths[count1];
	cout<<" Enter the Islamic Studies Marks : " << endl;
	cin>> IslamicStudies[count1];
	cout<<" Enter the Computer Science Marks : " << endl;
	cin>> ComputerScience[count1];
	count1++;
}
void result(){
	for(int i=0; i<total; i++){
	cout<< name[i]<<"\t"<< English[i] <<"\t" << Physics[i] <<"\t" << Chemistry[i] <<"\t" <<Maths[i] <<"\t" << IslamicStudies[i]<<"\t"<< ComputerScience[i] <<endl;	
	}
}
void subject()
	{
	cout<<"   Courses  "          <<  " \t"    <<" Subjects "                                                           <<endl;
	cout<<"   FSC-PRE-ENGG : "           <<" Physics, Chemistry, Mathematics, English, Urdu, IslamicStudies,PakistanStudies "          <<endl;
	cout<<"   FSC-PRE-Medical : "        <<" Physics, Chemistry, Biology, English, Urdu, IslamicStudies, PakistanStudies "            <<endl;
	cout<<"   ICS : "                      <<" Physics, Chemistry, ComputerScience, English, Urdu, IslamicStudies, PakistanStudies "   <<endl;
}
void timetable(){

         	cout<<" Day "       <<" |"          <<"    TimeTable " <<endl;
			cout<<" Monday : "  <<" |"   << "  "          <<" Physics, Chemistry, Math/Bio/Com, Break, English, Urdu " <<endl;
			cout<<" Tuesday : " <<" |" << "  "         <<" Math/Bio/Com, English, Chemistry, Break, Physics, Urdu " <<endl;
			cout<<" Wednesday :"<<" |" << "  "        <<" Physics, Physics, Chemistry, Break, Math/Bio/Com, Math/Bio/Com " <<endl;
			cout<<" Thursday : "<<" |"  << "  "         <<" IslamicStudies/PakistanStudies, English, Chemistry, Break, Urdu, Physics " <<endl;
			cout<<" Friday : "  <<" |" << "  "        <<" Math/Bio/Com, IslamicStudies/PakistanStudies, Urdu, Physics " <<endl;
			cout<<" Saturday : "<<" |" << "  "         <<"                        Holiday              "    <<endl;
			cout<<" Sunday : "  <<" |" << "  "        <<"                        Holiday              "    <<endl;
}
void events(){
	        cout<<" -----------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"  Events " <<" |" << "  "  << "  "   <<"   Venue " <<" |" << "  "  << "  "  <<"  Day " <<" |" << "  "  << "   "     <<"  Time " <<" |"                     <<"|" <<endl;
			cout<< "  "       <<" |" << " Welcome Party " << "  "     <<" |" << " P.C Hotel " << "  "     <<" |" << " Saturday " << "  "           <<" |" <<"1:00pm-4:00pm "  <<"|" <<endl;
			cout<< "  "       <<" |" << " Farewell "   << "  "        <<" |" <<    " Avari Hotel "  << " "<<" |" << " Sunday "   << " "            <<" |" <<"2:00pm-5:00pm "  <<"|" <<endl;
			cout<< "  "       <<" |" << " Qawali Night "   << "  "     <<"|" <<" College Main Campus "    <<" |" << " "  << " Thursday "   << "  " <<" |" <<"7:00pm-9:00pm "  <<"|"	<<endl;
			cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;	
	}	
void clearscreen(){
		cout<<" Press any key to continue : " <<endl;
		getch();
		system("CLS");
	}
char menuA(){
char op;
header();
	    cout<<" Main Menu " << endl;
		cout<<" 1. Add the students " <<endl;
		cout<<" 2. Update and check the students records " << endl;
		cout<<" 3. Generate and view sorted merit lists " << endl;
		cout<<" 4. Upload and check student exams results " <<endl;
		cout<<" 5. Update and view offered courses and their subjects " <<endl;
		cout<<" 6. Update and view daily timetable " <<endl;
		cout<<" 7. Organize the events " <<endl;
		cout<<" 8. Back To Login Window " <<endl;
		cout<<" 9. Exit" <<endl;
		cout<<" Your option----" <<endl;
		cin>> op;
		return op;
	}
	void show_panel() {
		while (option <= '8')
		{
		option = menuA();
			if (option == '1')
			{
				info();
				addintoarray();
				clearscreen();
			}
			else if (option == '2')
			{
				cout << " Name"<<"\t"<<"Father"<<"\t"<<"Age"<<"\t"<<"Matric Marks" <<"\t"<<"Discipline"<<"\t" <<"Subjects"<<"\t"<<"City"<<endl;
				display();
				clearscreen();
			}
			else if (option == '3')
			{
				cout << " Name "<< "\t"<< " Aggrigate " << endl;
				sorting();
				clearscreen();
			}
			else if (option == '4')
			{
				exam();
				clearscreen();
			}
			else if (option == '5')
			{
				timetable();
				clearscreen();
			}
			else if (option == '6')
			{
				subject();
				clearscreen();
			}
			else if (option == '7')
			{
				events();
				clearscreen();
			}
			else if (option == '8')
			{   
			   header();
			   login();
		}
			else if(option=='9'){
				header();
				cout<<" Thanks For using College Management System" <<endl;
				break;
			}
		}
	}
		void addintoarray(){
			fstream file;
			file.open("Project.txt",ios::out);
				for(int y=0; y<count; y++){
			file <<  name[y] <<","<< father[y] <<","<< age[y] <<","<< matricmarks[y]<<","<< discipline[y] <<","<< subjects[y] <<","<< city[y] << endl;		
				}
				file.close();
		}
		string parsedata(string record,int field){
			int commacount=1;
			string item;
			for(int x=0; x<record.length(); x++){
				if(record[x]==','){
					commacount++;
				}
				else if(commacount==field){
					item=item+record[x];
				}
			}
			return item;
		}
		void load(){
			fstream file;
           string word;
       file.open("Project.txt",ios::in);
       while(!file.eof()){
	   getline(file,word);
	   if(file.eof()){
		break;
	}
	  name[count]=parsedata(word,1);
	 father[count]=parsedata(word,2);
	 age[count]=stoi(parsedata(word,3));
	 matricmarks[count]=stoi(parsedata(word,4));
	discipline[count]=parsedata(word,5);
	subjects[count]=parsedata(word,6);
	city[count]=parsedata(word,7);
	count++;
}
file.close();
}		
	


