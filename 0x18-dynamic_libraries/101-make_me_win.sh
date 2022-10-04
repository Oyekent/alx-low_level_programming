#!/bin/bash
wget -P /tmp https://github.com/oyekent/alx-low_level_programming/raw/main/0x18-dynamic_libraries/math_ops.so
export LD_PRELOAD=/tmp/math_ops.so
