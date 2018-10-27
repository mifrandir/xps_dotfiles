#!/usr/bin/env bash

i3-msg "workspace 2:terminal; append_layout ~/.config/i3/ws2.json" 
termite --name "update" -e "tty-clock -scDa 100000000 -C 7" &
termite --name "terminal" -e fish &
termite --name "ranger" -e ranger & 