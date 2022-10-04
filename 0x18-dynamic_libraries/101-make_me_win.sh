#!/bin/bash
wget -P /tmp https://github.com/Oyekent/alx-low_level_programming/raw/main/0x18-dynamic_libraries/maths_op.so
export LD_PRELOAD=/tmp/maths_op.so
