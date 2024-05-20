#include <cmath>
#include <iostream>

using namespace std;

void tipoTriangulo( int lado1, int lado2, int lado3)
    {
        if (lado1 == lado2 && lado2 == lado3){
            cout << "\n TRIANGULO EQUILATERO: " << endl;
        } else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
            cout << "\n TRIANGULO ESCALENO: " << endl;
        } else {
            cout << "\n TRIANGULO ISOSCELES: " << endl;
        }
    }

double areaTriangulo (double lado, double altura)
    {
        return (lado * altura) / 2;
    }

double perimetroTriangulo (double lado1, double lado2, double lado3)
    {
        return lado1 + lado2 + lado3;
    }

double diagonalRectangulo(double ancho, double largo )
    {
        return sqrt(pow(ancho, 2) + pow(largo, 2));
    }

double areaRectangulo(double ancho, double largo )
    {
        return ancho * largo;
    }

double perimetroRectangulo (double ancho, double largo)
    {
        return 2 * (ancho + largo);
    }

double areaCircunferencia (double radio)
    {
        return M_PI * pow(radio, 2);
    }

double longitudCircunferencia (double radio)
    {
        return 2 * M_PI * radio;
    }

void procesarTriangulo()
    {
        double lados[4], altura;

        cout << "  \n 1. TRIANGULO" << endl;
        cout << " ============" << endl << endl;
        cout << " Ingrese separado por espacios lado 1, lado 2, lado 3, ALTURA: ";

        for(int i = 0; i < 4; i++)
            cin >> lados[i];

        double area = areaTriangulo(lados[0], lados[3]);
        double perimetro = perimetroTriangulo(lados[0], lados[1], lados[2]);

        cout << " --------------------------------------" << endl;
        tipoTriangulo(lados[0], lados[1], lados[2]);
        cout << "\n - El area del triangulo es: " << area << endl;
        cout << "\n - El perimetro del triangulo es: " << perimetro << endl << endl;
        cout << " --------------------------------------" << endl << endl;
    }

void procesarRectangulo()
    {
        double lados[2];
        //double ancho, largo;
        cout << " \n 2. RECTANGULO" << endl;
        cout << " =============" << endl << endl;
        cout << " Ingrese separado por un espacios ANCHO y LARGO: ";

        for(int i = 0; i < 2; i++)
            cin >> lados[i];

        double area = areaRectangulo(lados[0], lados[1]);
        double diagonal = diagonalRectangulo(lados[0], lados[1]);
        double perimetro = perimetroRectangulo(lados[0], lados[1]);

        cout << "\n -----------------------------------" << endl;
        cout << "\n - La diagonal del rectangulo es: " << diagonal << endl;
        cout << "\n - El area del rectangulo es: " << area << endl;
        cout << "\n - El perimetro del rectangulo es: " << perimetro << endl << endl;
        cout << "\n -----------------------------------" << endl << endl;
    }

void procesarCircunferencia()
    {
        double radio;
        cout << "  \n 3. CIRCUNFERENCIA" << endl;
        cout << " ==================" << endl << endl;
        cout << "  Ingrese el radio de la circunferencia: ";
        cin >> radio;

        double area = areaCircunferencia(radio);
        double longitud = longitudCircunferencia(radio);

        cout << "\n -----------------------------------" << endl;
        cout << "\n - El area de la circunferencia es: " << area << endl;
        cout << "\n - La longitud de la circunferencia es: " << longitud << endl << endl;
        cout << " -----------------------------------------" << endl << endl;

    }


int main()
{
   bool repetir = true;
   int opcion;

   do { //Do-While Sentinela, no termina hasta que repetir sea falso.
   system("cls");
   system("color A");

    cout << " FIGURAS A USAR:" << endl;
    cout << " ===============" << endl << endl;
    cout << "  1. Triangulo" << endl;
    cout << "  2. Rectangulo" << endl;
    cout << "  3. Circunferencia" << endl;
    cout << "  0. <-- Salir de la Aplicacion" << endl << endl ;

    cout << " Seleccione la opcion deseada: ";
    cin >> opcion;

    switch(opcion)
    {
        case 0: {
            system("cls");
            cout <<"\n**** SALIENDO ****" << endl;
            repetir = false;
            break;
        }

        case 1: {
            system("cls");
            system("color F");
            procesarTriangulo();
            system("pause");
            system("cls");
            break;
        }

        case 2: { //RECTANGULO
            system("cls");
            system("color B");
            procesarRectangulo();
            system("pause");
            system("cls");
            break;
        }

        case 3: { // CIRCUNFERENCIA
            system("cls");
            system("color E");
            procesarCircunferencia();
            system("pause");
            system("cls");
            break;
        }

        default:
            cout << "\n Seleccione una opcion correcta. \n" << endl;
            system("pause");
			system("cls");
            break;
    }
    } while (repetir);

    return 0;
}

