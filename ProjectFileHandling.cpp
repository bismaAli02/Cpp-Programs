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
string username,userlogin,passwordlogin,password,confirm;
int option;
char cpp;
int count=0; 
int count1=0;
bool is_valid = false;
char key; 
int idx=0;
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
void addintofile();
string parsedata(string record,int field);
void load();
void addintouserfile();
void loadmarks();
void addmarksintofile();
void accountlogin();
void confirmP();
void lengthP();
void maininterface();
void loginuser();
// main
main(){
	load();
	loadmarks();
    maininterface();
}
// student panel
void show_student_panel() {
	char opt;
	while (opt<= '8'){
		opt=menuU();
		if(opt == '1'){ 	
			infoU();
			addintouserfile();
			clearscreen();
		}
		else if(opt == '2'){	
      		calculateU();
			clearscreen();
		}
		else if(opt == '3'){
			subject();
			clearscreen();
		}
		else if(opt == '4'){
			result();
		    clearscreen();				
		}
		else if(opt == '5'){
			timetable();
			clearscreen();			
			}
		else if(opt== '6'){
			events();
			clearscreen();
		}
		else if(opt== '7'){
			header();
			login();
		}
		else if(opt== '8'){
			header();
			cout<<" Thanks for using the College Management System" <<endl;
			break;
		}	
	}
}
void maininterface(){
	header();
	int num; 
// choose option
	cout<<" Choose your Option : " <<endl;
	cout<<" 1. Admin Login " <<endl;
	cout<<" 2. Student Login" <<endl;
	cin>> num;
	if(num==1){	
	        system("CLS");
	        header();
			login();
			if(is_valid == true) {
				show_panel();
			}
		}
	else if(num==2){
		login();	
}
}	
// login
void login(){
	cout<<" Enter the Username : " <<endl;
	cin>> username;
	cout<<" Enter the Password : " <<endl;
	cin>> password;
	if(username == "Admin" && password == "admin_123") {
		is_valid = true;		
	}
	else if (username==userlogin && password==confirm){
		show_student_panel;
	}
	 else {
		cout << "================================ ";
		cout << "\n Invalid username or password \n";
		cout << "================================ \n";
		cout<<" Press E to go back or any other key to continue....."<<endl;
		cin>> key;
		if(key=='E'){
		system("CLS");	
		maininterface();
		}
		else{
		login();
	}	
}
}
void accountlogin(){
	cout<<" Create Username : " <<endl;
	cin>> userlogin;
	lengthP();
}
void lengthP(){
	cout<<" Create Password :" <<endl;
	cin>> passwordlogin;
    int length=passwordlogin.length();
    if(length>=8){
    	confirmP();
	}
	else{
	cout<<" Password must contain 8 characters ...."<<endl;
	lengthP();	
	}
}
    void confirmP(){
	cout<<" Confirm Password :" <<endl;
	cin>> confirm;
	if(confirm==passwordlogin){
	cout<<" Registered" <<endl;
	clearscreen();
	show_panel();	
	}
	else{
	cout<<" Inaccurate password...."<<endl;	
	confirmP();			
	}	
	}
