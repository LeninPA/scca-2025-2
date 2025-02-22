#!/bin/bash

# Verifica que se haya proporcionado al menos un argumento (tu nombre)
if [ $# -lt 1 ]; then
    echo "Uso: $0 <tu_nombre> [número1 número2 ...]"
    exit 1
fi

# Guarda el primer argumento (tu nombre)
nombre=$1
echo "Hola, $nombre!"

python3 raiz_cuadrada.py 
