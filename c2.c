#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define xxxxxxxx 10
#define yyyyyyyy 10

HANDLE hConsole;

//2 === pacman
//1 === food
//0 === block
//5 === empty





int pacmanx=1;
int pacmany=1;
int count=0;

////////////////////////////////////////////
void move (int map [yyyyyyyy][xxxxxxxx]) {
		getch();
		int key = getch();
		system ("cls");
		map[pacmany][pacmanx] = 5;
	switch(key) {
		case 72: 			if (pacmany > 0 && map[pacmany-1][pacmanx])pacmany--;
				map[pacmany][pacmanx] = 2;
			break;;//UP 
		case 80: 			if (pacmany + 1 < yyyyyyyy && map[pacmany+1][pacmanx])pacmany++;
				map[pacmany][pacmanx] = 2;
			break;//DOWN 
		case 75: 		    if (pacmanx > 0 && map[pacmany][pacmanx-1])pacmanx--;
				map[pacmany][pacmanx] = 2;
			break;//LEFT
		case 77: 			if (pacmanx + 1 < xxxxxxxx && map[pacmany][pacmanx+1])pacmanx++;
				map[pacmany][pacmanx] = 2;	
			break;//RIGHT
		
		default:printf("h") ;
	}
	


	
}
///////////////////////////////////////////////
void printmap (int map[yyyyyyyy][xxxxxxxx]) {
	for (int i = 0; i < yyyyyyyy; i++){
		for (int j = 0; j < xxxxxxxx; j++) {SetConsoleTextAttribute(hConsole, 7);
			char box = ' ';
			if (!map [i][j]) {box = 219;

			}else if(map [i][j] == 2 && count%2==0) {SetConsoleTextAttribute(hConsole, 14);
				box = 99;count++;
			}else if(map [i][j] == 2 && count%2==1) {SetConsoleTextAttribute(hConsole, 14);
				box = 67;count++;
			}else if (map [i][j] == 1){
				box = 248;SetConsoleTextAttribute(hConsole, 12);} else box = 32;
			
			printf ("%c", box);
			
		}
		printf ("\n");
	}
}


//////////////////////////////////////
int food (int map[yyyyyyyy][xxxxxxxx]) {
		for (int i = 0; i < yyyyyyyy; i++){
		for (int j = 0; j < xxxxxxxx; j++) {
			if (map [i][j]== 1) return 1;
		}}
		return 0;}
			
			
			
			
			
//////////////////////////////////////

int main () {int x=1;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	
	int map [yyyyyyyy][xxxxxxxx] = {
									0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
							    	0, 2, 5, 5, 5, 5, 5, 0, 5, 0,
							    	0, 5, 5, 0, 0, 5, 5, 5, 5, 0,
							    	0, 5, 5, 5, 5, 5 ,5, 0, 5, 0,
							    	0, 5, 5, 5, 5, 5, 5, 5, 5, 0,
							    	0, 5, 5, 0, 5, 5, 5, 5, 5, 0,
							    	0, 5, 0, 5, 0, 0, 5, 5, 0, 0,
							    	0, 5, 0, 5, 5, 5, 5, 5, 1, 0,
							    	0, 6, 5, 5, 5, 5, 5, 5, 5, 0,
							    	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
								};
	printmap (map);
	while(x){
		move(map);
		printmap( map);
		x=food(map);
	}
printf("                                                                                                              \n ******  ****** ********** ************** ************** ************** ****************   ********  ******** \n ******  ****** ********** ************** ************** ************** ****************   ********  ******** \n ******  ****** ********** ************** ************** ************** ****************   ********  ******** \n ******  ******   ******   ******             ******     ******  ****** ******    ******     **************   \n ******  ******   ******   ******             ******     ******  ****** ****************     **************   \n ******  ******   ******   ******             ******     ******  ****** ****************       **********     \n ******  ******   ******   ******             ******     ******  ****** ****************         ******       \n **************   ******   ******             ******     ******  ****** ******  ******           ******       \n ************** ********** **************     ******     ************** ******  **********       ******       \n   **********   ********** **************     ******     ************** ******  **********       ******       \n     ******     ********** **************     ******     ************** ******  **********       ******       \n                                                                                                              \n");
getch();
}





/*
int main () {

	char fileAddress [MAX];
	
	printf ("ENTER SOURCE FILE ADDRESS : ");
	gets (fileAddress);

	system ("cls");
}
void scanTable (coord* pacman, short table[MCOLUMN][MROW], char const* fileAddress){
	FILE* source = fopen (fileAddress, "r");

	int i = 0;
	int j = 0;

	if (source == NULL) {
		SetConsoleTextAttribute(hConsole, 76);
		printf ("FIle Not Exist\n");
		SetConsoleTextAttribute(hConsole, 15);
		exit (1);
	}
	while (!feof (source)){
		char bfr = getc (source);

		if (bfr == '*') table [i][j++] = 1;
		if (bfr == '#') table [i][j++] = 0;
		if (bfr == '1') table [i][j++] = -1;
		if (bfr == '0') {
			table [i][j++] = 2;
			pacman->x = j-1;
			pacman->y = i;
		}

		else if (bfr == '\n') {
			i++;
			if (j > ROW) ROW = j; j = 0;
		}
	}
}


*/
