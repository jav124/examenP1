#include <iostream>

using namespace std;

 class Rectangulo
    {
private:
    int ancho;
    int altura;

public:
    int esquinaX;
    int esquinaY;

    Rectangulo()
    {
        ancho = 0;
        altura = 0;
        esquinaX = 0;
        esquinaY = 0;

    }
Rectangulo(int x, int y)
{

    ancho = 0;
    altura = 0;
    esquinaX = x;
    esquinaY = y;
}

Rectangulo (int x, int y, int w, int h)
{
    if (ancho >= 0){
         ancho = w;
    }
    if  (altura >= 0)
    {
      altura = h;
    }

    esquinaX = x;
    esquinaY = y;
}

int getAncho()
{
    return ancho;
}

void setAncho(int w)
{
    if (ancho >= 0){
   w = ancho;
    }
}

int getAltura()
{
    return altura;
}

void setAltura(int h)
{
     if (altura >= 0){
   h = altura;
    }
}

int getArea()
{
    float area;

    area = ancho*altura;

    return area;
}

void intersecta (Rectangulo rect)
{
    int anch, altu, esqX, esqY;
    ancho = anch;
    altura = altura;
    esquinaX = esqX;
    esquinaY = esqY;

rect = {anch, altu, esqX, esqY};

    bool interseccionX = false;
    bool interseccionY = false;

    if (rect.esquinaX <= rect.esquinaX + rect.ancho && rect.esquinaX1 + rect.ancho1 >= rect.esquinaX2)
    {
    interseccionX = true
     cout << "Interseccion en X!!" << endl;
    }
    if (esquinaY1 <= esquinaY2 + altura2 && esquinaY1 + altura1 >= esquinaY2)
    {
     interseccionY = true;
     cout << "Interseccion en Y!!" << endl;
    }

    if (interseccionX == true && interseccionY == true)
    {
        cout << "Los dos rectangulos intersectan" << endl;
    }
    else
    {
    cout << "Los rectangulos no intersectan" << endl;
    }
}



    };

int main ()
{
   Rectangulo rect1(
       rect1.rect = 4,rect1.rect = 5,rect1.rect =1,rect1.rect =1
   
       
   }
   
   Rectangulo rect2;
   rect2.setAncho(7);
rect2.setAltura(3);

Rectangulo rect3
{
    
 

    ancho = 3;
    altura = 2
    esquinaX

}

cout << rect1.getArea();
cout << rect2.getArea();
cout << rect3.getArea();

    rect1.intersecta(rect2)
    rect1.intersecta(rect3)
    rect2.intersecta(rect3)

    return 0;
}