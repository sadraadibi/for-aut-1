#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
//// 0000000000= i max          o000000000000000 =j max
char map[4][4]={{'0','1','*','1'},{'1','#','1','1'},{'1','1','1','1'},{'#','1','*','1'}};
void get_file (void){
//	  FILE *file;
  //file=fopen("//home//kalagh//testcases//testcase01.txt", "r");
 // static 
}
////////////////////////////////////////////////////////////////////////////////////////
int random (){int q;
   time_t t;
   srand((unsigned) time(&t));
      return ((rand() % 4)+1);
}
int food(){
	
}

void SADRA(){ int i,j,u;char c;
////////////////////////////////
	while (1){
		    for( i=0 ;i<   4/*0000000000000000*/  ; i++) {
        for( j=0; j<   4  /*00000000000000000*/; j++) {
				c=map[i][j];
				if (c== '0'){break;}
        } }	}
        /////////////////////find packman
        while(1){////////////loop

        //////////////////////////////////
        		    for(int o=0 ;o<=   3/*0000000000000000*/  ; o++) {
        for(int p=0; p<=   3  /*00000000000000000*/; p++) {
				printf("%d",map[o][p]);
        } }
        //////////////////////////////////////// print

        u=random();
        switch (u){
        	case 1:
        		if (i > 0 && map[i-1][j]!='#'){
        			map[i][j]=1;
        			map[i-1][j]=0;
				};
        	case 2:
        		if (i < 4/*00000000000000000*/ && map[i+1][j]!='#'){
        			map[i][j]=1;
        			map[i+1][j]=0;
				};
        	case 3:
        		if (j > 0 && map[j-1][j]!='#'){
        			map[i][j]=1;
        			map[i][j-1]=0;
				};
        	case 4:
        		if (j < 4/*000000000000000*/ && map[j+1][j]!='#'){
        			map[i][j]=1;
        			map[i][j+1]=0;
				};
		}
		
		
		
		
	}///////////////loop
		///////////////////////// go
		
		



}// sadra







































int main () {SADRA();}//sadra caller
