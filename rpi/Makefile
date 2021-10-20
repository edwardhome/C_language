#編譯arm架構的程式
main: *.c
	gcc $^ -o main_x86
	aarch64-linux-gnu-gcc $^	-o main_arm
clean:
	-rm -rf main_*
