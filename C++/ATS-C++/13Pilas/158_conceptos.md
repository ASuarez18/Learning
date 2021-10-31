Tema -> /Pilas/

Concepto: Estructura de datos de entrada ordenadas, de forma os elementos solo se pueden introducir o elimira por un extrema, llamada cima.

   cima
     ↓
    |◘|
    |◘|
    |◘|
     ¯

Operaciones aplicadas:
    Insertar (push): añade un elemento a la cima de la pila.
    Quitar (pop): Elimina/saca un elemento de la pila

    Insertar
| |   | |   |C|                     |
| | → |A| → |A| → Entrada MAC       |
|M|   |M|   |M|                     |   
 ¯     ¯     ¯                      |   Debido a esta caracteristicalas pilas son
                                    |   tambien conocidas como estructuras LIFO
     Quitar                         |           "Last Input First Output"
| |   | |   | |                     |
|A| → | | → | | → Salida CAM        |
|M|   |M|   |M|                     |
 ¯     ¯     ¯

 Estructura:
  __________
 |dato      | } Esto es
 |*siguiente| } un Nodo
  ¯¯¯¯¯¯¯¯¯¯
     ↓
  __________
 |dato      |
 |*siguiente|
  ¯¯¯¯¯¯¯¯¯¯
     ↓
  __________
 |dato      |
 |*siguiente|
  ¯¯¯¯¯¯¯¯¯¯
     ↓
    NULL