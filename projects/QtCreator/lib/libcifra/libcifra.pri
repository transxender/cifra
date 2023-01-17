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
#   File: libcifra.pri
#
# Author: $author$
#   Date: 9/3/2022
#
# generic QtCreator project .pri file for framework cifra static library libcifra
########################################################################

########################################################################
# libcifra
XOS_LIB_CIFRA_VERSION_BUILD_DATE = 9/3/2022 #$$system(~/bin/utility/tdate)

# libcifra TARGET
#
libcifra_TARGET = cifra
libcifra_TEMPLATE = lib
libcifra_CONFIG += staticlib

# libcifra INCLUDEPATH
#
libcifra_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# libcifra DEFINES
#
libcifra_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_CIFRA_VERSION_BUILD_DATE=$${XOS_LIB_CIFRA_VERSION_BUILD_DATE} \

########################################################################
# libcifra OBJECTIVE_HEADERS
#
#libcifra_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/lib/cifra/version.hh \

# libcifra OBJECTIVE_SOURCES
#
#libcifra_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/lib/cifra/version.mm \

########################################################################
# libcifra HEADERS
#
libcifra_HEADERS += \
$${CIFRA_SRC}/xos/crypto/base.hpp \
$${CIFRA_SRC}/xos/crypto/hash.hpp \
$${CIFRA_SRC}/xos/crypto/random.hpp \
$${CIFRA_SRC}/xos/crypto/cipher.hpp \
\
$${CIFRA_SRC}/xos/lib/cifra/version.hpp \

# libcifra SOURCES
#
libcifra_SOURCES += \
$${CIFRA_SRC}/xos/crypto/base.cpp \
$${CIFRA_SRC}/xos/crypto/hash.cpp \
$${CIFRA_SRC}/xos/crypto/random.cpp \
$${CIFRA_SRC}/xos/crypto/cipher.cpp \
\
$${CIFRA_SRC}/xos/lib/cifra/version.cpp \

########################################################################

