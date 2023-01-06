	//s11, s12, s13, s21, s22, s23, s31, s32, s33
	//string s11 = " ";
	//string s12 = " ";
	//string s13 = " ";
	//string s21 = " ";
	//string s22 = " ";
	//string s23 = " ";
	//string s31 = " ";
	//string s32 = " ";
	//string s33 = " ";



#include <iostream>
using namespace std;




	

void drawBoard(string s11, string s12, string s13, string s21, string s22, string s23, string s31, string s32, string s33){
		
		
	string board[9][9]{			{"  "," ","  ","|  "," ","  |","  "," ","  "},
						{"  ",s11,"  ","|  ",s21,"  |","  ",s31,"  "},
						{"__","_","__","|__","_","__|","__","_","__"},
						{"  "," ","  ","|  "," ","  |","  "," ","  "},
						{"  ",s12,"  ","|  ",s22,"  |","  ",s32,"  "},
						{"__","_","__","|__","_","__|","__","_","__"},
						{"  "," ","  ","|  "," ","  |","  "," ","  "},
						{"  ",s13,"  ","|  ",s23,"  |","  ",s33,"  "},
						{"  "," ","  ","|  "," ","  |","  "," ","  "}};	
		
						
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			cout << board[i][j];
		}
		cout << endl;
	}
}
	



int getMoveX(){
	
	int userMoveX;
		
	while(true){
		cout << "Enter coordinates (x): ";
		cin >> userMoveX;
		if(userMoveX > 3 || userMoveX < 1){
			cout << "Wrong coordinates, try again!" << endl;				
		}else{
			return userMoveX;
			break;
		}		
	}
	
	
		
}



int getMoveY(){
	
	int userMoveY;
			
	while(true){
		cout << "Enter coordinates (y): ";
		cin >> userMoveY;
		if(userMoveY > 3 || userMoveY < 1){
			cout << "Wrong coordinates, try again!" << endl;
		}else{
			return userMoveY;
			break;
		}	
	}	
			
}


//bool isWin(string s11, string s21, string s31){
//	
//	if(s11 == "X" && s21 == "X" && s31 == "X"){
//		cout << "Game over!" << endl;
//		return true;
//	}
//}



int main(){
	
	string s11 = " ";
	string s12 = " ";
	string s13 = " ";
	string s21 = " ";
	string s22 = " ";
	string s23 = " ";
	string s31 = " ";
	string s32 = " ";
	string s33 = " ";
	
	string mark;
	int index = 0;
	
	string usedSq[3][3] = {	{"g","g","g"},
							{"g","g","g"},
							{"g","g","g"}};
	

	while(true){
		
		if(index % 2 == 0){
			mark = "X";
		}else{
			mark = "O";
		}
		
		
		drawBoard(s11, s12, s13, s21, s22, s23, s31, s32, s33);
		
			
		int X = getMoveX();
		int Y = getMoveY();
		
		
		if(usedSq[X][Y] == "g"){
			
			if(X == 1 && Y == 1){
				s11 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 1 && Y == 2){
				s12 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 1 && Y == 3){
				s13 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 2 && Y == 1){
				s21 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 2 && Y == 2){
				s22 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 3 && Y == 1){
				s31 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 3 && Y == 2){
				s32 = mark;
				usedSq[X][Y] = "used";
				
			}else if(X == 3 && Y == 3){
				s33 = mark;
				usedSq[X][Y] = "used";
			}
			
		}else{
			cout<<endl;
			cout<<"You can not move here, try again!"<<endl;
			cout<<endl;
			continue;
		}
		

		
	
		index++;	
	}
	
	
	
	
	


return 0;
}
