external_LIBS = \
	$(top_builddir)/external_libs/dftd3/libdftd3.a

internal_LIBS = \
	$(top_builddir)/src/pseudo/libpseudo.a

all_LIBS = $(internal_LIBS) $(external_LIBS)

AM_CXXFLAGS = -I$(top_srcdir)/src/