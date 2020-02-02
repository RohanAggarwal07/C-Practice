/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void print_spiral(int a[4][4],int i,int j,int r,int c){
    if(i>=r or j>=c)
    return;
    
    
    for(int p=i;p<c;p++)
    cout<<a[i][p]<<" ";
    
    for(int p=i+1;p<r;p++)
    cout<<a[p][c-1]<<" ";
    
    if((r-1)!=i)
    for(int p=c-2;p>=j;p--)
    cout<<a[r-1][p]<<" ";
    
    
    if((c-1)!=j)
        for(int p=r-2;p>i;p--)
        cout<<a[p][j]<<" ";
    print_spiral(a,i+1,j+1,r-1,c-1);
    }
    
int main()
{
 int a[4][4]={{ 1, 2, 3, 4}, {5, 6, 7, 8 }, { 9, 10, 11 ,12},{13, 14, 15, 16}};
        print_spiral(a,0,0,4,4);
return 0;
}
