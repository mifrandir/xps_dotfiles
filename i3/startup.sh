#!/usr/bin/bash
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle'
i3-msg "workspace 2:; append_layout ~/.config/i3/ws2v2.json" 
dunst &
termite --name htop -e htop &
termite --name ranger -e ranger & 
/home/miltfra/dotfiles/bg.fish &
termite --name terminal &
termite --name terminal &
fish -c polystart
/home/vrelda/.config/wpg/wp_init.sh
