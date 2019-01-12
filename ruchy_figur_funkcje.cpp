#include <iostream>

bool check (int x, int n){
    return x>0 && x<=n;
}
void wypisz(int x , int y, int n){
    if(check (x,n) && check(y,n)){
       std::cout << "(" << x <<", "<< y <<")\n";}
}

void wykonaj_ruch (ruchy[][], ){

}

void prostopadle(int x, int y, int n)
{   const int ruchy[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    for(int j=1; j<n; ++j){
        for(int i=0; i<4; ++i)
        {
            int tmpX=x+(ruchy[i][0]*j);
            int tmpY=y+(ruchy[i][1]*j);
            wypisz (tmpX, tmpY, n);
        }
    }
}
void skosne(int x, int y, int n)
{   const int ruchy[4][2]={{1,1},{-1,1},{-1,-1},{1,-1}};
    for(int j=1; j<n;++j){
        for(int i=0; i<4; ++i)
            {
                int tmpX=x+(ruchy[i][0]*j);
                int tmpY=y+(ruchy[i][1]*j);
                wypisz (tmpX, tmpY, n);
            }
    }
}
void ojeden(int x, int y, int n){
const int ruchy[8][2]={{1,1},{-1,1},{-1,-1},{1,-1},{1,0},{0,1},{-1,0},{0,-1}};
    for(int i=0; i<n; ++i)
            {
                int tmpX=x+(ruchy[i][0]);
                int tmpY=y+(ruchy[i][1]);
                wypisz (tmpX, tmpY, n);
            }
}
int main()
{   int n,typ,x,y;
    std::cout << "podaj rozmiar szachownicy (n >= 2)\n";
    std::cin >> n;
    std::cout << "podaj typ figury (wieza(0),goniec(1),krolowa(2),krol(3)\n";
    std::cin >> typ;
    std::cout << "podaj współrzędne x i y (od 0 do n)\n";
    std::cin >> x >> y;
if (typ==0){
    prostopadle(x,y,n);
}
else if (typ==1){
    skosne(x,y,n);
}
else if (typ==2){
    prostopadle(x,y,n);
    skosne(x,y,n);
}
else {
    ojeden(x,y,n);
}
 return 0;
}
