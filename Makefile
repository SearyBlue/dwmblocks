output: dwmblocks.o
	gcc dwmblocks.o -lX11 -o dwmblocks
dwmblocks.o: dwmblocks.c blocks.h
	gcc -c -lX11 dwmblocks.c 
clean:
	rm *.o *.gch dwmblocks
install: output
	mkdir -p ~/.local/bin
	cp -f dwmblocks ~/.local/bin/
