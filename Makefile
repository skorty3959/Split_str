all:
	gcc src/main.c src/custom_str.c -o split_str

clean:
	rm split_str
