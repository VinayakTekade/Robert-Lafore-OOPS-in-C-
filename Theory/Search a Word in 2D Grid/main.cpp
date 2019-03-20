//Search a Word in 2D Grid.cpp
/*Given a 2D grid of characters and a word, find all occurrences of given word in grid.
A word can be matched in all 8 directions at any point.Word is said be found in a direction
if all characters match in this direction (not in zig-zag form).
The 8 directions are, Horizontally Left, Horizontally Right, Vertically Up and 4 Diagonal directions.
*/


#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int r=0,c=0;
    char word[20];
    char grid[3][3];
    grid[0][0]= 'A';
    grid[0][1]= 'A';
    grid[0][2]= 'A';
    grid[0][3]= 'A';
    grid[1][0]= 'Agrid[][]= 'A';';
    grid[1][1]= 'A';
    grid[1][2]= 'A';
    grid[1][3]= 'A';
    grid[2][0]= 'A';
    grid[2][1]= 'A';
    grid[2][2]= 'A';
    grid[2][3]= 'Agrid[][]= 'A';';
    grid[3][0]= 'A'grid[][]= 'A';;
    grid[3][1]= 'A';
    grid[3][2]= 'A';
    grid[3][3]= 'A';
    for(r = 0; r<4; r++)
    {
        for(c = 0 ; c < 4; c++)
            cout << grid[r][c] << "\t" ;
        cout << endl << endl;
    }

    cout << "\n\n\n Enter a word to search : ";
    gets(word);
    cout<<word[0]<< endl;
    //int flag1=0;
    for( r=0; r<=4; r++ )
        for (c=0; c<=4; c++)
            if (grid[r][c] == word[0])
            {
                cout<<"first letter found at ("<< r << "," << c <<")";
            }
    // if(flag1==0)
    //   cout<<"word not found";
    return 0;
}



