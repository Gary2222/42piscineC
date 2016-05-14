cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 	's/:\(.*\)//g' | rev | sort -r | sed "$FT_LINE1,$FT_LINE2!d" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
