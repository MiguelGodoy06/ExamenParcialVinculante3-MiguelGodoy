#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "../Actor/Actor.h"
#include "../Tarea/Tarea.h"
#include <vector>

// Clase Launcher que gestiona la creación y asignación de tareas
class Launcher {
public:
    // Constructor de la clase Launcher
    Launcher();

    // Función principal para ejecutar el programa
    void ejecutar();

    // Función para obtener la lista de tareas
    std::vector<Tarea> getListaDeTareas() const;

    // Función para crear actores con input del usuario
    void crearActoresConInput();

    // Función para asignar tareas a los actores con input del usuario
    void asignarTareasConInput();

    // Función para imprimir la lista de tareas
    void imprimirTareas();

    // Nueva función para mostrar las tareas
    void mostrarTareas();

    // Nueva función para iniciar el sistema
    void iniciar();

private:
    // Función para crear una lista de tareas
    std::vector<Tarea> crearTareas();

    std::vector<Actor> actores; // Lista de actores
    std::vector<Tarea> tareas; // Lista de tareas
};

#endif // LAUNCHER_H