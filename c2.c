#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define xxxxxxxx 10
#define yyyyyyyy 10



//2 -> pacman
//1 -> fruit
//0 -> block
//5 -> empty





int pacmanx=0;
int pacmany=0;
int count=0;

////////////////////////////////////////////
void move (int pacmanx,int pacmany , int map [yyyyyyyy][xxxxxxxx]) {
		int key = getch();
		map[pacmany][pacmanx] = 5;
	switch(key) {
		case 72: 			if (pacmany > 0 && map[pacmany-1][pacmanx])pacmany--;
				map[pacmany][pacmanx] = 2;
			break;;//UP 
		case 80: 			if (pacmany + 1 < yyyyyyyy && map[pacmany+1][pacmanx])pacmany++;
				map[pacmany][pacmanx] = 2;
			break;//DOWN 
		case 75: 		    if (pacmanx > 0 && map[pacmany][pacmanx-1])pacmanx--;
				map[pacmany][pacmanx] = 2;;//LEFT
		case 77: 			if (pacmanx + 1 < xxxxxxxx && map[pacmany][pacmanx+1])pacmanx++;
				map[pacmany][pacmanx] = 2;	
			break;//RIGHT
		
		default:printf("h") ;
	}
	


	
}
///////////////////////////////////////////////
void printmap (int map[yyyyyyyy][xxxxxxxx]) {
	for (int i = 0; i < yyyyyyyy; i++){
		for (int j = 0; j < xxxxxxxx; j++) {
			char box = ' ';
			if (!map [i][j]) {box = 219;

			}else if(map [i][j] == 2 && count%2==0) {
				box = 99;count++;
			}else if(map [i][j] == 2 && count%2==1) {
				box = 67;count++;
			}else if (map [i][j] == 1)
				box = 248; else box = 32;
			
			printf ("%c", box);
		}
		printf ("\n");
	}
}


//////////////////////////////////////

int main () {
	
	
	
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
	while(1){
		move(pacmanx , pacmany , map [yyyyyyyy][xxxxxxxx]);
		printmap( map[yyyyyyyy][xxxxxxxx]);
	}

}
