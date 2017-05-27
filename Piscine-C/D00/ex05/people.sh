#!/bin/sh
ldapsearch -Q cn | grep -i "cn: z" | cut -c5- | sort -r
