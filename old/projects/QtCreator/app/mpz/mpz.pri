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
#   File: mpz.pri
#
# Author: $author$
#   Date: 9/4/2022
#
# generic QtCreator project .pri file for framework cifra executable mpz
########################################################################

########################################################################
# mpz

# mpz TARGET
#
mpz_TARGET = mpz

# mpz INCLUDEPATH
#
mpz_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# mpz DEFINES
#
mpz_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# mpz OBJECTIVE_HEADERS
#
#mpz_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/mpz/main.hh \

# mpz OBJECTIVE_SOURCES
#
#mpz_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/mpz/main.mm \

########################################################################
# mpz HEADERS
#
mpz_HEADERS += \
$${CIFRA_SRC}/xos/app/console/mpz/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/mpz/main.hpp \

# mpz SOURCES
#
mpz_SOURCES += \
$${CIFRA_SRC}/xos/app/console/mpz/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/mpz/main.cpp \

########################################################################
# mpz FRAMEWORKS
#
mpz_FRAMEWORKS += \
$${cifra_mp_FRAMEWORKS} \

# mpz LIBS
#
mpz_LIBS += \
$${cifra_mp_LIBS} \

########################################################################
# NO Qt
QT -= gui core

