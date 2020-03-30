#!/bin/bash

gcc -o bin/output basic_functions.c && ./bin/output
rm -rf ./bin/output

gcc -o bin/output loops.c && ./bin/output
rm -rf ./bin/output