#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <vector>
#include "../Tarea/Tarea.h"

// Clase Actor que representa a un actor con tareas asignadas
class Actor {
private:
    std::string id; // ID del actor
    std::string descripcion; // Descripción del actor
    std::vector<Tarea> tareas; // Lista de tareas asignadas al actor
public:
    // Constructor que inicializa el ID y la descripción del actor
    Actor(const std::string& id, const std::string& descripcion);

    // Método para obtener el ID del actor
    std::string getId() const;

    // Método para obtener la descripción del actor
    std::string getDescripcion() const;

    // Método para añadir una tarea al actor
    int addTarea(const Tarea& tarea);

    // Método para obtener la duración total de las tareas del actor
    int getDuracionTotal() const;

    // Método para obtener una representación en cadena del actor
    std::string tostring() const;

    // Método para obtener la lista de tareas del actor
    std::vector<Tarea> getTareas() const;
};

#endif //ACTOR_H