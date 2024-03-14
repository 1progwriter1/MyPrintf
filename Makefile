%.o : %.s
	nasm -f macho64 $< -o $@

%.out : %.o
	ld -static $< -o $@