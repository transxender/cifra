########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 10/15/2022
#
# generic Makefile for framework cifra executable mp
########################################################################

#
# target
#
mp_exe_EXETARGET = mp

########################################################################

#
# user c++ flags
#
mp_exe_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
mp_exe_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
mp_exe_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
mp_exe_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#mp_exe_EXE_C_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mp/main.c \

#
# executable .cc sources
#
#mp_exe_EXE_CC_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mp/main.cc \

#
# executable .cxx sources
#
#mp_exe_EXE_CXX_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mp/main.cxx \

#
# executable .cpp sources
#
mp_exe_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/app/console/mp/main_opt.cpp \
${CIFRA_SRC}/xos/app/console/mp/main.cpp \

#
# executable .m sources
#
#mp_exe_EXE_M_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mp/main.m \

#
# executable .mm sources
#
#mp_exe_EXE_MM_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mp/main.mm \


########################################################################

#
# executable libraries
#
mp_exe_LIBS += \
${cifra_mp_LIBS}

