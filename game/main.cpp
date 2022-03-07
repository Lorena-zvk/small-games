#include "TikTakToe.cpp"
#include "Sudoku.cpp"
#include "murder.cpp"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void select_game();
void get_word(char c[50], char h1[255], char h2[255])
{
    ifstream fin("cuvinte.in");
    srand((int)time(0));
    int random = (rand() % 50) + 1;
    for(int i=1; i <= random; i++)
    {
    fin.getline(c,50);
    fin.getline(h1,255);
    fin.getline(h2,255);
    }
    fin.close();
}

void start_hang()
{
    int x;
    char c[50], h1[255], h2[255];
    get_word(c, h1, h2);
    word w = word(c, h1, h2);
    int p=1, q=1;
    while(w.get_greseli()!=0 && strcmp(w.get_cuv(), w.get_hidden()))
    {
        system("cls");
        set_the_screen(w);
        char x;
        cin>>x;
        w.check(x);
    }
    if (w.get_greseli())
    {
        won(w);
        cout<<"To play again press 1\nTo play another game press 2\n";
        cin>>x;
        if(x==1)
            start_hang();
        else if(x==2)
            select_game();
    }
    else
    {
        lost(w);
        cout<<"To play again press 1\nTo play another game press 2\n";
        cin>>x;
        if(x==1)
            start_hang();
        else if(x==2)
            select_game();
    }
}

void start_tik()
{
    int i,j,x;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i][j]=-1;
    while(win_tik(a)==-1&&fail_tik(a)!=1)
    {
        p1_picks(a);
        if(win_tik(a)==-1&&fail_tik(a)!=1)
            p2_picks(a);
    }
    system("cls");
    display_tik(a);
    if(win_tik(a)==1)
    {
        cout<<"***********PLAYER 1 WON!***************\n\n";
        cout<<"To play again press 1\nTo play another game press 2\n";
        cin>>x;
        if(x==1)
            start_tik();
        else if(x==2)
            select_game();
    }
    else if(win_tik(a)==0)
    {
        cout<<"***********PLAYER 2 WON!***************\n\n";
        cout<<"To play again press 1\nTo play another game press 2\n";
        cin>>x;
        if(x==1)
            start_tik();
        else if(x==2)
            select_game();
    }
    else if(fail_tik(a)==1)
    {
        cout<<"****************TIE!*******************\n\n";
        cout<<"To play again press 1\nTo play another game press 2\n";
        cin>>x;
        if(x==1)
            start_tik();
        else if(x==2)
            select_game();
    }
}

void start_sudoku()
{
    Sudoku s;
    int x,y,n;
    s.make_game();
    while(s.ready()!=1&&s.getlives()!=0)
    {
        system("cls");
        s.display();
        cout<<"     Choose the number and position that you want to complete\n";
        cin>>n>>x>>y;
        s.update(n,x,y);
    }
    system("cls");
    s.display();
    if(s.ready()==1)
    {
        cout<<"\n     CONGRATULATIONS, YOU WON!\n\n";
        cout<<"     To play again press 1\n     To play another game press 2\n";
        cin>>x;
        if(x==1)
            start_tik();
        else if(x==2)
            select_game();
    }
    else if(s.getlives()==0)
    {
        cout<<"\n     YOU LOST! Better luck next time!\n\n";
        cout<<"     To play again press 1\n     To play another game press 2\n";
        cin>>x;
        if(x==1)
            start_tik();
        else if(x==2)
            select_game();
    }
}

void select_game()
{
    int x;
    system("cls");
    cout<<"*************************************************"<<'\n';
    cout<<"                   Game Arcade                   "<<'\n';
    cout<<"*************************************************"<<'\n'<<'\n';
    cout<<"Welcome! Please select one of the available games..."<<'\n'<<'\n';
    cout<<"1. Hangman Game"<<'\n'<<'\n';
    cout<<"2. Tik Tak Toe"<<'\n'<<'\n';
    cout<<"3. Sudoku"<<'\n'<<'\n';
    cout<<"4. Murder Mystery"<<'\n';
    cin>>x;
    if(x==1)
        start_hang();
    else if(x==2)
        start_tik();
    else if(x==3)
        start_sudoku();
    else if(x==4)
    {
        backstory();
        cout<<"     To play again press 1\n     To play another game press 2\n";
        cin>>x;
        if(x==1)
            start_tik();
        else if(x==2)
            select_game();

    }

}

int main()
{
    select_game();
}
