#!/bin/sh
ldapsearch sn | grep "sn" | grep -i "bon" | wc -l | bc
