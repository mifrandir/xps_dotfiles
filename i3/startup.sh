#!/usr/bin/env bash
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle'
i3-msg "workspace 2:shell; append_layout ~/.config/i3/ws2v2.json" 
urxvt -name htop -e htop &
termite --name ranger -e ranger & 
/home/miltfra/.config/i3/bg.sh &
urxvt -name urxvt &
urxvt -name urxvt &
fish -c polystart
/home/vrelda/.config/wpg/wp_init.sh
