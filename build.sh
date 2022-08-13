root=$(pwd)
sroot=src
bin=.bin
on=$(tput setaf 32)
off=$(tput sgr0)
error=0

(
	directory=0
	cd $sroot
	declare -a DIRS
	dirs=$(ls | sort)
	count=0
	echo Choose a directory to build
	count=0

	for t in $dirs; do
		let count++
		echo -e "$count.$on $t $off"
		DIRS[$count - 1]=$t
	done

	printf "=%.0s" {0..20}
	printf "\nDirectory > (digit or name) _ "

	read directory

	[ $? -ne 0 -a -n $directory ] && error=1 || echo ""
	printf -- "---\n"
	i=0
	if [ -d $directory ]; then
		echo -e "You selected$on $directory\n$off"
	elif [[ $directory =~ [0-9] ]]; then
		i=$directory
		let max=count+1
		if [ $i -gt 0 -a $max -gt $i ]; then
			let x=i-1
			directory=${DIRS[$x]}
			[ -d $directory ] && echo "You selected$on $directory $off" || error=1
		else
			error=1
		fi
	else
		error=1

	fi
	[ $error -ne 0 ] && echo Invalid selection && exit 1 || echo " "
	printf -- "\n"

	mkdir -p $root/$bin
	cd $directory
	sources=$(cat sources)
	echo Compiling sources $on $sources $off
	g++ $sources -o $root/$bin/a.out
	[ $? -ne 0 ] && echo Failed to build || echo $on Build complete $off

)
