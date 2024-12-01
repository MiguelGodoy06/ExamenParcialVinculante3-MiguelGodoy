#include "Actor.h"
#include <iostream>
#include <iomanip>
#include "../Launcher/Launcher.h"
#include "../Tarea/Tarea.h"

// Constructor de la clase Actor
Actor::Actor(const std::string& id, const std::string& descripcion)
    : id(id), descripcion(descripcion) {}

// Método para obtener el ID del actor
std::string Actor::getId() const {
    return id;
}

// Método para obtener la descripción del actor
std::string Actor::getDescripcion() const {
    return descripcion;
}

// Método para añadir una tarea al actor
int Actor::addTarea(const Tarea& tarea) {
    tareas.push_back(tarea); // Añadir tarea a la lista
    return tareas.size(); // Devolver el número de tareas
}

// Método para obtener la duración total de las tareas del actor
int Actor::getDuracionTotal() const {
    int duracionTotal = 0;
    for (const auto& tarea : tareas) {
        duracionTotal += tarea.getDuracion(); // Sumar la duración de cada tarea
    }
    return duracionTotal; // Devolver la duración total
}

// Método para obtener una representación en cadena del actor
std::string Actor::tostring() const {
    std::string resul;
    for (size_t i = 0; i < tareas.size(); i++) {
        resul += "  Tarea " + std::to_string(i + 1) + ": " + tareas[i].toString() + "\n"; // Añadir cada tarea a la cadena
    }
    return resul; // Devolver la cadena resultante
}

// Método para obtener la lista de tareas del actor
std::vector<Tarea> Actor::getTareas() const {
    return tareas;
}