/*************************************************************************
  * Copyright (C) Ashwini Jaypal Lohar ashwinilohar0123@gmail.com
  *
  * This program(hospital management) is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>
**************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include<X11/Xlib.h>
#include <math.h>
#include <termios.h>

static struct termios old, new;
int score = 0, score_tmp = 0, spd, q, t, a = 0 ,i, j, l[6] = {300,90,315,105,301,91}, p, turn, m, n;
char play = 'y';
static int arr[26][13];

void swap(int a,int b);
void bar1();
void bar2();
void check3();

void bar3();
void bar4();
int check0();
int check1();

int check2();
void del();
void rod1();
void rod2();

void box1();
void box2();
void tee1();
void tee2();

void tee3();
void tee4();

void insert();

void again();
void print();
void remove_1();
void frame();


/* Initialize new terminal  */
void initTermios(int echo)  {
	tcgetattr(0, &old); 
	new = old; /* make new settings same as old settings */
	new.c_lflag &= ~ICANON;
	new.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
	tcsetattr(0, TCSANOW, &new);
} /* use these new terminal  now */
void resetTermios(void) {
	tcsetattr(0, TCSANOW, &old);
}

//read char
char getch_(int echo) {
	char ch;
	initTermios(echo);
	ch = getchar();
	resetTermios();
	return ch;
}


char getch_1(void) {
	int XInitThreads(void);	
	return getch_(0);
}


