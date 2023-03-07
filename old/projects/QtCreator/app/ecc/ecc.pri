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
#   File: ecc.pri
#
# Author: $author$
#   Date: 9/4/2022
#
# generic QtCreator project .pri file for framework cifra executable ecc
########################################################################

########################################################################
# ecc

# ecc TARGET
#
ecc_TARGET = ecc

# ecc INCLUDEPATH
#
ecc_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# ecc DEFINES
#
ecc_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# ecc OBJECTIVE_HEADERS
#
#ecc_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/ecc/main.hh \

# ecc OBJECTIVE_SOURCES
#
#ecc_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/ecc/main.mm \

########################################################################
# ecc HEADERS
#
ecc_HEADERS += \
$${NADIR_SRC}/xos/base/array.hpp \
\
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/array.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/key.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/base_point.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/private_key.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/public_key.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/shared_secret.hpp \
\
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/msotoodeh/public_key.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/google/donna/public_key.hpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/public_keys.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/output/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/output/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/ecc/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/ecc/main.hpp \

# ecc SOURCES
#
ecc_SOURCES += \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/array.cpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/key.cpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/base_point.cpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/private_key.cpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/shared_secret.cpp \
$${CIFRA_SRC}/xos/crypto/ecc/curve25519/public_keys.cpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/ecc/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/crypto/ecc/main.cpp \

########################################################################
# ecc FRAMEWORKS
#
ecc_FRAMEWORKS += \
$${cifra_FRAMEWORKS} \

# ecc LIBS
#
ecc_LIBS += \
$${cifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core

