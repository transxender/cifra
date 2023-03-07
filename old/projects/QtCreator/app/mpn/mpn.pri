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
#   File: mpn.pri
#
# Author: $author$
#   Date: 9/4/2022
#
# generic QtCreator project .pri file for framework cifra executable mpn
########################################################################

########################################################################
# mpn

# mpn TARGET
#
mpn_TARGET = mpn

# mpn INCLUDEPATH
#
mpn_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# mpn DEFINES
#
mpn_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# mpn OBJECTIVE_HEADERS
#
#mpn_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/mpn/main.hh \

# mpn OBJECTIVE_SOURCES
#
#mpn_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/mpn/main.mm \

########################################################################
# mpn HEADERS
#
mpn_HEADERS += \
$${CIFRA_SRC}/xos/app/console/mpn/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/mpn/main.hpp \

# mpn SOURCES
#
mpn_SOURCES += \
$${CIFRA_SRC}/xos/app/console/mpn/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/mpn/main.cpp \

########################################################################
# mpn FRAMEWORKS
#
mpn_FRAMEWORKS += \
$${cifra_mp_FRAMEWORKS} \

# mpn LIBS
#
mpn_LIBS += \
$${cifra_mp_LIBS} \

########################################################################
# NO Qt
QT -= gui core

