/* version.c */
/* Autogenerated by Makefile - DO NOT EDIT */

#include "version.h"
const char *version_string = "1.20.1";
const char *compilation_string = "icc.pl -DHAVE_CONFIG_H -DSYSTEM_WGETRC=\"/etc/wgetrc\" -DLOCALEDIR=\"/usr/share/locale\" -I. -I../../src -I../lib -I../../lib -Wdate-time -D_FORTIFY_SOURCE=2 -DHAVE_LIBSSL -DNDEBUG -g -O2 -fdebug-prefix-map=/dev/shm/wget/wget-1.20.1=. -Wformat -march=native -pipe -Wformat-security -DNO_SSLv2 -D_FILE_OFFSET_BITS=64 -g -Wall -Os";
const char *link_string = "icc.pl -DHAVE_LIBSSL -DNDEBUG -g -O2 -fdebug-prefix-map=/dev/shm/wget/wget-1.20.1=. -Wformat -march=native -pipe -Wformat-security -DNO_SSLv2 -D_FILE_OFFSET_BITS=64 -g -Wall -Os -Wl,-z,now -lpcre2-8 -luuid -lssl -lcrypto -lz ftp-opie.o openssl.o http-ntlm.o ../lib/libgnu.a ";
