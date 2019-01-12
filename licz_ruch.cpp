#include <iostream>

bool czy_przekatna(int x, int y, int n, int x1, int y1)
{   const int ruchy[4][2]={{1,1},{-1,1},{-1,-1},{1,-1}};
    for (int j=1; j<n; ++j){
        for (int i=0;i<4;++i)
        {   int tmpX=x+(ruchy[i][0]*j);
            int tmpY=y+(ruchy[i][1]*j);
            if(tmpX==x1 && tmpY==y1)
                return true;
            }
        }
        return false;
}
bool blind_spot(int x, int y, int n, int x1, int y1)
{   const int ruchy[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    for (int j=1; j<n; ++j){
        for (int i=0;i<4;++i)
        {   int tmpX=x+(ruchy[i][0]*j);
            int tmpY=y+(ruchy[i][1]*j);
            if(tmpX==x1 && tmpY==y1)
                return true;
            }
        }
        return false;
}
int main()
{   int n,typ,x,y,x1,y1;
    std::cout << "podaj rozmiar szachownicy (n >= 2)\n";
    std::cin >> n;
    std::cout << "podaj typ figury (wieza(0),goniec(1),krolowa(2),krol(3)\n";
    std::cin >> typ;
    std::cout << "podaj współrzędne x i y (od 0 do n)\n";
    std::cin >> x >> y;
    std::cout << "podaj współrzędne x1 i y1 (od 0 do n)\n";
    std::cin >> x1 >> y1;

if (typ==0){
    if (x==x1 && y==y1)
        std::cout << "0 ruchów\n";
    else if (x==x1 || y==y1)
        std::cout << "1 ruch\n";
    else
        std::cout << "2 ruchy\n";
}
else if (typ==1){
    if (x==x1 && y==y1)
        std::cout << "0 ruchów\n";
    else if ((czy_przekatna(x,y,n,x1,y1)==true))
        std::cout << "1 ruch\n";
    else if (blind_spot(x,y,n,x1,y1) == true)
        std::cout << "brak mozliwego ruchu\n";
    else
        std::cout << "2 ruchy\n";
}
else if (typ==2){
    if (x==x1 && y==y1)
        std::cout << "0 ruchów\n";
    else if (x==x1 || y==y1 || czy_przekatna(x,y,n,x1,y1)==true)
        std::cout << "1 ruch\n";
    else
        std::cout << "2 ruchy\n";
}
else {
    int wynik=abs(x-x1)+abs(y-y1);
    std::cout << wynik << " ruchów\n";
}
 return 0;
}
