#!/bin/bash
sudo cp /usr/bin/myas /usr/bin/as -f
make clean
make||cp ../src/bootsonic bootblock && make 
make
