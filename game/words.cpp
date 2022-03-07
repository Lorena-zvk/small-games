#include "words.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

word::word(const char* w,const char* h1,const char* h2)
{
    this->greseli = 12;
    this->cuv = new char[50];
    this->hint1 = new char[255];
    this->hint2 = new char[255];
    this->hidden = new char[50];
    strcpy(this->cuv, w);
    strcpy(this->hint1, h1);
    strcpy(this->hint2, h2);
    for (int i=0; i<strlen(w); i++)
        this->hidden[i]='*';
    this->hidden[strlen(w)]='\0';
}
word::word(const word &w)
{
    this->cuv = new char[50];
    this->hint1 = new char[255];
    this->hint2 = new char[255];
    this->hidden = new char[50];
    strcpy(this->cuv, w.cuv);
    strcpy(this->hint1, w.hint1);
    strcpy(this->hint2, w.hint2);
    strcpy(this->hidden, w.hidden);
    this->greseli = w.greseli;
}
word::~word()
{
    delete[] this->cuv;
    delete[] this->hint1;
    delete[] this->hint2;
    delete[] this->hidden;
}

char* word::get_cuv()
{
    return this->cuv;
}
char* word::get_hint1()
{
    return this->hint1;
}
char* word::get_hint2()
{
    return this->hint2;
}
char* word::get_hidden()
{
    return this->hidden;
}
int word::get_greseli()
{
    return this->greseli;
}
word::set_cuv(const char* d)
{
    strcpy(this->cuv, d);
    for (int i=0; i<strlen(d); i++)
        this->hidden[i]='*';
}
word::set_hint1(const char* d)
{
    strcpy(this->hint1, d);
}
word::set_hint2(const char* d)
{
    strcpy(this->hint2, d);
}
word::set_greseli(int d)
{
    this->greseli = d;
}
void word::check(char d)
{
    int s=0;
    for (int i=0; i<strlen(this->cuv); i++)
        if (this->cuv[i]==d && this->hidden[i]=='*')
    {
        s++;
        this->hidden[i] = d;
    }
    if(!s)
        this->greseli--;
}
void print_12()
{
     for (int i=0; i<13; i++)
        cout<<'\n';
}
void print_11()
{
    for (int i=0; i<12; i++)
        cout<<'\n';
    cout<<"#####################"<<'\n';
}
void print_10()
{
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"#####################"<<'\n';
}

void print_9()
{
    cout<<"     ############"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"#####################"<<'\n';
}
void print_8()
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #"<<'\n';
    cout<<"     # #"<<'\n';
    cout<<"     ##"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"#####################"<<'\n';
}
void print_7()
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"#####################"<<'\n';

}
void print_6(word w)
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##        _|_"<<'\n';
    cout<<"     #        |   |"<<'\n';
    cout<<"     #         ___"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"     #"<<'\n';
    cout<<"#####################"<<'\n';
    cout<<'\n'<<'\n';
    cout<<"Seems like things are not going so good. Here's a hint to help you out."<<'\n';
    cout<<"***"<<w.get_hint1()<<"***"<<'\n';
}
void print_5()
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##        _|_"<<'\n';
    cout<<"     #        |   |"<<'\n';
    cout<<"     #         ___"<<'\n';
    cout<<"     #          | "<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #           "<<'\n';
    cout<<"     #           "<<'\n';
    cout<<"#####################"<<'\n';
}
void print_4()
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##        _|_"<<'\n';
    cout<<"     #        |   |"<<'\n';
    cout<<"     #         ___"<<'\n';
    cout<<"     #          | "<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #         / "<<'\n';
    cout<<"     #        /   "<<'\n';
    cout<<"#####################"<<'\n';
}
void print_3()
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##        _|_"<<'\n';
    cout<<"     #        |   |"<<'\n';
    cout<<"     #         ___"<<'\n';
    cout<<"     #          | "<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #         / \\"<<'\n';
    cout<<"     #        /   \\"<<'\n';
    cout<<"#####################"<<'\n';
}
void print_2()
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##        _|_"<<'\n';
    cout<<"     #        |   |"<<'\n';
    cout<<"     #       \\ ___"<<'\n';
    cout<<"     #        \\ | "<<'\n';
    cout<<"     #         \\|"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #         / \\"<<'\n';
    cout<<"     #        /   \\"<<'\n';
    cout<<"#####################"<<'\n';
}
void print_1(word w)
{
    cout<<"     ############"<<'\n';
    cout<<"     #  #       #"<<'\n';
    cout<<"     # #        #"<<'\n';
    cout<<"     ##        _|_"<<'\n';
    cout<<"     #        |   |"<<'\n';
    cout<<"     #       \\ ___ /"<<'\n';
    cout<<"     #        \\ | /"<<'\n';
    cout<<"     #         \\|/"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #          |"<<'\n';
    cout<<"     #         / \\"<<'\n';
    cout<<"     #        /   \\"<<'\n';
    cout<<"#####################"<<'\n';
    cout<<'\n'<<'\n';
    cout<<"Careful now, this is your last chance to get the word right. Here's a hint to help you out."<<'\n';
    cout<<"***"<<w.get_hint2()<<"***"<<'\n';
}
void set_the_screen(word w)
{
    cout<<"*************************************************"<<'\n';
    cout<<"                  Hangman Game                   "<<'\n';
    cout<<"*************************************************"<<'\n'<<'\n';
    cout<<'\n'<<'\n';
    switch(w.get_greseli())
    {
    case 1: print_1(w); break;
    case 2: print_2(); break;
    case 3: print_3(); break;
    case 4: print_4(); break;
    case 5: print_5(); break;
    case 6: print_6(w); break;
    case 7: print_7(); break;
    case 8: print_8(); break;
    case 9: print_9(); break;
    case 10: print_10(); break;
    case 11: print_11(); break;
    case 12: print_12(); break;
    }
    cout<<"____________________________________"<<'\n';
    cout<<'\n'<<'\n';
    cout<<w.get_hidden();
    cout<<'\n'<<'\n';
    cout<<"____________________________________"<<'\n';
    cout<<"Try to guess a letter."<<'\n';
}
void won(word w)
{
    system("cls");
    cout<<"*************************************************"<<'\n';
    cout<<"                  Hangman Game                   "<<'\n';
    cout<<"*************************************************"<<'\n'<<'\n';
    cout<<'\n'<<'\n';
    cout<<"*******************YOU WON!**********************"<<'\n';
    cout<<'\n'<<'\n';
    cout<<"*************************************************"<<'\n';
    cout<<"The word was: "<<w.get_cuv()<<'\n';
    cout<<"*************************************************"<<'\n'<<'\n';
}
void lost(word w)
{
    system("cls");
    cout<<"*************************************************"<<'\n';
    cout<<"                  Hangman Game                   "<<'\n';
    cout<<"*************************************************"<<'\n'<<'\n';
    cout<<'\n'<<'\n';
    cout<<"******************YOU LOST!**********************"<<'\n';
    cout<<'\n'<<'\n';


}


