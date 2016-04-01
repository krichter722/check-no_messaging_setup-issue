## Process this file with automake to produce Makefile.in

TESTS = check_auto_apt
check_PROGRAMS = check_auto_apt
check_auto_apt_SOURCES = check_auto_apt.c
check_auto_apt_CFLAGS = @CHECK_CFLAGS@
# -L/usr/local/lib
check_auto_apt_LDFLAGS = -lcheck -lpthread -lrt -lm -ldl
#check_auto_apt_LDFLAGS = -lcheck -lpthread  -lm -lcheck # works
check_auto_apt_LDADD = $(top_builddir)/pkgcdb/libpkgcdb2.la @CHECK_LIBS@

#ACLOCAL_AMFLAGS = -I m4
