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
# generic Makefile for framework cifra executable mpn
########################################################################

#
# target
#
mpn_exe_EXETARGET = mpn

########################################################################

#
# user c++ flags
#
mpn_exe_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
mpn_exe_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
mpn_exe_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
mpn_exe_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#mpn_exe_EXE_C_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mpn/main.c \

#
# executable .cc sources
#
#mpn_exe_EXE_CC_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mpn/main.cc \

#
# executable .cxx sources
#
#mpn_exe_EXE_CXX_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mpn/main.cxx \

#
# executable .cpp sources
#
mpn_exe_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/app/console/mpn/main_opt.cpp \
${CIFRA_SRC}/xos/app/console/mpn/main.cpp \

#
# executable .m sources
#
#mpn_exe_EXE_M_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mpn/main.m \

#
# executable .mm sources
#
#mpn_exe_EXE_MM_SOURCES += \
#${CIFRA_SRC}/xos/app/console/mpn/main.mm \


########################################################################

#
# executable libraries
#
mpn_exe_LIBS += \
${cifra_mp_LIBS}