int main() {
	int XInitThreads(void);
	char ch, y;
	int gd = DETECT, gm, area, maxx, maxy, move, lmove, rmove;
	initgraph(&gd, &gm, NULL);
	void *buff;
		do {
			turn = 1;
			score = 0;
			score_tmp = 0;

			do {
	 			cleardevice();
				printf(" \t1-- >Enter Your Choice:\n");
				printf(" \t2-->Basic Level....\n");
				printf(" \t3-->Middle Level...\n");
				printf(" \t4-->Advanced Level..\n");
				printf(" \t5-->Experts Level....\n");
				printf(" \t6-->Professional Level.\n");
				printf("\t 7-->End Game:..........\n");
				y=getch_1();
				system("clear");
				cleardevice();
			
				if(y == '1') {
					spd=200;
				
					outtextxy(2,150," Basic Level ");
					break;
				}
		   		if(y == '2') {
					spd=150;
					outtextxy(2,150,"   Middle Level ");
					break;
				}
				if(y =='3') {
					spd=100;
					outtextxy(2,150,"  Advanced Level ");
					break;
				}
		   		if(y=='4') {
					spd=75;
					outtextxy(2,150,"  Experts Level ");
					break;
				}
		   		if(y=='5') {
					spd=50;
					outtextxy(2,150,"Professional Level ");
					break;
				}
				if(y=='6') {
					exit(1);
					break;
				}
	      
				int XInitThreads(void);
			
			} while(1); //For game level only
		
			frame();

			getch_1();

			int k, ar[2], pr[2], t[6];
			char outstr[20];

			ar[0] = rand() % 2; //choose any random value

			pr[0] = rand() % 6;

			ar[1] = rand() % 2;

			pr[1] = rand() % 6;
	
			while(1) { 	 
				if(score > score_tmp) {
				printf(" score= %d", score);
			}

			score_tmp = score;
			l[0] = 450;
			l[1] = 250;
			l[2] = 465;
			l[3] = 265;
			l[4] = 451;
			l[5] = 251;


			if(y=='1') {
				spd=100;
			}
			if(y=='2') {
				spd=75;
			}
			if(y=='3') {
				spd=50;
			}
			if(y=='4') {
				spd=30;
			}
			if(y=='5') {
				spd=20;
			}

			delay(500);

			t[0] = l[0];
			t[1] = l[1];
			t[2] = l[2];
			t[3] = l[3];
			t[4] = l[4];
			t[5] = l[5];
			a = ar[1];
			p = pr[1];

			if(p == 1) {
				p = 0;
			}
			l[0] = 270;
			l[1] = 90;
			l[2] = 285;
			l[3] = 105;
			l[4] = 271;
			l[5] = 91;

			do {
				int XInitThreads(void); //initilization of thread
				k = 0;
			
				if(kbhit()) {          //when keyboard hit
					ch=getch_1();
			
					if(ch == 'e') {
						exit(1);
					}
					if(ch =='r') {
				
						move=check1();
						if(move==0) {
							l[0] += 15;
							l[2] += 15;
							l[4] += 15;
						
							k = 1;
						}
					}
						
					if(ch =='l') {

						move = check2();
						if(move == 0) {
							l[0] -= 15;
							l[2] -= 15;
							l[4] -= 15;
							
							k = 1;
						}
					}

					if(ch == 80) { 
						spd = 10;
					}
					if(ch == 27) {
						exit(0);
					}
					if(ch == 32) {
						k = 1;

						if(p == 4||p == 5)
							switch(p) {
								case 4:  
									if(a == 0) 
										a++;
									else 
										p++;
										break;
								case 5:  
									if( a == 1) 
										a--;
									else 
										p--;
							}
									
					if(p == 1 || p == 2) 
						switch(p)
						{  
							case 1:  
								if(a == 0) 
									a++;
								else 
									p++;

								l[0] = 270;
								l[2] = 285;
								l[4] = 271;
								break;

							case 2:  
								if( a == 1)
									a--;
								else
									p--;
								l[0] = 270;
								l[2] = 285;
								l[4] = 271;

						}

						if(p == 3)  
						{ 
							if(a == 0)
								a++;
							else 
								a = 0;

							l[0] = 270;
							l[2] = 285;
							l[4] = 271;
						}

					}
						
					if( a == 1)    
					{
						swap(l[0],l[1]);
						swap(l[2],l[3]);
						swap(l[4],l[5]);
					}
				}//EOF kbhit

                              //printf("kbhit out");

				move = check0();

				if(move == 1) 
					break;
				print();
				fflush(stdin);
				if(k == 1) 
					delay(0);
				else 
					delay(spd);

				remove_1();

				if(k == 0) {
					l[1] += 15;
					l[3] += 15;
					l[5] += 15;
				}
			} while(1);

			print();

			fflush(stdin);

			insert();

			check3();

			a = ar[0];

			p = pr[0];

			l[0] = t[0];
			l[1] = t[1];
			l[2] = t[2];
			l[3] = t[3];
			l[4] = t[4];
			l[5] = t[5];

			remove_1();

			ar[1] = ar[0];

			pr[1] = pr[0];

			ar[0] = rand() % 2;//choose any random value

			pr[0] = rand() % 6;

			if(pr[0] == 2) 
				pr[0]=3;

			if(turn == 0) 
				break;

		}

	} while(play == 'y');
	return 0;
}





void swap(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;

}

// For bar shaped tetree
void bar1() { 	
	if(a == 0 && i < 1) {
		l[0]  +=  15;
		l[2]  +=  15;
		l[4]  +=  15;
	}
	if(a == 0 && i >= 1) {
		l[1]  +=  15;
		l[3]  +=  15;
		l[5]  +=  15;
	}

	if(a == 1 && i == 1) {
		l[0]  -=  15;
		l[2]  -=  15;
		l[4]  -=  15;
		l[1]  -=  15;
		l[3]  -=  15;
		l[5]  -=  15;
	}
	if(a == 1 && i == 0) {
		l[1]  +=  15;
		l[3]  +=  15;
		l[5]  +=  15;
	}
	if(a == 1 && i > 0) {
		l[0]  -=  15;
		l[2]  -=  15;             
		l[4]  -=  15;
	}

	if(a == 2 && i >= 2) {
		l[0]  -=  15;
		l[2]  -=  15;
		l[4]  -=  15;
	}
	if(a == 2 && i < 2) {
		l[1]  +=  15;
		l[3]  +=  15;
		l[5]  +=  15;
	}
}

