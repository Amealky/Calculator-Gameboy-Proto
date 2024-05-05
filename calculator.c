#include <stdio.h>
#include <stdlib.h>
#include <gb/gb.h>
#include <gbdk/console.h>


unsigned char num1[4];
unsigned char num2[4];
unsigned int result = 0;
unsigned int x, y, i;

void clear()
{                               
	x = 0;
	y = 0;
	for(y = 0; y < 20; y++)
	{
		for(x = 0; x < 30; x++){
			gotoxy(x, y);              /* moves the postion to x,y */
			setchar(' ');
		}
	}
							
	gotoxy(0,0);                   
}

void showManualScreen() {
	clear();
	puts("---  CALCULATOR ---\n");
	puts("  ---  MANUAL ---\n");
	puts("Arrow to move\n");
	puts("A to select\n");
	puts("B to erase\n");
	puts("Start to validate\n");
	puts("\n");
	puts("Select to exit this\n");

	waitpad(J_SELECT);
	showStartScreen();
}

void showStartScreen() {
	clear();

	puts(" Created By Amealky \n");
	puts("---  CALCULATOR ---\n");
	puts(" Select for manual \n");
	puts("\n");
	puts("\n");
	puts("\n");
	puts("    Press Start \n");

	while(joypad() != J_START) {
		if(joypad() & J_SELECT) {
			showManualScreen();
		}
	}

}

int main() {

	do {
		
		showStartScreen();

		clear();

		puts("  --- Addition --- ");
		puts("First Number: ");
		gets(num1);

		puts("2ieme nombre : ");
		gets(num2);

		puts("Result: ");
		printf("%d", atoi(num1) + atoi(num2));

		puts("\n");
		puts("\n");
		puts("\n");
		puts("    Press start   ");

	} while(waitpad(J_START));

	return 0;
}

