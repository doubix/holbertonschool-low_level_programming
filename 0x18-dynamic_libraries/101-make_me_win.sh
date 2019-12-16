#!/bin/bash
wget -P ./ https://github.com/s0m35h1t/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/win.so 
export LD_PRELOAD=./win.so