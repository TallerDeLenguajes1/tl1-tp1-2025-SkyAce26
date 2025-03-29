[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

### Respuestas

#### Ejercicio 2:

2a) El archivo .gitignore es un archivo de texto que le indica a Git qué archivos o directorios deben ser ignorados en el control de versiones. 
Esto es útil para evitar que se incluyan en el repositorio archivos temporales, de configuración personal o cualquier otro elemento que no sea relevante para el proyecto compartido.

Es conveniente utilizarlo para: 
- Mantener el repositorio limpio y más organizado.
- Para evitar conflictos con archivos personales o de un entorno en específico con otros colaboradores.
- Optimizar el rendimiento.

Es recomendable crear el archivo .gitignore al inicio del proyecto, preferiblemente antes de hacer el primer commit.
Para configurar/crear un archivo .gitignore se siguen los siguientes pasos:
1. "echo > .gitignore"
2. "git status"
3. "git add .gitignore"
4. "git commit -m "Agrego el archivo .gitignore""
5. "git push -u origin main" (si se trabaja con un repositorio remoto)

3c) En el repositorio se logran ver todos los archivos incluyendo los archivos ".exe", los cuales no creo que sean necesarios de mostrar.

3g) El resultado de los apartados 2 y 3 son los mismos porque en el apartado 2 muestro la dirección de memoria almacenada por el puntero y en el apartado 3 muestro la dirección de memoria de una variable la cual es la misma a la que el puntero apunta. Es decir, el puntero guarda como valor la dirección de memoria de la variable a la cual apunta, por eso mismo se muestra el mismo resultado. 
En el punto 4 obtengo la dirección de memoria del puntero en sí, que es distinta a los resultados anteriores porque es una variable que se guarda en otro lugar, por ende tiene su propia dirección de memoria al igual que la variable a la que apunta.