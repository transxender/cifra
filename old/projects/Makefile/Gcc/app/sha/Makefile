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
# generic Makefile for framework cifra executable sha
########################################################################

#
# target
#
sha_EXETARGET = sha

########################################################################

#
# user c++ flags
#
sha_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
sha_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
sha_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
sha_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#sha_EXE_C_SOURCES += \
#${CIFRA_SRC}/xos/app/console/sha/main.c \

#
# executable .cc sources
#
#sha_EXE_CC_SOURCES += \
#${CIFRA_SRC}/xos/app/console/sha/main.cc \

#
# executable .cxx sources
#
#sha_EXE_CXX_SOURCES += \
#${CIFRA_SRC}/xos/app/console/sha/main.cxx \

#
# executable .cpp sources
#
sha_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/app/console/crypto/hash/main_opt.cpp \
${CIFRA_SRC}/xos/app/console/crypto/hash/main.cpp \

#
# executable .m sources
#
#sha_EXE_M_SOURCES += \
#${CIFRA_SRC}/xos/app/console/sha/main.m \

#
# executable .mm sources
#
#sha_EXE_MM_SOURCES += \
#${CIFRA_SRC}/xos/app/console/sha/main.mm \


########################################################################

#
# executable libraries
#
sha_LIBS += \
${cifra_LIBS}

