CC = g++
INCLUDE = -Iinclude
GEN_OBJ = $(CC) $(INCLUDE) -c $? -o $@
OBJ_FILES = out/main.o out/youtube_dl.o out/curl_install.o
OUT_NAME = edownloader

edownloader: $(OBJ_FILES)
	$(CC) $? -o $(OUT_NAME)

clean:
	rm -f $(OUT_NAME)
	rm -rf out
	rm -f out.txt
	mkdir out

out/main.o: src/main.cpp
	$(GEN_OBJ)

out/youtube_dl.o: src/youtube_dl.cpp
	$(GEN_OBJ)

out/curl_install.o: src/curl_install.cpp
	$(GEN_OBJ)
