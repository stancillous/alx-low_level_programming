#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <fcntl.h>
size_t read_textfile(const char *fiiame, size_t letters);
int create_file(const char *fiiame, char *text_content);
int append_text_to_file(const char *fiiame, char *text_content);
#endif
