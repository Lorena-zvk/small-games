#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Sudoku
{
private:
    struct matrix
    {
        int value,hidden;
    }a[9][9];
    int lives;
public:
    void make_game();
    void display();
    int getlives();
    int ready();
    void update(int n,int x,int y);
};
void Sudoku::make_game()
{
    ifstream fin("sudoku_templates.in");
    int i,j,k,x;
    lives=5;
    srand((int)time(0));
    int random = (rand() % 5) + 1;
    for(k=1;k<random;k++)
        for(i=0;i<9;i++)
            for(j=0;j<9;j++)
                fin>>x;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        {
            fin>>a[i][j].value;
            a[i][j].hidden=0;
        }
    int v1[25]={1,1,1,1,1,2,2,2,2,3,3,4,4,4,5,5,6,6,6,6,7,8,8,9,9};
    int v2[25]={1,3,4,6,7,2,3,4,6,3,9,4,6,9,7,9,2,3,4,5,1,1,5,5,9};
    if(random%3!=0)
        for(i=0;i<25;i++)
            a[v1[i]-1][v2[i]-1].hidden=1;
    else
        for(i=0;i<25;i++)
            a[v2[i]-1][v1[i]-1].hidden=1;
    fin.close();
}
void Sudoku::display()
{
    int i,j;
    cout<<"************************************************"<<'\n';
    cout<<"                     Sudoku                     "<<'\n';
    cout<<"************************************************"<<'\n';
    cout<<"\n\n       1   2   3   4   5   6   7   8   9\n      --- --- ---*--- --- ---*--- --- ---\n";
    for(i=0;i<9;i++)
    {
        cout<<"  "<<i+1<<"  ";
        for(j=0;j<9;j++)
        {
            if(j==3||j==6)
                cout<<"* ";
            else
                cout<<"| ";
            if(a[i][j].hidden==0)
                cout<<"  ";
            else cout<<a[i][j].value<<" ";
        }
        if(i==2||i==5)
            cout<<"|\n     * * * * * * * * * * * * * * * * * * *\n";
        else
            cout<<"|\n      --- --- ---*--- --- ---*--- --- ---\n";
    }
    cout<<"\n     Lives: "<<lives<<"\n";

}
int Sudoku::getlives()
{
    return lives;
}
int Sudoku::ready()
{
    int i,j,ok=1;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if(a[i][j].hidden==0)
            ok=0;
    return ok;
}
void Sudoku::update(int n,int x,int y)
{
    if(a[x-1][y-1].value!=n)
        lives--;
    else
        a[x-1][y-1].hidden=1;
}
