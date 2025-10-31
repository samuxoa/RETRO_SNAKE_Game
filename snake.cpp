
#include<iostream>
using namespace std;
//setup then draw then input then logic
//koekta variable declare
bool gameover;
int const width=20;
int const height=20;
int x,y,fruitX,fruitY;
int score;

void setup(){
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
            else cout<<" ";
            if(j==width-1) cout<<"#";
        }
        cout<<endl;
    }
     for(int i=0;i<width+1;i++){
        cout<<"#";
     }
     cout<<endl;

}
void input(){

}
void logic(){

}
int main(){
    setup();
    while(!gameover){
        draw();
        input();
        logic();
    }
}
