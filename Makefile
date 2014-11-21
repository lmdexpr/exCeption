CC =gcc
EX_C_EPTION_PATH = exCeption
SOURCE =sample/sample_2.c

run:$(EX_C_EPTION_PATH)/exCeption.h
	make clean
	$(CC) -I $(EX_C_EPTION_PATH) -o $@ $(SOURCE)

clean:
	rm -f run
