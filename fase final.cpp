#include<stdio.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int x, int y){
HANDLE sex;
sex = GetStdHandle((STD_OUTPUT_HANDLE));
COORD Pos;
Pos.X = x;
Pos.Y = y;

    SetConsoleCursorPosition(sex, Pos);

}

void sincursor(){
HANDLE sex;
sex = GetStdHandle((STD_OUTPUT_HANDLE));
CONSOLE_CURSOR_INFO cur;
cur.dwSize = 1;
cur.bVisible = TRUE;
SetConsoleCursorInfo(sex,&cur);

}
 void pintar_limites(){

    for(int i = 4 ; i<77 ; i++){
            gotoxy(i,1);printf("%c", 178);
            gotoxy(i,32);printf("%c", 178);

    }
    for(int i = 1 ; i<33 ; i++){
            gotoxy(3,i);printf("%c", 177);
            gotoxy(77,i);printf("%c", 177);

}
    for(int i = 4 ; i<40 ; i++){
            gotoxy(i,28);printf("%c", 120);

    }
    for(int i = 38 ; i<77 ; i++){
            gotoxy(i,25);printf("%c", 120);

    }

        for(int i = 4 ; i<40 ; i++){
            gotoxy(i,22);printf("%c", 120);

    }
    for(int i = 38 ; i<77 ; i++){
            gotoxy(i,18);printf("%c", 120);

    }
        for(int i = 4 ; i<40 ; i++){
            gotoxy(i,15);printf("%c", 120);

    }
    for(int i = 38 ; i<77 ; i++){
            gotoxy(i,12);printf("%c", 120);

    }
    for(int i = 41 ; i<62 ; i++){
            gotoxy(i,9);printf("%c", 120);

    }
    for(int i = 38 ; i<43 ; i++){
            gotoxy(i,5);printf("%c", 120);

    }
    for(int i = 38 ; i<39 ; i++){
            gotoxy(i,2);printf("%c", 153);

    }
        for(int i = 38 ; i<39 ; i++){
            gotoxy(i,3);printf("%c", 206);

    }
            for(int i = 37 ; i<38 ; i++){
            gotoxy(i,3);printf("%c", 201);

    }
                for(int i = 39 ; i<40 ; i++){
            gotoxy(i,3);printf("%c", 205);

    }
                    for(int i = 41 ; i<42 ; i++){
            gotoxy(i,3);printf("%c", 184);

    }
                for(int i = 38 ; i<39 ; i++){
            gotoxy(i,4);printf("%c", 186);

    }

                    for(int i = 43 ; i<44 ; i++){
            gotoxy(i,4);printf("%c", 36);

    }
        for(int i = 23 ; i<24 ; i++){
            gotoxy(i,27);printf("%c", 184);

    }
        for(int i = 7 ; i<8 ; i++){
            gotoxy(i,27);printf("%c", 220);

    }
        for(int i = 30 ; i<31 ; i++){
            gotoxy(i,21);printf("%c", 184);

    }

    for(int i = 50 ; i<51 ; i++){
            gotoxy(i,24);printf("%c", 184);

    }

    for(int i = 60 ; i<61 ; i++){
            gotoxy(i,24);printf("%c", 184);

    }
        for(int i = 64 ; i<65 ; i++){
            gotoxy(i,24);printf("%c", 220);

    }
    for(int i = 52 ; i<53 ; i++){
            gotoxy(i,17);printf("%c", 184);

    }
        for(int i = 60 ; i<61 ; i++){
            gotoxy(i,17);printf("%c", 184);

    }


            for(int i = 68 ; i<69 ; i++){
            gotoxy(i,17);printf("%c", 220);

    }

            for(int i = 25 ; i<26 ; i++){
            gotoxy(i,14);printf("%c", 184);

    }

            for(int i = 60 ; i<61 ; i++){
            gotoxy(i,11);printf("%c", 184);

    }
                for(int i = 50 ; i<51 ; i++){
            gotoxy(i,11);printf("%c", 184);

    }
                    for(int i = 50 ; i<51 ; i++){
            gotoxy(i,8);printf("%c", 154);

    }
                        for(int i = 52 ; i<53 ; i++){
            gotoxy(i,8);printf("%c", 87);

    }
                            for(int i = 54 ; i<55 ; i++){
            gotoxy(i,8);printf("%c", 65);

    }
                                for(int i = 56 ; i<57 ; i++){
            gotoxy(i,8);printf("%c", 76);

    }
                        for(int i = 58 ; i<59 ; i++){
            gotoxy(i,8);printf("%c", 68);

    }
                for(int i = 60 ; i<61 ; i++){
            gotoxy(i,8);printf("%c", 73);

    }
            for(int i = 62 ; i<63 ; i++){
            gotoxy(i,8);printf("%c", 82);

    }

                for(int i = 50 ; i<60 ; i++){
            gotoxy(i,6);printf("%c", 120);
    }
                for(int i = 64 ; i<65 ; i++){
            gotoxy(i,8);printf("%c", 33);

    }
 }

int main(){
sincursor();
pintar_limites();

        int x = 5,y = 30;
        gotoxy(x,y);printf("*");



        bool game_over = false;
        while(!game_over){

            if(kbhit()){
                char tecla = getch();
                gotoxy(x,y);printf(" ");
                if(tecla== 'a'&& x>4) x--;
                if(tecla== 'd'&& x+6<82) x++;
                if(tecla== 'w'&& y>2) y--;
                if(tecla== 's'&& y+3<34) y++;


                gotoxy(x,y);printf("*");
            }

            Sleep(30);
        }


        return 0;
}
