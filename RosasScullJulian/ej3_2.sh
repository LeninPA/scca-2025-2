#!/bin/bash

echo "Iniciando programa"

mkdir ./Snoopy
cd ./Snoopy
git clone https://github.com/kinduff/awesome-made-by-mexicans
echo "Repositorio clonado"
cd awesome-made-by-mexicans
ls -al 
cd ../..
echo "Contenidos repositorio raiz"
ls -al
echo "Repositorio creado"