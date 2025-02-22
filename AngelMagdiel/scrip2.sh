#!/bin/bash

if [ $# -lt 2 ]; then
    echo "Uso: $0 <Magdiel_Angel> <número1> [número2] ..."
    exit 1
fi

nombre=$1
shift

echo "Hola, $nombre. Ejecutando cálculos de raíz cuadrada..."

for numero in "$@"; do
    echo "Calculando para: $numero"
    python3 calcular_raiz.py "$numero"
    echo ""
done
