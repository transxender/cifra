########################################################################
# Copyright (c) 1988-2023 $organization$
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
#   File: mp.pro
#
# Author: $author$
#   Date: 3/3/2023
#
# os specific QtCreator project .pro file for nuasteraede framework cifra executable mp
########################################################################
# Depends: rostra;nadir;fila;crono
#
# Debug: cifra/build/os/QtCreator/Debug/bin/mp
# Release: cifra/build/os/QtCreator/Release/bin/mp
# Profile: cifra/build/os/QtCreator/Profile/bin/mp
#
include(../../../../../build/QtCreator/cifra.pri)
include(../../../../QtCreator/cifra.pri)
include(../../cifra.pri)
include(../../../../QtCreator/app/mp/mp.pri)

TARGET = $${mp_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${mp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${mp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${mp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${mp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${mp_HEADERS} \
$${mp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${mp_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${mp_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${mp_LIBS} \
$${FRAMEWORKS} \

########################################################################
