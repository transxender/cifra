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
#   File: mpz.pro
#
# Author: $author$
#   Date: 9/4/2022
#
# os specific QtCreator project .pro file for framework cifra executable mpz
########################################################################
#
# Debug: cifra/build/os/QtCreator/Debug/bin/mpz
# Release: cifra/build/os/QtCreator/Release/bin/mpz
# Profile: cifra/build/os/QtCreator/Profile/bin/mpz
#
include(../../../../../build/QtCreator/cifra.pri)
include(../../../../QtCreator/cifra.pri)
include(../../cifra.pri)
include(../../../../QtCreator/app/mpz/mpz.pri)

TARGET = $${mpz_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${mpz_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${mpz_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${mpz_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${mpz_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${mpz_HEADERS} \
$${mpz_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${mpz_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${mpz_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${mpz_LIBS} \
$${FRAMEWORKS} \

########################################################################

