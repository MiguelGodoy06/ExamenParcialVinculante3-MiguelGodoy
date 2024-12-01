#ifndef TAREA_H
#define TAREA_H

#include <string>

// Clase Tarea que representa una tarea con ID, descripción y duración
class Tarea {
private:
    std::string id; // ID de la tarea
    std::string descripcion; // Descripción de la tarea
    int duracion; // Duración de la tarea en minutos

public:
    // Constructor de la clase Tarea
    Tarea(const std::string& id, const std::string& descripcion, int duracion);

    // Método para obtener el ID de la tarea
    std::string getId() const;

    // Método para obtener la descripción de la tarea
    std::string getDescripcion() const;

    // Método para obtener la duración de la tarea
    int getDuracion() const;

    // Método para obtener una representación en cadena de la tarea
    std::string toString() const;
};

#endif // TAREA_H