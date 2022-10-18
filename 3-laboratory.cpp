#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <locale.h>
#define CRT_SECURE_NO_WARNINGS

//C:\check

using namespace std;

FILE *f_input, *f_output;

void first()
{
    int maxnum = 0;
    int rd;
    int summ = 0;
    int a = 15;    
        
    FILE *predel;
    predel = fopen("C:\check\predel.txt", "r");
    fscanf (predel, "*f", &a);
    fclose (predel);
    
    f_output = fopen("C:\check\output.txt", "w");
    
    while(true)
    {
        cin >> rd;
        summ += rd;
        
        if(rd > maxnum)
        {
            maxnum = rd;
        }
        
        fprintf(f_output, rd);
        
        if(summ > a) break;
    }
    fprintf(f_output, "Sum: ");
    fprintf(f_output, summ);
    fclose (predel);
    cout << "Summ = " << summ;
    cout << " Maxnum = " << maxnum;
}

void second()
{
    int x;
    int rd;
    FILE *startgame, *endgame;
    startgame = fopen("C:\check\startgame.txt", "r");
    fscanf (startgame, "*f", &x);
    fclose (startgame);
    
    endgame = fopen("C:\check\output.txt", "w");
    
    while(true)
    {
        cin >> rd;
        
        fprintf(endgame, rd);
        
        if(rd > x) cout << "Smaller ";
        if(rd < x) cout << "Bigger ";
        
        if(rd == x)
        {
            cout << "You win!";
            break;
        }
    }
    //fclose(endgame);
}

int main()
{
    second();
    return 0;
}
