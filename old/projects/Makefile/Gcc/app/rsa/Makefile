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
# generic Makefile for framework cifra executable rsa
########################################################################

#
# target
#
rsa_EXETARGET = rsa

########################################################################

#
# user c++ flags
#
rsa_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
rsa_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
rsa_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
rsa_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#rsa_EXE_C_SOURCES += \
#${CIFRA_SRC}/xos/app/console/rsa/main.c \

#
# executable .cc sources
#
#rsa_EXE_CC_SOURCES += \
#${CIFRA_SRC}/xos/app/console/rsa/main.cc \

#
# executable .cxx sources
#
#rsa_EXE_CXX_SOURCES += \
#${CIFRA_SRC}/xos/app/console/rsa/main.cxx \

#
# executable .cpp sources
#
rsa_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/crypto/base.cpp \
${CIFRA_SRC}/xos/crypto/array.cpp \
${CIFRA_SRC}/xos/crypto/random/number/reader.cpp \
${CIFRA_SRC}/xos/crypto/random/prime/small_primes.cpp \
\
${CIFRA_SRC}/xos/crypto/random/prime/mp/license.cpp \
${CIFRA_SRC}/xos/crypto/random/prime/mp/number.cpp \
${CIFRA_SRC}/xos/crypto/random/prime/mp/reader.cpp \
${CIFRA_SRC}/xos/crypto/random/prime/mp/miller_rabin.cpp \
${CIFRA_SRC}/xos/crypto/random/prime/mp/generator.cpp \
${CIFRA_SRC}/xos/crypto/rsa/mp/key_generator.cpp \
\
${CIFRA_SRC}/xos/crypto/rsa/mp/key.cpp \
${CIFRA_SRC}/xos/crypto/rsa/mp/public_key.cpp \
${CIFRA_SRC}/xos/crypto/rsa/mp/private_key.cpp \
\
${CIFRA_SRC}/xos/crypto/rsa/keys.cpp \
\
${CIFRA_SRC}/xos/app/console/crypto/rsa/main_opt.cpp \
${CIFRA_SRC}/xos/app/console/crypto/rsa/main.cpp \

#
# executable .m sources
#
#rsa_EXE_M_SOURCES += \
#${CIFRA_SRC}/xos/app/console/rsa/main.m \

#
# executable .mm sources
#
#rsa_EXE_MM_SOURCES += \
#${CIFRA_SRC}/xos/app/console/rsa/main.mm \


########################################################################

#
# executable libraries
#
rsa_LIBS += \
${cifra_rsa_LIBS}

