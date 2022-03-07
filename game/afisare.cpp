#include <iostream>
#include <stdlib.h>
#include "words.h"
#include "words.cpp"
using namespace std;
void menu();
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
    cout<<"Hint nr.1"<<'\n';
    cout<<w.get_hint1()<<'\n';
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
    cout<<"Hint nr.2"<<'\n';
    cout<<w.get_hint2()<<'\n';
}
void set_the_screen(word w)
{

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
}
void start()
{
    cout<<"To start guessing press 1."<<'\n';
    cout<<"To exit the game, press 2."<<'\n';
    cout<<'\n'<<'\n';
}
void won(word w)
{

    cout<<'\n'<<'\n';
    cout<<"the word was "<<w.get_cuv()<<'\n';
}
void lost(word w)
{

    cout<<'\n'<<'\n';

    cout<<"the word was "<<w.get_cuv()<<'\n';
}
