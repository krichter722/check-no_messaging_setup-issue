# Process this file with autoconf to produce a configure script.

# Prelude.
AC_PREREQ([2.59])
AC_INIT([Money], [0.3], [check-devel AT lists.sourceforge.net])
AC_CONFIG_MACRO_DIR([m4])

# place to put some extra build scripts installed
AC_CONFIG_AUX_DIR([build-aux])

# fairly severe build strictness
# change foreign to gnu or gnits to comply with gnu standards
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects 1.9.6])
AM_PROG_AR

LT_INIT # needs to be after AM_PROGS_AR
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL

# Checks for libraries.

# This macro is defined in check.m4 and tests if check.h and
# libcheck.a are installed in your system. It sets CHECK_CFLAGS and
# CHECK_LIBS accordingly.  
#  AM_PATH_CHECK([MINIMUM-VERSION,
#                [ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND]]])
#AM_PATH_CHECK()
PKG_CHECK_MODULES([CHECK], [check >= 0.9.4])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC

# Output files

AC_CONFIG_FILES([pkgcdb/Makefile
                 Makefile
                 tests/Makefile])

AC_OUTPUT
