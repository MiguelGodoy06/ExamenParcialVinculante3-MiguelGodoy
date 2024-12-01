#include "Tarea.h"

// Constructor de la clase Tarea
Tarea::Tarea(const std::string& id, const std::string& descripcion, int duracion)
    : id(id), descripcion(descripcion), duracion(duracion) {}

// Método para obtener el ID de la tarea
std::string Tarea::getId() const {
    return id;
}

// Método para obtener la descripción de la tarea
std::string Tarea::getDescripcion() const {
    return descripcion;
}

// Método para obtener la duración de la tarea
int Tarea::getDuracion() const {
    return duracion;
}

// Método para obtener una representación en cadena de la tarea
std::string Tarea::toString() const {
    return "ID: " + id + ", Descripción: " + descripcion + ", Duración: " + std::to_string(duracion) + " minutos";
}