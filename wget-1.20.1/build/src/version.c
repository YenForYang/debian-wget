/* version.c */
/* Autogenerated by Makefile - DO NOT EDIT */

#include "version.h"
const char *version_string = "1.20.1";
const char *compilation_string = "icc.pl -DHAVE_CONFIG_H -DSYSTEM_WGETRC=\"/etc/wgetrc\" -DLOCALEDIR=\"/usr/share/locale\" -I. -I../../src -I../lib -I../../lib -Wdate-time -D_FORTIFY_SOURCE=2 -I/usr/include/p11-kit-1 -DHAVE_LIBGNUTLS -DNDEBUG -g -O2 -fdebug-prefix-map=/dev/shm/wget/wget-1.20.1=. -Wformat -march=native -pipe -Wformat-security -DNO_SSLv2 -D_FILE_OFFSET_BITS=64 -g -Wall";
const char *link_string = "icc.pl -I/usr/include/p11-kit-1 -DHAVE_LIBGNUTLS -DNDEBUG -g -O2 -fdebug-prefix-map=/dev/shm/wget/wget-1.20.1=. -Wformat -march=native -pipe -Wformat-security -DNO_SSLv2 -D_FILE_OFFSET_BITS=64 -g -Wall -Wl,-z,now -lpcre2-8 -luuid -lidn2 -lnettle -lgnutls -lz -lpsl ftp-opie.o gnutls.o http-ntlm.o ../lib/libgnu.a ";
