#!/usr/bin/env bash
~/.config/screenlayout.sh 
compton 
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle' 
killall polybar
polybar default -r
