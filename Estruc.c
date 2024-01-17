#include <stdio.h>

//Definición de la estructura alumno
struct Alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

//funcion para los datos y los resultados
void Datos(struct Alumno *alumno);
void Resultados(struct Alumno *alumno);

int main()
{
    int num; // Número de alumnos
    printf("Indique la cantidad de alumnos que desea ingresar:\n ");
    scanf("%d", &num);
    fflush(stdin); // Limpiar el búfer 

    struct Alumno estudiante[num]; // estructura para almacenar los datos de los alumnos

    // uso del for para ingresar los datos de cada alumno
    for (int i = 0; i < num; i++)
    {
        printf("\nIngrese los datos del alumno %d:\n", i + 1);
        Datos(&estudiante[i]);
    }

    // bucle para mostrar los datos de cada alumno
    for (int i = 0; i < num; i++)
    {
        printf("\nDatos del alumno %d:\n", i + 1);
        Resultados(&estudiante[i]);
    }

    return 0;
}
