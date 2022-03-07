#include <iostream>
#include <stdlib.h>
using namespace std;
int a[3][3];
int win_tik(int a[3][3])
{
    if(a[0][0]==a[0][1]&&a[0][0]==a[0][2]&&a[0][0]!=-1)
        return a[0][0];
    else if(a[1][0]==a[1][1]&&a[1][0]==a[1][2]&&a[1][0]!=-1)
        return a[1][0];
    else if(a[2][0]==a[2][1]&&a[2][0]==a[2][2]&&a[2][0]!=-1)
        return a[2][0];
    else if(a[0][0]==a[1][0]&&a[0][0]==a[2][0]&&a[0][0]!=-1)
        return a[0][0];
    else if(a[0][1]==a[1][1]&&a[0][1]==a[2][1]&&a[0][1]!=-1)
        return a[0][1];
    else if(a[0][2]==a[1][2]&&a[0][2]==a[2][2]&&a[0][2]!=-1)
        return a[0][2];
    else if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&a[0][0]!=-1)
        return a[0][0];
    else if(a[0][2]==a[1][1]&&a[0][2]==a[2][0]&&a[0][2]!=-1)
        return a[0][2];
    else return -1;
}
int fail_tik(int a[3][3])
{
    int i,j,ok=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        if(a[i][j]==-1)ok=1;
    if(ok==0)
        return 1;
    else return 0;
}
void display_tik(int a[3][3])
{
    int i,k;
    cout<<"***************************************"<<'\n';
    cout<<"              Tik Tak Toe              "<<'\n';
    cout<<"***************************************"<<'\n'<<'\n';
    cout<<"\n         1         2         3    \n\n";
    for(k=0;k<3;k++)
    {
        cout<<"     ";
        for(i=0;i<3;i++)
        {
            if(a[k][i]==-1)
            {
                cout<<"         ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==1)
            {
                cout<<"  X   X  ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==0)
            {
                cout<<"   000   ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
        }
        cout<<"     ";
        for(i=0;i<3;i++)
        {
            if(a[k][i]==-1)
            {
                cout<<"         ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==1)
            {
                cout<<"   X X   ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==0)
            {
                cout<<"  0   0  ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
        }
        cout<<"  "<<k+1<<"  ";
        for(i=0;i<3;i++)
        {
            if(a[k][i]==-1)
            {
                cout<<"         ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==1)
            {
                cout<<"    X    ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==0)
            {
                cout<<"  0   0  ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
        }
        cout<<"     ";
        for(i=0;i<3;i++)
        {
            if(a[k][i]==-1)
            {
                cout<<"         ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==1)
            {
                cout<<"   X X   ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            else if(a[k][i]==0)
            {
                cout<<"  0   0  ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
        }
        cout<<"     ";
        for(i=0;i<3;i++)
        {
            if(a[k][i]==-1)
            {
                cout<<"         ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            if(a[k][i]==1)
            {
                cout<<"  X   X  ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
            if(a[k][i]==0)
            {
                cout<<"   000   ";
                if(i==2)
                    cout<<"\n";
                else cout<<"|";
            }
        }
        if(k!=2)
            cout<<"     ---------|---------|---------\n";
        else cout<<"\n\n";
    }
}
void p1_picks(int a[3][3])
{
    int x,y;
    system("cls");
    display_tik(a);
    cout<<"            PLAYER 1 PICKS\n";
    cin>>x>>y;
    if(a[x-1][y-1]==-1)
        a[x-1][y-1]=1;
    else if(fail_tik(a)!=1)
        p1_picks(a);
}
void p2_picks(int a[3][3])
{
    int x,y;
    system("cls");
    display_tik(a);
    cout<<"            PLAYER 2 PICKS\n";
    cin>>x>>y;
    if(a[x-1][y-1]==-1)
        a[x-1][y-1]=0;
    else if(fail_tik(a)!=1)
        p2_picks(a);
}
