
# $Id: Makefile 2277 2012-04-03 14:38:27Z alin $

ifdef TRICK_HOME
ifneq ($(STAND_ALONE), 1)

-include ${TRICK_HOME}/makefiles/Makefile.common
-include ${TRICK_HOME}/makefiles/Makefile.tricklib

-include Makefile_deps

SEPARATE_LIB = $(TRICK_LIB_DIR)/libtrick_math.a

ifeq ($(HAVE_GSL),1)
TRICK_CFLAGS += -D_HAVE_GSL
ifneq ($(GSL_HOME),/usr)
TRICK_CFLAGS += -I${GSL_HOME}/include
endif
endif

default: $(SEPARATE_LIB)
trick: $(SEPARATE_LIB)

stand_alone:
	@ $(MAKE) STAND_ALONE=1

clean_stand_alone:
	@ $(MAKE) STAND_ALONE=1 clean

$(SEPARATE_LIB) : $(OBJECT_FILES) $(IO_OBJS) | $(TRICK_LIB_DIR)
	ar cr $@ $(OBJECT_FILES) $(IO_OBJS)

else

include makefile.stand_alone

endif
else

include makefile.stand_alone

endif

