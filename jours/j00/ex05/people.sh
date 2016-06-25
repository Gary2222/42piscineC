ldapsearch -x -LLL "(uid=z*)" cn | sed '/cn: /!d' | sed 's/cn: //' | sort -fr
