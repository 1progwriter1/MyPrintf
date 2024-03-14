%.o : %.s
	nasm -f elf64 $< -o $@

%.out : %.o
	ld -static $< -o $@