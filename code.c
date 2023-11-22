#include <iostream.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
using namespace std;
int n,X[MAX], OK =TRUE, dem=0;
void Init (void){
    count<<"\n nhap n= "; cin>>n ;
    for (int i=1; i<=n; i++)
    X[i] = i;
}
void Result(void){
    cout<<"\n Ket qua buoc" <<++dem<<":";
    for (int i =1, i<=n; i++)
    cout <<X[i]<<"  ";
}
void Next(void){
    int j = n-1;
    while (j>0 && X[j] > X[j+1] )j-- ;
    if (j>0){
        int k = n;
        while (X[j]>X[k]) k--;
        int t = X[j]; X[j] = X[k]; X[k]= t;
        int r = j+1; s=n;
        while (r <= s){
            t= X[r]; X[r]= X[s]; X[s]= t;
            r++ ; s--;
        }
    }
}
    else OK = FALSE;
    int main()
    {
        Init(); // nhap n = 3
        while (OK){
            Result();
            Next();
        }
        system("PAUSE");
        return 0 ;

    }
