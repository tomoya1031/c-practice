#!/bin/bash
gcc -Wall -Wextra -Werror ex00/*.c
echo "========Error cases========"
./a.out
./a.out hoge
./a.out -111
./a.out 00
./a.out 0111
./a.out 111 hoge
echo "========Non-Error cases========"
./a.out 0
./a.out 111
./a.out dict 111
./a.out dict 0
