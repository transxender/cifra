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
#   File: sha.pri
#
# Author: $author$
#   Date: 9/4/2022
#
# generic QtCreator project .pri file for framework cifra executable sha
########################################################################

########################################################################
# sha

# sha TARGET
#
sha_TARGET = sha

# sha INCLUDEPATH
#
sha_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# sha DEFINES
#
sha_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sha OBJECTIVE_HEADERS
#
#sha_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/sha/main.hh \

# sha OBJECTIVE_SOURCES
#
#sha_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/sha/main.mm \

########################################################################
# sha HEADERS
#
sha_HEADERS += \
$${CIFRA_SRC}/xos/app/console/crypto/base/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/base/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/hash/base/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/hash/base/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/hash/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/hash/main.hpp \

# sha SOURCES
#
sha_SOURCES += \
$${CIFRA_SRC}/xos/app/console/crypto/hash/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/crypto/hash/main.cpp \

########################################################################
# sha FRAMEWORKS
#
sha_FRAMEWORKS += \
$${cifra_FRAMEWORKS} \

# sha LIBS
#
sha_LIBS += \
$${cifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core

