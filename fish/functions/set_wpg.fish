function set_wpg --argument file
	wpg -s $file
sleep 1
~/.config/i3/bg.sh
wpg -s $file
polystart
rm ~/background
ln -s ~/dotfiles/wpg/wallpapers/$file ~/background
end
