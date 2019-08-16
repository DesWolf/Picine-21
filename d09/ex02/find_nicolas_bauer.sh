cat contacts_hard.txt | grep -i "nicolas	bauer" | awk '{print $(NF-1)}'
