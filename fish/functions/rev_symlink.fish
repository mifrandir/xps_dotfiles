function rev_symlink --argument p1 p2
	mv $p1 $p2
ln -r -s $p2 $p1
end
