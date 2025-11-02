#include<iostream>
#include<conio.h>
using namespace std;
//setup then draw then input then logic
//koekta variable declare
bool gameover;
int const width=20;
int const height=20;
int x,y,fruitX,fruitY;
int score;
enum edirection {stop=0,LEFT ,RIGHT,UP,DOWN};
edirection dir;

void setup(){
    dir=stop;
    gameover=false;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
    score =0;
}
void draw(){
    system("cls");
    //loop print out kra
    for(int i=0;i<width+1;i++){
        cout<<"#";
    }
    cout<<endl;

    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(j==0) cout<<"#";

            if(i==y && j==x){
                cout<<"O";
            }
            else if(i==fruitY && j==fruitX){
                cout<<"F";
            }
            else{
                    cout<<" ";
            }
            if(j==width-1) cout<<"#";
        }
        cout<<endl;
    }
     for(int i=0;i<width+1;i++){
        cout<<"#";
     }
     cout<<endl;

     //printing agula print hbe vai
     cout<<"SCORE :"<<score<<endl;
     cout<<"LEFT=press 'd'"<<endl;
     cout<<"RIGHT=press 'a'"<<endl;
     cout<<"UP=press 'w'"<<endl;
     cout<<"DOWN=press's'"<<endl;
     cout<<"FOR QUITE PRESS 'x',THANK U"<<endl;


}
void input(){
if(_kbhit()){
    switch(_getch()){
        case 'a': //up jacche vai
                 dir=LEFT;
                  break;
        case 'd': //down e jacche vai
                 dir= RIGHT;
                  break;

        case 'w':
                 dir= UP;
                  break;
        case 's' :
                 dir= DOWN;
                  break;
        case 'x':
            gameover=true;
            break;
    }
}
}
void logic(){
  switch(dir){
    case LEFT:
          x--;
          break;
     case RIGHT:
          x++;
          break;
    case UP:
         y--;
         break;
    case DOWN:
         y++;
         break;
    default:
         break;
  }
    if(x<0 || x> width+2 || y<0 || y>height+2)
        gameover=true;

    if(x==fruitX && y==fruitY){
        score+=10;
        fruitX=rand()%width;
        fruitY=rand()%height;
    }

}
int main(){
    setup();
    while(!gameover){
        draw();
        input();
        logic();
    }
}
