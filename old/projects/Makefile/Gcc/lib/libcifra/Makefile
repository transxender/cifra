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
# generic Makefile for framework cifra library libcifra
########################################################################
# Depends: bn;mp;rostra;nadir;fila;crono

#
# target
#
libcifra_LIBTARGET = libcifra.${LIBEXT}

########################################################################

#
# user c++ flags
#
libcifra_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
libcifra_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_LIB_CIFRA_VERSION_BUILD_DATE=10/15/2022 #${shell tdate} \


#
# user includes
#
libcifra_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
libcifra_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# library .c sources
#
#libcifra_LIB_C_SOURCES += \
#${CIFRA_SRC}/xos/lib/cifra/version.c \

#
# library .cc sources
#
#libcifra_LIB_CC_SOURCES += \
#${CIFRA_SRC}/xos/lib/cifra/version.cc \

#
# library .cxx sources
#
#libcifra_LIB_CXX_SOURCES += \
#${CIFRA_SRC}/xos/lib/cifra/version.cxx \

#
# library .cpp sources
#
libcifra_LIB_CPP_SOURCES += \
${CIFRA_SRC}/xos/crypto/base.cpp \
${CIFRA_SRC}/xos/crypto/hash.cpp \
${CIFRA_SRC}/xos/crypto/random.cpp \
${CIFRA_SRC}/xos/crypto/cipher.cpp \
\
${CIFRA_SRC}/xos/lib/cifra/version.cpp \

#
# library .m sources
#
#libcifra_LIB_M_SOURCES += \
#${CIFRA_SRC}/xos/lib/cifra/version.m \

#
# library .mm sources
#
#libcifra_LIB_MM_SOURCES += \
#${CIFRA_SRC}/xos/lib/cifra/version.mm \


########################################################################


