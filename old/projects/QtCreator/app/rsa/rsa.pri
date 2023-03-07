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
#   File: rsa.pri
#
# Author: $author$
#   Date: 9/4/2022
#
# generic QtCreator project .pri file for framework cifra executable rsa
########################################################################

########################################################################
# rsa

# rsa TARGET
#
rsa_TARGET = rsa

# rsa INCLUDEPATH
#
rsa_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# rsa DEFINES
#
rsa_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# rsa OBJECTIVE_HEADERS
#
#rsa_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/rsa/main.hh \

# rsa OBJECTIVE_SOURCES
#
#rsa_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/rsa/main.mm \

########################################################################
# rsa HEADERS
#
rsa_HEADERS += \
$${CIFRA_SRC}/xos/crypto/base.hpp \
$${CIFRA_SRC}/xos/crypto/array.hpp \
$${CIFRA_SRC}/xos/crypto/random/reader.hpp \
$${CIFRA_SRC}/xos/crypto/random/number/reader.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/reader.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/miller_rabin.hpp \
$${CIFRA_SRC}/xos/crypto/random/number/generator.hpp \
$${CIFRA_SRC}/xos/crypto/pseudo/random/number/generator.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/small_primes.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/generator.hpp \
\
$${CIFRA_SRC}/xos/crypto/random/prime/bn/license.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/bn/number.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/bn/reader.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/bn/miller_rabin.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/bn/generator.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/bn/key_generator.hpp \
\
$${CIFRA_SRC}/xos/crypto/random/prime/mp/license.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/number.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/reader.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/miller_rabin.hpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/generator.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/mp/key_generator.hpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/key/implement.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/key/extend.hpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/public_key/implement.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/public_key/extend.hpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/private_key/implement.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/private_key/extend.hpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/bn/key.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/bn/public_key.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/bn/private_key.hpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/mp/key.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/mp/public_key.hpp \
$${CIFRA_SRC}/xos/crypto/rsa/mp/private_key.hpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/keys.hpp \
\
$${CIFRA_SRC}/xos/app/console/cifra/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/cifra/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/base/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/base/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/rsa/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/rsa/main.hpp \

# rsa SOURCES
#
rsa_SOURCES += \
$${CIFRA_SRC}/xos/crypto/base.cpp \
$${CIFRA_SRC}/xos/crypto/array.cpp \
$${CIFRA_SRC}/xos/crypto/random/number/reader.cpp \
$${CIFRA_SRC}/xos/crypto/random/prime/small_primes.cpp \
\
$${CIFRA_SRC}/xos/crypto/random/prime/mp/license.cpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/number.cpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/reader.cpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/miller_rabin.cpp \
$${CIFRA_SRC}/xos/crypto/random/prime/mp/generator.cpp \
$${CIFRA_SRC}/xos/crypto/rsa/mp/key_generator.cpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/mp/key.cpp \
$${CIFRA_SRC}/xos/crypto/rsa/mp/public_key.cpp \
$${CIFRA_SRC}/xos/crypto/rsa/mp/private_key.cpp \
\
$${CIFRA_SRC}/xos/crypto/rsa/keys.cpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/rsa/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/crypto/rsa/main.cpp \

########################################################################
# rsa FRAMEWORKS
#
rsa_FRAMEWORKS += \
$${cifra_rsa_FRAMEWORKS} \

# rsa LIBS
#
rsa_LIBS += \
$${cifra_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

