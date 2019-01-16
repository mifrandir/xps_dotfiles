function set_wpg --argument file
	wpg -s $file
	sleep 1
	wpg -s $file
	polystart
end
