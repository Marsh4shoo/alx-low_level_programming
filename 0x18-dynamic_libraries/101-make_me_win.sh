#!/bin/bash
wget -P /tmp/ https://github.com/Marsh4shoo/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
./gm 9 8 10 24 75 9
