function polystart
	killall polybar > /dev/null 2>&1
polybar -r default > /dev/null 2>&1 &
end
