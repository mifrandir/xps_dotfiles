function set_bg --argument file
    feh --bg-fill $file
	rm ~/background
	ln -s ~/dotfiles/wpg/wallpapers/$file ~/background
end