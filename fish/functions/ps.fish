function ps --argument file
	set pspath ~/projects/Seminararbeit/Dokumente/sourcecode/$file.ps
	vim $file -c ":hardcopy > $pspath" -c ":q"
	echo $pspath
	pspdf $pspath
end
