#include <iostream>
using namespace std;
void ligne(int longueur, char motif)
{
   for (int iCol = 1; iCol <= longueur; iCol = iCol + 1)
   {
      cout << motif;
   }
   cout << endl;
}
void ligneCreuse(int longueur, char motif)
{
   if (longueur > 1)
   {
      cout << motif;
      for (int iCol = 2; iCol < longueur; iCol = iCol + 1)
      {
          cout << ' ';
      }
   }
   cout << motif << endl;
}
void rectangle(int hauteur, int longueur, char motif)
{
   if (hauteur > 1)
   {
      ligne(longueur, motif);
      for (int iLigne = 2; iLigne < hauteur; iLigne = iLigne + 1)
      {
         ligneCreuse(longueur, motif);
      }
   }
   ligne(longueur, motif);
}
void triangle(int hauteur, char motif)
{
   for (int iLigne = 1; iLigne < hauteur; iLigne = iLigne + 1)
   {
      ligneCreuse(iLigne, motif);
   }
   ligne(hauteur, motif);
}
int main()
{
   int longueurLigne;
   cin >> longueurLigne;
   ligne(longueurLigne, 'X');
   cout << endl;
   int hauteurRectangle, largeurRectangle;
   cin >> hauteurRectangle >> largeurRectangle;
   rectangle(hauteurRectangle, largeurRectangle, '#');
   cout << endl;
   int hauteurTriangle;
   cin >> hauteurTriangle;
   triangle(hauteurTriangle, '@');
}
