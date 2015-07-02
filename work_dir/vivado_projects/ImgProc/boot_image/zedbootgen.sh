#!/bin/bash

bootgen -image zbootimage.bif -o i BOOT.bin -w on
if [ $? -eq 0 ]; then
    echo "BOOT.bin successfully generated for ZedBoard."
else
    echo "BOOT.bin failed to generate for ZedBoard."
fi