#include <iostream>
#include <fstream>
#include "spanzuratoarea.cpp"
int main_game();
void read(int z)
{
    ifstream f("clues.in");
    char c[1500];
    for (int i=0; i<z; i++)
        f.getline(c, 1500);
    cout<<c<<'\n';
    f.close();
}
void backstory()
{
    ifstream f("story.in");
    cout << f.rdbuf();
    f.close();
    cout<<"When you are ready to start the game. Press 1."<<'\n';
    int x;
    cin>>x;
    if(x==1) main_game();
}
int main_game()
{
    system("cls");
    cout<<"You can go and get clues from all the locations listed."<<'\n';
    cout<<"You can also request to see the backstory again."<<'\n';
    cout<<"What to you want to do now?"<<'\n';
    cout<<"Type 1 to visit 672nd StationRoad."<<'\n';
    cout<<"Type 2 to visit the Coroner's Office."<<'\n';
    cout<<"Type 3 to visit the Restaurant."<<'\n';
    cout<<"Type 4 to visit Farmacy."<<'\n';
    cout<<"Type 5 to visit Lawyer's Office"<<'\n';
    cout<<"Type 6 to read the backstory again."<<'\n';
    cout<<"If you are ready to guess who the killer is, press 7."<<'\n';
    cout<<"To exit the game press 8."<<'\n';
    int x;
    cin>>x;
    switch(x)
    {
    case 1: {read(1);}break;
    case 2: {read(2); cout<<"Press 1 when you are ready to start."<<'\n'; start_here(1);}break;
    case 3: {read(3);}break;
    case 4: {read(4);}break;
    case 5: {read(5); cout<<"Press 1 when you are ready to start."<<'\n';start_here(2);}break;
    case 6: {backstory();} break;
    case 7: {char c[100];
            cin>>c;
            if (strcmp(c, "Nicholas")==0)
                {cout<<"Your answer was correct!"<<'\n'; return 0;}
            else
                {
                cout<<"You guessed wrong!"<<'\n';
                return 0;
                }
    } break;
    case 8: {exit(0);}
    }
    int y;
    cout<<"When you are ready to do another action, press 1."<<'\n';
    cin>>y;
    if(y==1)
    {
        system("cls");
        main_game();
    }

}


