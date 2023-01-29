#include <iostream>
using namespace std;
char board[3][3]={{'1','2','3'},
                  {'4','5','6'},
                  {'7','8','9'}
				  };
int choice;	
char turn ='X';
bool draw=false;
int row=0; int coloumn=0;
void tictactoe(){
		cout<<" T I C K T A C T O E " <<"\n";
	cout<<" Player 1= X" <<"\n" << " Player 2 = O "<<"\n" ;
    cout<<"\t\t     |     |     "<<"\n";
	cout<<"\t\t " <<board[0][0] <<"   |" <<board[0][1] <<"\t" <<" "  <<"  | "      <<board[0][2]  <<"\n";
	cout<<"\t\t_____|_____|_____"<<"\n";
	cout<<"\t\t     |     |     "<<"\n";
	cout<<"\t\t " <<board[1][0] <<"   |" <<board[1][1] <<"\t" <<" " <<"  |"      <<board[1][2]  << "\n";
	cout<<"\t\t_____|_____|_____"<<"\n";
	cout<<"\t\t     |     |     "<<"\n";
	cout<<"\t\t " <<board[2][0] <<"   |" <<board[2][1] <<"\t" <<" " <<"  |"      <<board[2][2]  << "\n";  
	 
}		
void playerturn(){
	if(turn=='X')
	 cout<<"\t Player 1[X] Turn : " <<endl;
	 cout<<"\t" ;
	 if(turn=='O')
     cout<<"\t Player 2[0] turn : " <<endl; 
	 cin>>  choice;
	  if(choice <=0 && choice >9){
	 	cout<<" Invalid Number Please enter the number between 1-9" <<endl;
	 }
	 else
	 {
	 switch(choice){
	 	case 1:
	 	row=0; coloumn=0; break;
		case 2:
	 	row=0; coloumn=1; break;
		case 3:
	 	row=0; coloumn=2; break;
		case 4:
	 	row=1; coloumn=0; break;
		case 5:
	 	row=1; coloumn=1; break;
		case 6:
	 	row=1; coloumn=2; break;
		case 7:
	 	row=2; coloumn=0; break;
		case 8:
	 	row=2; coloumn=1; break;
		case 9:
	 	row=2; coloumn=2; break;
		default:{
			cout<<" Invalid Input " <<endl;   
			break;
		}
	 }
	}
	 if(turn=='X' && board[row][coloumn]!='X' && board[row][coloumn]!='O'){
	 	board[row][coloumn]='X';
	 	turn='O';
	 }
	 else if(turn=='O' && board[row][coloumn]!='X' && board[row][coloumn]!='O'){
	 board[row][coloumn]='O';
	 turn='X';	
}
else{
	cout<<" Box already Filled Try Again " <<endl;
	playerturn();
}
}
bool result(){
	for(int i=0; i<3; i++){
		if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i]){
		return false;
	}
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][2]==board[2][0]){
	return false;
}
}
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
	if (board[i][j]!='X' && board[i][j]!='O'){
	return true;
	draw=true;
	return false;
}
}
}
}
main(){ 
  tictactoe();
while(result()){
       playerturn(); 
       system("CLS");
	  tictactoe();

if(turn=='X' && draw==false){
cout<<" Player 2 [O] Wins " <<endl;	
}
else if(turn=='O' && draw==false){
cout<<" Player 1 [X] Wins " <<endl;	
}
else{
	cout<< " Game Draw " <<endl;
}
}
}
