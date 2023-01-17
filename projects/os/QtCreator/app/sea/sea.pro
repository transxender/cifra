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
#   File: sea.pro
#
# Author: $author$
#   Date: 9/4/2022
#
# os specific QtCreator project .pro file for framework cifra executable sea
########################################################################
#
# Debug: cifra/build/os/QtCreator/Debug/bin/sea
# Release: cifra/build/os/QtCreator/Release/bin/sea
# Profile: cifra/build/os/QtCreator/Profile/bin/sea
#
include(../../../../../build/QtCreator/cifra.pri)
include(../../../../QtCreator/cifra.pri)
include(../../cifra.pri)
include(../../../../QtCreator/app/sea/sea.pri)

TARGET = $${sea_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sea_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sea_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sea_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sea_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sea_HEADERS} \
$${sea_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sea_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sea_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sea_LIBS} \
$${FRAMEWORKS} \

########################################################################

