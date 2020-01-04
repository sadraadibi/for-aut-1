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

void SADRA(){ int i,j;char c;
////////////////////////////////
	while (1){
		    for( i=0 ;i<3; i++) {
        for( j=0; j<3; j++) {
				c=getchar();
				if (c== '0'){break;}
        } }	}
        /////////////////////find packman
        
        switch (c){
        	case 1:
        		if (i > 0 && map[i-1][j]!='#'){
        			map[i][j]=1;
        			map[i-1][j]=0;
				};
        	case 2:
        		if (i < 00000000000000000 && map[i+1][j]!='#'){
        			map[i][j]=1;
        			map[i+1][j]=0;
				};
        	case 3:
        		if (j > 0 && map[j-1][j]!='#'){
        			map[i][j]=1;
        			map[i][j-1]=0;
				};
        	case 4:
        		if (j < 000000000000000 && map[j+1][j]!='#'){
        			map[i][j]=1;
        			map[i][j+1]=0;
				};
		}
		///////////////////////// go
		
		



}// sadra







































int main () {SADRA();}//sadra caller
