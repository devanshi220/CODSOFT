#include<iostream>
using namespace std;
void display(char TTT[3][3]){
    for(int i=0;i<3;i++){
     cout<<"| ";
     for(int j=0;j<3;j++){
        cout<<TTT[i][j]<<" | ";
     }
     cout<<"\n_____________\n";
    }
    return;
}
void insert(char TTT[3][3],int& row,int& col,char& currentplayer){
    cout<<"player"<<currentplayer<<"\t:enter move\n";
    
cout<<"enter position 1\n"<<endl;
cin>>row;
cout<<"enter position 2\n"<<endl;
cin>>col;
row--;
col--;
if(row<0||row>3||col<0||col>3){
    cout<<"invalid move,try again\n";
    insert(TTT,row,col,currentplayer);
}
else if(TTT[row][col]!=' '){
cout<<"position occupied\n";
insert(TTT,row,col,currentplayer);
}
else{
    TTT[row][col]=currentplayer;
}
}
bool iswinner(char TTT[3][3],int player){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    if(TTT[i][0]==player&&TTT[i][1]==player&&TTT[i][2]==player)
    return true;
    if(TTT[0][j]==player&&TTT[1][j]==player&&TTT[2][j]==player)
    return true; 
    }   
}
if(TTT[0][0]==player&&TTT[1][1]==player&&TTT[2][2]==player)
return true;
if(TTT[0][2]==player&&TTT[1][1]==player&&TTT[2][0]==player)
return true;
return false;

}
bool draw(char TTT[3][3]){
            if(!iswinner(TTT,'X')&&!iswinner(TTT,'O'))
            return false;
}
bool playagain(){
    char choice;
    cout<<"Do you want to play again?(Y/N)";
    cin>>choice;
    return choice=='Y';
}
int main(){
    do{
    char TTT[3][3]={{' ',' ',' '},
                    {' ',' ',' '},
                    {' ',' ',' '}};
    int row,col;
    char currentplayer='X';
    display(TTT);
    int position1,position2;
    cout<<display<<endl;
    while(true){
        display(TTT);
    insert(TTT,row,col,currentplayer);
    if(iswinner(TTT,currentplayer)){
        display(TTT);
        cout<<"player"<<currentplayer<<"wins"<<endl;
        break;
    }
    if(draw(TTT)){
        display(TTT);
        cout<<"draw"<<endl;
        break;
    }
    currentplayer=(currentplayer=='X')?'O':'X';
    }
    }while(playagain());
    return 0;
}
