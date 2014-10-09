#!/bin/bash
make clean
./myas.sh
make
cp ../src/bootblock . -f
make
cp ../src/mkfs . -f
make
