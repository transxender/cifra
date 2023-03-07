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
#   File: code.pro
#
# Author: $author$
#   Date: 9/4/2022
#
# os specific QtCreator project .pro file for framework cifra executable code
########################################################################
#
# Debug: cifra/build/os/QtCreator/Debug/bin/code
# Release: cifra/build/os/QtCreator/Release/bin/code
# Profile: cifra/build/os/QtCreator/Profile/bin/code
#
include(../../../../../build/QtCreator/cifra.pri)
include(../../../../QtCreator/cifra.pri)
include(../../cifra.pri)
include(../../../../QtCreator/app/code/code.pri)

TARGET = $${code_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${code_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${code_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${code_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${code_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${code_HEADERS} \
$${code_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${code_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${code_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${code_LIBS} \
$${FRAMEWORKS} \

########################################################################

