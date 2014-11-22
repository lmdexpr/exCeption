CC =gcc
EX_C_EPTION_PATH = exCeption
SOURCE =sample/sample_1.c

run:$(EX_C_EPTION_PATH)/exCeption.h
	$(CC) -I $(EX_C_EPTION_PATH) -o $@ $(SOURCE)

clean:
	rm -f run
