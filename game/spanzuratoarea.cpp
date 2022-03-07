#include "words.cpp"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void start_here(int z);
void get_word(char c[50], char h1[255], char h2[255], int z)
{
    ifstream fin("guess.in");
    srand((int)time(0));
    int random = (rand() % 50) + 1;
    for(int i=1; i <= z; i++)
    {
    fin.getline(c,50);
    fin.getline(h1,255);
    fin.getline(h2,255);
     }
    fin.close();
}

void game(int z)
{

    char c[50], h1[255], h2[255];
    get_word(c, h1, h2, z);
    word w = word(c, h1, h2);
    int p=1, q=1;
    while(w.get_greseli()!=0 && strcmp(w.get_cuv(), w.get_hidden()))
    {
        set_the_screen(w);
        char x;
        cin>>x;
        w.check(x);
        system("cls");
    }
    if (w.get_greseli())
        won(w);
    else
        lost(w);


}
void start_here(int z)
{

    int x;
    cin>>x;
    system("cls");
    if (x==1)
        game(z);
    else
        exit(0);
}

