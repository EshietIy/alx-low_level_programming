#!/bin/bash
wget -q --output-document=$HOME/lib_gm.so https://github.com/EshietIy/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib_gm.so?raw=true
export LD_PRELOAD=$HOME/lib_gm.so
