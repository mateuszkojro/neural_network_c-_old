#!/bin/bash
date
echo "------STARTING A FULL PROJECT REBUILD------"
echo " "
cmake ..
make 
./neural_network_c++
