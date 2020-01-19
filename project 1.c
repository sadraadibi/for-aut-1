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
//8 === block
//5 === empty
//0 === out of reng




int pacmanx=1;
int pacmany=1;
int count=1;
////////////////////////////////////////////
void scanmap (int map[yyyyyyyy][xxxxxxxx], char const* fileAddress){
	FILE* source = fopen (fileAddress, "r");
	int count=0;
	int i = 0;
	int j = 0;

	if (source == NULL) {
		printf ("FIle Dont Exist\n");
		exit (1);
	}
	while (!feof (source)){
		char bfr = getc (source);

		if (bfr == '*') map [i][j++] = 1;
		if (bfr == '#') map [i][j++] = 8;
		if (bfr == '1') map [i][j++] = 5;
		if (bfr == '0'){
		map [i][j++] = 2;
		pacmanx=j;
		pacmany=i;}
		if (bfr == '\n' ) {
		i++;j=0 ;}
	}
	
	
	
	
	
	
	}
////////////////////////////////////////////
int random (){int q;
   time_t t;
   srand((unsigned) time(&t));
      return ((rand() % 4)+1);

}
////////////////////////////////////////////
void move (int map [yyyyyyyy][xxxxxxxx]) {int x=pacmanx;int y=pacmany;
		int key = random();
		system ("cls");
		map[pacmany][pacmanx] = 5;
	switch(key) {
		case 1: 			if (pacmany > 0 && map[pacmany-1][pacmanx] && map[pacmany-1][pacmanx]!=8)pacmany--;
				map[pacmany][pacmanx] = 2;
			break;;//UP 
		case 2: 			if ( map[pacmany+1][pacmanx] && map[pacmany+1][pacmanx]!=8)pacmany++;
				map[pacmany][pacmanx] = 2;
			break;//DOWN 
		case 3: 		    if (pacmanx > 0 && map[pacmany][pacmanx-1] && map[pacmany][pacmanx-1]!=8)pacmanx--;
				map[pacmany][pacmanx] = 2;
			break;//LEFT
		case 4: 			if ( map[pacmany][pacmanx+1] && map[pacmany][pacmanx+1]!=8)pacmanx++;
				map[pacmany][pacmanx] = 2;	
			break;//RIGHT
				case 45:printf("see you soon") ; exit (1);	break;
		default:printf("keyboard arrow keys\n") ;
	}
	


	
}
///////////////////////////////////////////////
void printmap (int map[yyyyyyyy][xxxxxxxx]) {
	for (int i = 0; i < yyyyyyyy; i++){
		for (int j = 0; j < xxxxxxxx; j++) {SetConsoleTextAttribute(hConsole, 7);
			char box = ' ';
			if (map [i][j]==8) {box = 219;

			}else if(map [i][j] == 2 && count%2==0) {SetConsoleTextAttribute(hConsole, 14);
				box = 99;count++;
			}else if(map [i][j] == 2 && count%2==1) {SetConsoleTextAttribute(hConsole, 14);
				box = 67;count++;
			}else if (map [i][j] == 1){
				box = 248;SetConsoleTextAttribute(hConsole, 12);} 
				else if (map [i][j] == 0) continue; else box = 32;
			
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
		char fileAddress [1000];
	
	printf ("ENTER MAP FILE ADDRESS : ");
	gets (fileAddress);

	system ("cls");
	
	int map [yyyyyyyy][xxxxxxxx]={0};
	scanmap (map,fileAddress);
//	int map [yyyyyyyy][xxxxxxxx] = {
//									8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
//							    	8, 2, 5, 5, 5, 5, 5, 8, 5, 8,
//							    	8, 5, 5, 8, 8, 5, 5, 5, 5, 8,
//							    	8, 5, 5, 5, 5, 5 ,5, 8, 5, 8,
//							    	8, 5, 5, 5, 5, 5, 5, 5, 5, 8,
//							    	8, 5, 5, 8, 5, 5, 5, 5, 5, 8,
//							    	8, 5, 8, 5, 8, 8, 5, 5, 8, 8,
//							    	8, 5, 8, 5, 5, 5, 5, 5, 1, 8,
//							    	8, 6, 5, 5, 5, 5, 5, 5, 5, 8,
//							    	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
//								};
	printmap (map);
	while(x){
		move(map);
		printmap( map);
		x=food(map);
	}
printf("                                                                                                              \n ******  ****** ********** ************** ************** ************** ****************   ********  ******** \n ******  ****** ********** ************** ************** ************** ****************   ********  ******** \n ******  ****** ********** ************** ************** ************** ****************   ********  ******** \n ******  ******   ******   ******             ******     ******  ****** ******    ******     **************   \n ******  ******   ******   ******             ******     ******  ****** ****************     **************   \n ******  ******   ******   ******             ******     ******  ****** ****************       **********     \n ******  ******   ******   ******             ******     ******  ****** ****************         ******       \n **************   ******   ******             ******     ******  ****** ******  ******           ******       \n ************** ********** **************     ******     ************** ******  **********       ******       \n   **********   ********** **************     ******     ************** ******  **********       ******       \n     ******     ********** **************     ******     ************** ******  **********       ******       \n                                                                                                              \n");
getch();
}