// header
void header(){
		cout<<" ****************************************** " <<endl;
		cout<<"          College Management System     " <<endl;
		cout<<"******************************************* " <<endl;
}
// student menu
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
// adding student details
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
// student all record
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
// calculaing aggrigate
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
// displaying all students and their record 
void display()
{
	for (int y = 0; y < count; y++)
	{
		cout << name[y] << "\t" << father[y] << "\t" << age[y] << "\t"<< "\t" << matricmarks[y] << "\t" << discipline[y] <<"\t" <<     subjects[y]<< "\t"<<"\t"<< city[y] << endl;
	}
}
// calculating aggrigate
int calculate(int s)
{
	float largest = -1.0;
	int index;
	for (int x = s; x < count; x++)
	{
		if (largest < aggrigate[x])
		{
		 largest = aggrigate[x];
			index = x;
		}
	}
	return index;
}
// sorting
void sorting()
{
	int highest;
	float temp;
	string temp1;
	for (int idx = 0; idx < count; idx++)
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
// student exam marks
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
// displaying student result
void result(){
	cout<<" English"<<" Physics"<<" Chemistry"<<" Maths"<<" Islamic Studies"<<" Computer Science" <<endl;
	for(int i=0; i<count1; i++){
	cout<< English[i] <<"\t" << Physics[i] <<"\t" << Chemistry[i]<<"\t"<<"\t" <<Maths[i] <<"\t" << IslamicStudies[i]<<"\t"<< ComputerScience[i] <<endl;	
	}
}
// courses and their subjects
void subject()
	{
	cout<<"   Courses  "          <<  " \t"    <<" Subjects "                                                           <<endl;
	cout<<"   FSC-PRE-ENGG : "           <<" Physics, Chemistry, Mathematics, English, Urdu, IslamicStudies,PakistanStudies "          <<endl;
	cout<<"   FSC-PRE-Medical : "        <<" Physics, Chemistry, Biology, English, Urdu, IslamicStudies, PakistanStudies "            <<endl;
	cout<<"   ICS : "                      <<" Physics, Chemistry, ComputerScience, English, Urdu, IslamicStudies, PakistanStudies "   <<endl;
}
// daily timetable
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
// events
void events(){
	        cout<<" -----------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"  Events " <<" |" << "  "  << "  "   <<"   Venue " <<" |" << "  "  << "  "  <<"  Day " <<" |" << "  "  << "   "     <<"  Time " <<" |"                     <<"|" <<endl;
			cout<< "  "       <<" |" << " Welcome Party " << "  "     <<" |" << " P.C Hotel " << "  "     <<" |" << " Saturday " << "  "           <<" |" <<"1:00pm-4:00pm "  <<"|" <<endl;
			cout<< "  "       <<" |" << " Farewell "   << "  "        <<" |" <<    " Avari Hotel "  << " "<<" |" << " Sunday "   << " "            <<" |" <<"2:00pm-5:00pm "  <<"|" <<endl;
			cout<< "  "       <<" |" << " Qawali Night "   << "  "     <<"|" <<" College Main Campus "    <<" |" << " "  << " Thursday "   << "  " <<" |" <<"7:00pm-9:00pm "  <<"|"	<<endl;
			cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;	
}	
// clearscreen option
void clearscreen(){
		cout<<" Press any key to continue : " <<endl;
		getch();
		system("CLS");
}
// admin menu
char menuA(){
char op;
header();
	    cout<<" Main Menu " << endl;
		cout<<" 1. Add the students " <<endl;
		cout<<" 2. Give ID to the students " <<endl;
		cout<<" 3. Update and check the students records " << endl;
		cout<<" 4. Generate and view sorted merit lists " << endl;
		cout<<" 5. Upload and check student exams results " <<endl;
		cout<<" 6. Update and view offered courses and their subjects " <<endl;
		cout<<" 7. Update and view daily timetable " <<endl;
		cout<<" 8. Organize the events " <<endl;
		cout<<" 9. Back To Login Window Or Exit" <<endl;
		cout<<" Your option----" <<endl;
		cin>> op;
		return op;
}
// show admin panel
void show_panel() {
while (option <= '9')
		{
		option = menuA();
			if (option == '1')
			{
				system("CLS");
				info();
				addintofile();
				clearscreen();
			}
			else if(option== '2'){
			  system("CLS");	
		      accountlogin();
	    	   confirmP();
			}
			else if (option == '3')
			{   
			    system("CLS");
				cout << " Name"<<"\t"<<"Father"<<"\t"<<"Age"<<"\t"<<"Matric Marks" <<"\t"<<"Discipline"<<"\t" <<"Subjects"<<"\t"<<"City"<<endl;
				display();
				clearscreen();
			}
			else if (option == '4')
			{  
			    system("CLS");
				cout << " Name "<< "\t"<< " Aggrigate " << endl;
				sorting();
				clearscreen();
			}
			else if (option == '5')
			{  
			    system("CLS");
				exam();
				addmarksintofile();
				clearscreen();
			}
			else if (option == '6')
			{  
			    system("CLS");
				timetable();
				clearscreen();
			}
			else if (option == '7')
			{  
			    system("CLS");
				subject();
				clearscreen();
			}
			else if (option == '8')
			{
				system("CLS");
				events();
				clearscreen();
			}
			else if (option == '9')
			{   
			   system("CLS");
			   header();
			   maininterface();
		}
		}
	}

	// adding data to file
void addintofile(){
fstream file;
file.open("Project.txt",ios::out);
for(int y=0; y<count; y++){
file <<  name[y] <<","<< father[y] <<","<< age[y] <<","<< matricmarks[y]<<","<< discipline[y] <<","<< subjects[y] <<","<< city[y] << endl;		
}
file.close();
}	
// parse data
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
// loading data from the file			
void load(){
fstream file;
string word;
int count=0;
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
// adding data of user into file 	
void addintouserfile(){
fstream file;
file.open("UserInfo.txt",ios::out);
for(int y=0; y<count; y++){
file << name[y]<<","<< father[y]<<","<<age[y]<<","<<discipline[y]<<","<<city[y]<<","<<matricmarks[y]<<endl; 	
}
file.close();	
}
// adding marks into file
void addmarksintofile(){
	fstream file;
	file.open("Marks.txt",ios::out);
	for(int x=0; x<count; x++){
	file <<  English[x]<<","<< Physics[x]<<","<< Chemistry[x] <<","<<Maths[x]<<","<< IslamicStudies[x]<<","<< ComputerScience[x]<<endl;			
	}
}
// loading marks from file
void loadmarks(){
	fstream file;
	string word;
	int count1=0;
	file.open("Marks.txt",ios::in);
	while(!file.eof()){
		getline(file,word);
		if(file.eof()){
			break;
		}
		English[count1]=stoi(parsedata(word,1));
	 Physics[count1]=stoi(parsedata(word,2));
	 Chemistry[count1]=stoi(parsedata(word,3));
	 Maths[count1]=stoi(parsedata(word,4));
	IslamicStudies[count1]=stoi(parsedata(word,5));
	ComputerScience[count1]=stoi(parsedata(word,6));
	count1++;
	}	
// main menu ends		
}

	
	


