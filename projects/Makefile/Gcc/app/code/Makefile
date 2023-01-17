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
#   Date: 10/16/2022
#
# generic Makefile for framework cifra executable code
########################################################################

#
# target
#
code_EXETARGET = code

########################################################################

#
# user c++ flags
#
code_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
code_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
code_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
code_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#code_EXE_C_SOURCES += \
#${CIFRA_SRC}/xos/app/console/code/main.c \

#
# executable .cc sources
#
#code_EXE_CC_SOURCES += \
#${CIFRA_SRC}/xos/app/console/code/main.cc \

#
# executable .cxx sources
#
#code_EXE_CXX_SOURCES += \
#${CIFRA_SRC}/xos/app/console/code/main.cxx \

#
# executable .cpp sources
#
code_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/app/console/crypto/code/main_opt.cpp \
${CIFRA_SRC}/xos/app/console/crypto/code/main.cpp \

#
# executable .m sources
#
#code_EXE_M_SOURCES += \
#${CIFRA_SRC}/xos/app/console/code/main.m \

#
# executable .mm sources
#
#code_EXE_MM_SOURCES += \
#${CIFRA_SRC}/xos/app/console/code/main.mm \


########################################################################

#
# executable libraries
#
code_LIBS += \
${cifra_LIBS}

