	#include <windows.h>
	#include <stdio.h>
	#include <conio.h>                 
	
	void gotoxy(int x, int y){
		
			COORD Cur = {Cur.X=x, Cur.Y=y};
	     
	    	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
	}
	
	int main(void){
		
		//¾Æ ¸ð¸£°Í´Ù 
	int map[10][30] = {
		{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,2,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,4,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7}};
	
	
		char Position;
		
		int Xx=12, Yy=4;
		
		//gotoxy(Xx, Yy);
		//printf("¿Ê");
		
		while(1){
			
			if(kbhit()){
			system("cls");
			
			
			Position=getch();
			
			
			switch(Position){
				
				case 'w':
					Yy--;
					break; 
					case 's':
						Yy++;
						break;
						case 'a':
						Xx--;
						break;
						case 'd':
							Xx++;
							break;
			}
			
		for(int y = 0;y<10;y++)
	    {    
	      for(int x = 0;x<30;x++)
			{
				if(x == Xx && y == Yy)
					printf("¿Ê");
		  	else if (map[y][x] == 7)
		    printf("  ");
		  else if (map[y][x] == 2)
		    printf("¡á");
		     else if (map[y][x] == 4)
		   		 
		    printf(",,");
		     else if (map[y][x] == 1)
		    printf("¢À");
		     else if (map[y][x] == 6)
		    printf("¡ã");
		}
	      printf("\n");
	    }
			
		}
//		gotoxy(Xx,Yy);
		//printf("¿Ê");
		Sleep(2);
			
		}
		
	}
