#include <iostream>
#include "Launcher/Launcher.h"

int main() {
    try {
        Launcher gestor; // Creamos un objeto de la clase Launcher llamado 'gestor'
        gestor.mostrarTareas(); // Llamamos al método 'mostrarTareas' para imprimir las tareas
        gestor.iniciar(); // Llamamos al método 'iniciar' para ejecutar el sistema
    } catch (const std::exception& ex) { // Capturamos cualquier excepción que ocurra
        std::cerr << "Se produjo un error: " << ex.what() << std::endl; // Mostramos el mensaje de error
        return 1; // Devolvemos 1 para indicar que hubo un error
    }
    return 0; // Devolvemos 0 para indicar que todo salió bien
}
