#include<iostream>
using namespace std;
void drawingboard(char pattern[3][3]){
    cout<<"\n##################################\n\n";
    
    for (int i=0;i<3;i++){
        cout<<"| ";
        for (int j=0;j<3;j++){
            cout<<(pattern[i][j])<<" | ";
        }
        
        cout<<endl;
    }
    cout<<"\n################################\n";
}
bool checkWin(char pattern[3][3], char count)  
{ 
	// Check rows, columns, and diagonals 
	for (int i = 0; i < 3; i++) { 
		if (pattern[i][0] == count && pattern[i][1] == count 
			&& pattern[i][2] == count) 
			return true; 
		if (pattern[0][i] == count && pattern[1][i] == count 
			&& pattern[2][i] == count) 
			return true; 
	} 
	if (pattern[0][0] == count && pattern[1][1] == count 
		&& pattern[2][2] == count) 
		return true; 
	if (pattern[0][2] == count && pattern[1][1] == count 
		&& pattern[2][0] == count) 
		return true; 
	return false; 
} 
int main(){
    char pattern[3][3] = {{' ',' ',' '},
                          {' ',' ',' '},
                          {' ',' ',' '}};
    int x , y, i;char count='X';
    drawingboard(pattern);
    for (i=0;i<9;i++){
        if (count=='X'){ 
            while (true){
                cout<<"Player 1 :::  Enter number between column 0-2 , row 0-2 : ";
                cin>>x>>y;    
                if (pattern[x][y] != ' ' || x < 0 || x > 2 || y < 0 || y > 2) { cout << "Invalid move. Try again.\n"; }
                else {break;}
                }
            pattern[x][y]=count;
            drawingboard(pattern);
             if (checkWin(pattern , count)){
            cout<<"you win";break;
            }
            count='O';
            if (i==8){cout<<"\n\nDraw \n\n\n";break;}
            }
        else{
            cout<<"Player 1 :::  Enter number between column 0-2 , row 0-2 : ";
            cin>>x>>y;
            pattern[x][y]=count;
            drawingboard(pattern);
             if (checkWin(pattern , count)){
            cout<<"you win";break;
            }    
            count='X';
        }
    }    
}