void bar2() { 
	if(a == 0 && i >= 3) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	if(a == 0 && i < 3) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}

	 if( a == 1 && i < 3)  {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
		  
	if( a == 1 && i == 3) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}

	if(a == 2 && i < 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	if(a == 2 && i >= 2) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
}

void bar3() {
	if(a == 0 && i >= 3) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	if(a == 0 && i < 3) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
	if(a == 2 && i < 2) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	if(a == 2 && i >= 2) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
	if( a == 1 && i >= 1) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	if( a == 1 && i < 1) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
}

void bar4() {
	if(a == 0 && i < 1) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	
	if(a == 0 && i >= 1) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
 
	if(a==2 && i >= 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	if(a==2 && i < 2) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
	if( a == 1 && i < 3) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	if( a == 1 && i == 3) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
}

void rod1() {

	if(a == 0) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	else    {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
}
void rod2() {

	if(a == 0) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	else  {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}

 }
// for Box shaped tetris
void box1() {
	if(i < 1) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	 
	}
	
	if(i == 1) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
	
	if(i == 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
 }
 
void box2() {
	if(i < 1) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	
	if(i == 1) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
	
	if(i == 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
 }
 
void tee1() {
    
	if(a == 0 && i == 1) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
    
	if(a == 0 && i < 1) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
    
	if(a == 0 && (i == 2 || i == 3)) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	 if(a>0 && i == 2) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
    
	if(a > 0 && i == 0) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
    
	if(a>0 && (i == 1)) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}

}
  
void tee2() {
    if(a == 0 && i == 0) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
    
	if(a == 0 && i == 1) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	if(a == 0 && i == 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}

	if(a > 0 && i == 2) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
	
	if(a > 0 && i == 1) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	if(a > 0 && i == 0) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}


}
void tee3() {  
	if(a == 0 && i == 0) 
	{
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
	
	if(a == 0 && i == 2) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
	
	if(a == 0 && i == 1) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}


	if(a > 0 && i == 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
		  
	if(a > 0 && i == 0) {
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
	if(a>0 && (i == 1)) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	}
}

void tee4() {  
	if(a == 0 && i==1) {	
		l[1] += 15;
		l[3] += 15;
		l[5] += 15;
	}
	if(a == 0 && i == 0) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}
	
	if(a == 0 && i == 2) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
	}

	if(a > 0 && i == 2) {
		l[0] += 15;
		l[2] += 15;
		l[4] += 15;
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
	
	if(a > 0 && i == 0) {
		l[1] -= 15;
		l[3] -= 15;
		l[5] -= 15;
	}
	if(a > 0 && i == 1) {
		l[0] -= 15;
		l[2] -= 15;
		l[4] -= 15;
	 
	}

}

check0() { 
	int x, y, s, d = 5;


	x = (l[0] - 180) / 15;

	y = (l[1] - 90) / 15;

	if(a == 0) {
		switch (p) { 
			case 0: y += 2;
				d = 2;
				if(arr[y][x-1] == 1) 
				return(1);
			else 
				break;
			case 1: y += 4;
				x++;
				d = 1;
				if(arr[y-3][x-1] == 1) 
				return(1);
			else 
				break;

			case 2: y = y+4;
				d = 2;
				x += 1;
				break;

			case 3: y = y + 1;
				d = 5;
				x += 4;
				break;

			case 4: y += 2;
				d = 3;
				x++;
				break;

			case 5: y += 1;
				d = 3;
				if(arr[y+1][x-1] == 1) 
					return(1);
				else 
					break;

		}
		
		for(s=1; s<d; s++,x--)
			if(arr[y][x] == 1) 
				return(1);

		if((arr[y][x]) == 0) 
				return(0);
		else 
				return(1);

	}
		if( a == 1) {
			switch (p) {
				case 0: y += 2;
					d = 2;
					if(arr[y][x-1] == 1) 
					return(1);
				else 
					break;

				case 1: y = y + 2;
					d = 4;
					if(arr[y][x] == 1) 
					return(1);
				else 
					break;

				case 2: y = y + 2;
					d = 4;
					x += 3;
					if(arr[y][x-3] == 1) 
					return(1);
				else 
					break;

				case 3: y = y + 5;
					d = 0;
					break;

				case 4: y += 3;
					d = 0;
					if(arr[y-1][x+1] == 1) 
					return(1);
				else 
					break;

				case 5: y += 3;
					d = 0;
					if(arr[y-1][x-1] == 1) 
					return(1);
				else 
					break;

		}
		
		for(s = 1;s < d;s++, x--)
			if(arr[y][x] == 1) 
				break;

		if((arr[y][x]) == 0) 
			return(0);
		else 
			return(1);

	}


	return(0);

}


int check1() {  
	int x,y,s,d=5;

	x=(l[0]-150)/15;
	y=(l[1]-90)/15;

//	printf("Check1 -- p --> %d",p);

	if(a == 0)
	{
		switch (p)
		{  
			case 0: 
				x = x - 1;
				y++;
				d = 2;
				break;

			case 1: x = x;
				d = 3;
				y = y + 3;
				break;

			case 2: x = x;
				d = 4;
				y += 3;
				break;

			case 3: x = x + 3;
				d = 0;
				break;

			case 4: x = x;
				break;

			case 5: x = x - 1;
				d = 0;
		}
		
		for(s = 0;s < d; s++, y--)
			if(arr[y][x] == 1) 
				break;

		if((arr[y][x]) == 0) 
			return(0);
		else 
			return(2);
	}


	if( a == 1) {   
		switch(p) {   
			case 0: x = x;
				break;

			case 1: x = x;
				d = 1;
				break;

			case 2: x = x + 3;
				break;

			case 3: x = x;
				y += 5;
				d = 4;
				break;

			case 4: x = x + 1;
				break;

			case 5: x = x;
				y += 2;
				d = 2;
		}

		for(s = 0;s < d; s++, y--)
			if(arr[y][x-1] == 1) 
				break;

		if((arr[y][x-1]) == 0) 
			return(0);
		else 
			return(2);

	}
	return(0);

}


int check2() {
	int x, y, s, d = 5;

	x = (l[0] - 150) / 15;

	y=(l[1] - 90) / 15;
	if(a == 0) {
		switch (p) {
			case 0: 
				x = x - 1;
				d = 1;
				break;

			case 1: 
				x = x;
				d = 3;
				break;

			case 2: 
				x = x;
				d = 3;
				break;

			case 3: 
				x = x;
				d = 0;
				break;

			case 4: 
				x = x - 1;
				d = 1;
				break;

			case 5: x = x - 2;
				d = 0;
		}
				
		for(s = 0;s < d;s++, y++)
			if(arr[y][x-3] == 1) 
			break;

		if((arr[y][x-3]) == 0) 
			return(0);
		else 
			return(2);

	}
	if( a == 1) {
		switch (p) { 
			case 0: 
				x = x - 4;
				d = 2;
				break;

			case 1: 
				x = x - 6;
				d = 0;
				break;

			case 2: 
				x = x - 3;
				d = 2;
				y -= 1;
				break;

			case 3: 
				x = x - 3;
				d = 5;
				break;

			case 4: 
				x -= 3;
				d = 3;
				break;

			case 5: 
				x -= 4;
				d = 4;

			}
			    
			for(s = 1;s<d;s++, y++)
		   		if(arr[y][x] == 1) 
					break;

			if((arr[y][x]) == 0) 
				return(0);
			else 
				return(2);

	}
	
	return(0);

}

void check3() {
	for(t = 1;t < 25;t++)
		for(q = 1; q < 12; )
			if(arr[t][q] == 1) { 
				q++;
				if(q == 12) {
					score += 100;
					del();
				}
			}  
			else 
				break;  

}

//for inserting tetris into the rectangle
void insert() { 
	int x, y;
	for(i = 0;i < 5;i++) {
		x = (l[0] - 180) / 15;
		y = (l[1] - 90) / 15;
		arr[y][x] = 1;

		switch(p) {
			case 0: box2();
				break;

			case 1: bar2();
				break;

			case 2: bar4();
				break;

			case 3: rod2();
				break;

			case 4: tee2();
				break;

		   	case 5: tee4();
				break;

		 }
	}

	if(arr[0][5] == 1 || arr[0][6] == 1) {
		outtextxy(180, 50, " GAME OVER ");
		fflush(stdin);
		getch_1();
		turn = 0;
		again();
	}

}

void print() {
	for(i = 0;i < 5;i++) {
		setcolor(GREEN);

		rectangle(l[0] + 1, l[1] + 1, l[2] - 1, l[3] - 1);

		floodfill(l[4] + 1, l[5] + 1, GREEN);
		//printf("p=%d",p);
		if(i<4) 
			switch(p) { 
				case 0 : box1();
					break;

				case 1 : bar1();
					break;

				case 2 : bar3();
					break;

				case 3 : rod1();
					break;

				case 4 : tee1();
					break;

				case 5 : tee3();
					break;


			}
	}

}

void remove_1() {
	for(i = 0;i < 5;i++) {
		setcolor(BLACK);

		rectangle(l[0] + 1, l[1] + 1, l[2] - 1, l[3] - 1);

		floodfill(l[4] + 1, l[5] + 1, BLACK);

	 if(i < 4) 
		 switch (p) { 
				case 0 : box2();
					break;

				case 1 : bar2();
					break;

				case 2 : bar4();
					break;

				case 3 : rod2();
					break;

				case 4 : tee2();
					break;

			   	case 5 : tee4();
					break;
			   }
	}

}

void del() { 
	int m, n;
	for(;t > 0; t--)
		for(q = 1;q < 12;q++)
			arr[t][q] = arr[t-1][q];
	
	for(n = 0;n < 25;n++) {
	//delay(50);
		for(m = 1;m < 12;m++) {
	
			if(arr[n][m] == 1) { 
				setcolor(WHITE);
				rectangle((m * 15) + 181, (n * 15) + 91, (m * 15) + 194, (n * 15) + 104);
				floodfill((m * 15) + 182, (n * 15) + 92, WHITE);
		
			}
		
			else {
				setcolor(BLACK);
				rectangle((m * 15) + 181, (n * 15) + 91, (m * 15) + 194, (n * 15) + 104);		
				floodfill((m * 15) + 182, (n * 15) + 92, BLACK);
		
			}
		
		
		}
	}
}


// For creating a frame
void frame() {  
	int XInitThreads(void);
	outtextxy(200, 3, " TETTRIS ");
	setcolor(RED);
	outtextxy(400, 440, "Press 'e' To Exit");
	outtextxy(5, 285, "      PRESS     ");
	outtextxy(5, 300, "L for LEFT shift");
	outtextxy(5, 315, "R for RIGHT shift");
	rectangle(180, 465, 375, 480);
	floodfill(181, 466, WHITE);
	rectangle(180, 90, 194, 480);
	floodfill(181, 95, WHITE);
	rectangle(361, 90, 375, 480);
	floodfill(362, 95, WHITE);
	setcolor(WHITE);
	outtextxy(400, 200, " Next To Come ");
	rectangle(400, 230, 530, 335);
	floodfill(401, 231, WHITE);
	for(m  = 0;m < 26;m++) 
		for(n = 0;n < 13;n++)
			arr[m][n] = 0;	
	for(m = 0, n = 0;n < 26;n++) 
		arr[n][m] = 1;
	for(n = 12, m = 0; m < 26;m++) 
		arr[m][n] = 1;
	for(m = 25, n = 0;n < 13;n++)
		arr[m][n] = 1;
}
//for playing game again....
void again() {
	cleardevice();
	setcolor(WHITE);
	rectangle(150, 175, 530, 335);
	floodfill(159, 179, BLACK);
	setcolor(WHITE);
	outtextxy(175, 200, "   Enter Your Choice  ");
	outtextxy(175, 220, " Press 'Y' To Play Again ");
	outtextxy(175, 240, " Press Any Key To Exit ");
	play = getch_1();
	if(play == 'y') { 
		cleardevice();
	}
	else {
		closegraph();
	}
}
