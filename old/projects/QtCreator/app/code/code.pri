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
#   File: code.pri
#
# Author: $author$
#   Date: 9/4/2022
#
# generic QtCreator project .pri file for framework cifra executable code
########################################################################

########################################################################
# code

# code TARGET
#
code_TARGET = code

# code INCLUDEPATH
#
code_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# code DEFINES
#
code_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# code OBJECTIVE_HEADERS
#
#code_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/code/main.hh \

# code OBJECTIVE_SOURCES
#
#code_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/code/main.mm \

########################################################################
# code HEADERS
#
code_HEADERS += \
$${NADIR_SRC}/xos/console/sequence.hpp \
$${NADIR_SRC}/xos/console/input.hpp \
$${NADIR_SRC}/xos/console/out.hpp \
$${NADIR_SRC}/xos/console/output.hpp \
$${NADIR_SRC}/xos/console/error.hpp \
$${NADIR_SRC}/xos/console/io.hpp \
\
$${CIFRA_SRC}/xos/io/delegated/reader_events.hpp \
$${CIFRA_SRC}/xos/io/delegated/reader.hpp \
$${CIFRA_SRC}/xos/io/delegated/writer_events.hpp \
$${CIFRA_SRC}/xos/io/delegated/writer.hpp \
\
$${CIFRA_SRC}/xos/io/base64/output_to.hpp \
$${CIFRA_SRC}/xos/io/base64/reader_to_events.hpp \
$${CIFRA_SRC}/xos/io/base64/reader_to.hpp \
$${CIFRA_SRC}/xos/io/base64/read_to_output.hpp \
$${CIFRA_SRC}/xos/io/base64/writer_to_events.hpp \
$${CIFRA_SRC}/xos/io/base64/writer_to.hpp \
$${CIFRA_SRC}/xos/io/base64/write_to_output.hpp \
$${CIFRA_SRC}/xos/io/base64/to_array.hpp \
\
$${CIFRA_SRC}/xos/io/hex/output_to.hpp \
$${CIFRA_SRC}/xos/io/hex/reader_to_events.hpp \
$${CIFRA_SRC}/xos/io/hex/reader_to.hpp \
$${CIFRA_SRC}/xos/io/hex/read_to_output.hpp \
$${CIFRA_SRC}/xos/io/hex/writer_to_events.hpp \
$${CIFRA_SRC}/xos/io/hex/writer_to.hpp \
$${CIFRA_SRC}/xos/io/hex/write_to_output.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/base/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/base/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/code/base/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/code/base/main.hpp \
\
$${CIFRA_SRC}/xos/app/console/crypto/code/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/code/main.hpp \

# code SOURCES
#
code_SOURCES += \
$${CIFRA_SRC}/xos/app/console/crypto/code/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/crypto/code/main.cpp \

########################################################################
# code FRAMEWORKS
#
code_FRAMEWORKS += \
$${cifra_FRAMEWORKS} \

# code LIBS
#
code_LIBS += \
$${cifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core

