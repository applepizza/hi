#include <windows.h>
#include <stdio.h>
#include <conio.h>                 //ĳ���� �����̴�  

void gotoxy(int x, int y){
	
		COORD Cur = {Cur.X=x, Cur.Y=y};
     
    	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}

int main(void){
	
	char Position;
	
	int Xx=20, Yy=30;
	
	gotoxy(Xx, Yy);
	printf("��");
	
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
		
	}
	gotoxy(Xx,Yy);
	printf("��");
	Sleep(9.2);
		
	}
	
}
