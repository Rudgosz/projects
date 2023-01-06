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
	
	
	

	
	
	string board[9][9]{	{"  "," ","  ","|  "," ","  |","  "," ","  "},
						{"  ",s11,"  ","|  ",s12,"  |","  ",s13,"  "},
						{"__","_","__","|__","_","__|","__","_","__"},
						{"  "," ","  ","|  "," ","  |","  "," ","  "},
						{"  ",s21,"  ","|  ",s22,"  |","  ",s23,"  "},
						{"__","_","__","|__","_","__|","__","_","__"},
						{"  "," ","  ","|  "," ","  |","  "," ","  "},
						{"  ",s31,"  ","|  ",s32,"  |","  ",s33,"  "},
						{"  "," ","  ","|  "," ","  |","  "," ","  "}};
						
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			cout << board[i][j];
		}
		cout << endl;
	}
}
	



int enterMove(){
	
}






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


	drawBoard(s11, s12, s13, s21, s22, s23, s31, s32, s33);
	
	
	
	
	
	
	
	


return 0;
}
