#!/bin/bash
echo "Iniciando programa"
mkdir Snoopy
git clone https://github.com/kinduff/awesome-made-by-mexicans Snoopy/awesome-made-by-mexicans
cd Snoopy/awesome-made-by-mexicans
echo "Contenidos del repositorio clonado:"
ls -l
cd ../..
echo "Contenidos del directorio actual:"
ls -l
echo "Repositorio creado"
exit 0

