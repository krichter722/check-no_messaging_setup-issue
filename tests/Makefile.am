## Process this file with automake to produce Makefile.in

TESTS = check_auto_apt
check_PROGRAMS = check_auto_apt
check_auto_apt_SOURCES = check_auto_apt.c
check_auto_apt_CFLAGS = @CHECK_CFLAGS@ -L/usr/local/lib
check_auto_apt_LDFLAGS = -lcheck_pic -lpthread -lrt -lm -lcheck

ACLOCAL_AMFLAGS = -I m4
