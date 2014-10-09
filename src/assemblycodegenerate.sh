#!/bin/sh
objfile=`ls | grep ".o$"`
#echo $objfile
for i in $objfile
do
	objdump -S $i > $i."asm"
done
cat *.asm > xv6.asm
