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
#   File: Makefile
#
# Author: $author$
#   Date: 10/15/2022
#
# generic Makefile for framework cifra
########################################################################
# Depends: bn;mp;rostra;nadir;fila;crono

OTHER_VERSION_PKG = ${PKG}
OTHER_DEPENDS_PKG = ${PKG}/..
OTHER_THIRDPARTY_NAME = thirdparty
OTHER_THIRDPARTY_VERSION_PKG = ${OTHER_VERSION_PKG}/${OTHER_THIRDPARTY_NAME}
THIRDPARTY_SRC = ${PKG}/source/thirdparty

CIFRA_PKG = ${PKG}
CIFRA_SRC = ${CIFRA_PKG}/source
CIFRA_CRD_SRC = ${CIFRA_PKG}/creds/source
CIFRA_BLD = ${CIFRA_PKG}/${BLD}/${BUILD_TYPE}
CIFRA_LIB = ${CIFRA_BLD}/lib
CIFRA_BIN = ${CIFRA_BLD}/bin

########################################################################
# bn
BN_VERSION_MAJOR = 0
BN_VERSION_MINOR = 0
BN_VERSION_RELEASE = 0
BN_VERSION = ${BN_VERSION_MAJOR}.${BN_VERSION_MINOR}.${BN_VERSION_RELEASE}
BN_NAME = bn
BN_GROUP = openssl
BN_SOURCE = source
BN_VERSION_DIR = ${BN_GROUP}/${BN_NAME}-${BN_VERSION}
BN_DEPENDS_DIR = ${BN_NAME}
BN_THIRDPARTY_SRC_GROUP = ${BN_GROUP}
BN_THIRDPARTY_SRC_NAME = ${BN_NAME}
BN_THIRDPARTY_SRC_DIR = ${THIRDPARTY_SRC}/${BN_THIRDPARTY_SRC_GROUP}/${BN_THIRDPARTY_SRC_NAME}

#BN_PKG = ${OTHER_THIRDPARTY_VERSION_PKG}/${BN_VERSION_DIR}
#BN_PKG = ${OTHER_VERSION_PKG}/${BN_VERSION_DIR}
#BN_PKG = ${OTHER_DEPENDS_PKG}/${BN_DEPENDS_DIR}
#BN_SRC = ${BN_PKG}/source/${BN_GROUP}/${BN_NAME}
#BN_SRC = ${BN_PKG}/source
BN_PKG = ${CIFRA_PKG}
BN_SRC = ${BN_THIRDPARTY_SRC_DIR}
BN_BLD = ${BN_PKG}/${BLD}/${BUILD_TYPE}
BN_LIB = ${BN_BLD}/lib
BN_BIN = ${BN_BLD}/bin

# bn USRDEFINES
#
bn_USRDEFINES += \

# bn USRINCLUDES
#
bn_USRINCLUDES += \
-I${BN_SRC} \

# bn USRCXXFLAGS
#
bn_USRCXXFLAGS += \

# bn USRLIBDIRS
#
bn_USRLIBDIRS += \
-L${BN_LIB} \

# bn LIBS
#
bn_LIBS += \
-lbn \

# bn FRAMEWORKS
#
bn_FRAMEWORKS += \

########################################################################
# mp
MP_VERSION_MAJOR = 0
MP_VERSION_MINOR = 0
MP_VERSION_RELEASE = 0
MP_VERSION = ${MP_VERSION_MAJOR}.${MP_VERSION_MINOR}.${MP_VERSION_RELEASE}
MP_NAME = mp
MP_GROUP = gnu
MP_SOURCE = source
MP_VERSION_DIR = ${MP_GROUP}/${MP_NAME}-${MP_VERSION}
MP_DEPENDS_DIR = ${MP_NAME}
MP_THIRDPARTY_SRC_GROUP = ${MP_GROUP}
MP_THIRDPARTY_SRC_NAME = ${MP_NAME}
MP_THIRDPARTY_SRC_DIR = ${THIRDPARTY_SRC}/${MP_THIRDPARTY_SRC_GROUP}/${MP_THIRDPARTY_SRC_NAME}

#MP_PKG = ${OTHER_THIRDPARTY_VERSION_PKG}/${MP_VERSION_DIR}
#MP_PKG = ${OTHER_VERSION_PKG}/${MP_VERSION_DIR}
#MP_PKG = ${OTHER_DEPENDS_PKG}/${MP_DEPENDS_DIR}
#MP_SRC = ${MP_PKG}/source/${BN_GROUP}/${BN_NAME}
#MP_SRC = ${MP_PKG}/source
MP_PKG = ${CIFRA_PKG}
MP_SRC = ${MP_THIRDPARTY_SRC_DIR}
MP_BLD = ${MP_PKG}/${BLD}/${BUILD_TYPE}
MP_LIB = ${MP_BLD}/lib
MP_BIN = ${MP_BLD}/bin

# mp USRDEFINES
#
mp_USRDEFINES += \
-D_NO_INLINES \
-DNO_ASM \

# mp USRINCLUDES
#
mp_USRINCLUDES += \
-I${MP_SRC} \

# mp USRCXXFLAGS
#
mp_USRCXXFLAGS += \

# mp USRLIBDIRS
#
mp_USRLIBDIRS += \
-L${MP_LIB} \

# mp LIBS
#
mp_LIBS += \
-lmpz \
-lmpn \
-lmp \

# mp FRAMEWORKS
#
mp_FRAMEWORKS += \

########################################################################
# rostra
ROSTRA_VERSION_MAJOR = 0
ROSTRA_VERSION_MINOR = 0
ROSTRA_VERSION_RELEASE = 0
ROSTRA_VERSION = ${ROSTRA_VERSION_MAJOR}.${ROSTRA_VERSION_MINOR}.${ROSTRA_VERSION_RELEASE}
ROSTRA_NAME = rostra
ROSTRA_GROUP = ${ROSTRA_NAME}
ROSTRA_VERSION_DIR = ${ROSTRA_GROUP}/${ROSTRA_NAME}-${ROSTRA_VERSION}
ROSTRA_DEPENDS_DIR = ${ROSTRA_NAME}

#ROSTRA_PKG = ${OTHER_THIRDPARTY_VERSION_PKG}/${ROSTRA_VERSION_DIR}
#ROSTRA_PKG = ${OTHER_VERSION_PKG}/${ROSTRA_VERSION_DIR}
ROSTRA_PKG = ${OTHER_DEPENDS_PKG}/${ROSTRA_DEPENDS_DIR}
#ROSTRA_SRC = ${ROSTRA_PKG}/source/${BN_GROUP}/${BN_NAME}
ROSTRA_SRC = ${ROSTRA_PKG}/source
ROSTRA_BLD = ${ROSTRA_PKG}/${BLD}/${BUILD_TYPE}
ROSTRA_LIB = ${ROSTRA_BLD}/lib
ROSTRA_BIN = ${ROSTRA_BLD}/bin

# rostra USRDEFINES
#
rostra_USRDEFINES += \

# rostra USRINCLUDES
#
rostra_USRINCLUDES += \
-I${ROSTRA_SRC} \

# rostra USRCXXFLAGS
#
rostra_USRCXXFLAGS += \

# rostra USRLIBDIRS
#
rostra_USRLIBDIRS += \
-L${ROSTRA_LIB} \

# rostra LIBS
#
rostra_LIBS += \
-lrostra \

# rostra FRAMEWORKS
#
rostra_FRAMEWORKS += \

########################################################################
# nadir
NADIR_VERSION_MAJOR = 0
NADIR_VERSION_MINOR = 0
NADIR_VERSION_RELEASE = 0
NADIR_VERSION = ${NADIR_VERSION_MAJOR}.${NADIR_VERSION_MINOR}.${NADIR_VERSION_RELEASE}
NADIR_NAME = nadir
NADIR_GROUP = ${NADIR_NAME}
NADIR_VERSION_DIR = ${NADIR_GROUP}/${NADIR_NAME}-${NADIR_VERSION}
NADIR_DEPENDS_DIR = ${NADIR_NAME}

#NADIR_PKG = ${OTHER_THIRDPARTY_VERSION_PKG}/${NADIR_VERSION_DIR}
#NADIR_PKG = ${OTHER_VERSION_PKG}/${NADIR_VERSION_DIR}
NADIR_PKG = ${OTHER_DEPENDS_PKG}/${NADIR_DEPENDS_DIR}
#NADIR_SRC = ${NADIR_PKG}/source/${BN_GROUP}/${BN_NAME}
NADIR_SRC = ${NADIR_PKG}/source
NADIR_BLD = ${NADIR_PKG}/${BLD}/${BUILD_TYPE}
NADIR_LIB = ${NADIR_BLD}/lib
NADIR_BIN = ${NADIR_BLD}/bin

# nadir USRDEFINES
#
nadir_USRDEFINES += \

# nadir USRINCLUDES
#
nadir_USRINCLUDES += \
-I${NADIR_SRC} \

# nadir USRCXXFLAGS
#
nadir_USRCXXFLAGS += \

# nadir USRLIBDIRS
#
nadir_USRLIBDIRS += \
-L${NADIR_LIB} \

# nadir LIBS
#
nadir_LIBS += \
-lnadir \

# nadir FRAMEWORKS
#
nadir_FRAMEWORKS += \

########################################################################
# fila
FILA_VERSION_MAJOR = 0
FILA_VERSION_MINOR = 0
FILA_VERSION_RELEASE = 0
FILA_VERSION = ${FILA_VERSION_MAJOR}.${FILA_VERSION_MINOR}.${FILA_VERSION_RELEASE}
FILA_NAME = fila
FILA_GROUP = ${FILA_NAME}
FILA_VERSION_DIR = ${FILA_GROUP}/${FILA_NAME}-${FILA_VERSION}
FILA_DEPENDS_DIR = ${FILA_NAME}

#FILA_PKG = ${OTHER_THIRDPARTY_VERSION_PKG}/${FILA_VERSION_DIR}
#FILA_PKG = ${OTHER_VERSION_PKG}/${FILA_VERSION_DIR}
FILA_PKG = ${OTHER_DEPENDS_PKG}/${FILA_DEPENDS_DIR}
#FILA_SRC = ${FILA_PKG}/source/${BN_GROUP}/${BN_NAME}
FILA_SRC = ${FILA_PKG}/source
FILA_BLD = ${FILA_PKG}/${BLD}/${BUILD_TYPE}
FILA_LIB = ${FILA_BLD}/lib
FILA_BIN = ${FILA_BLD}/bin

# fila USRDEFINES
#
fila_USRDEFINES += \

# fila USRINCLUDES
#
fila_USRINCLUDES += \
-I${FILA_SRC} \

# fila USRCXXFLAGS
#
fila_USRCXXFLAGS += \

# fila USRLIBDIRS
#
fila_USRLIBDIRS += \
-L${FILA_LIB} \

# fila LIBS
#
fila_LIBS += \
-lfila \

# fila FRAMEWORKS
#
fila_FRAMEWORKS += \

########################################################################
# crono
CRONO_VERSION_MAJOR = 0
CRONO_VERSION_MINOR = 0
CRONO_VERSION_RELEASE = 0
CRONO_VERSION = ${CRONO_VERSION_MAJOR}.${CRONO_VERSION_MINOR}.${CRONO_VERSION_RELEASE}
CRONO_NAME = crono
CRONO_GROUP = ${CRONO_NAME}
CRONO_VERSION_DIR = ${CRONO_GROUP}/${CRONO_NAME}-${CRONO_VERSION}
CRONO_DEPENDS_DIR = ${CRONO_NAME}

#CRONO_PKG = ${OTHER_THIRDPARTY_VERSION_PKG}/${CRONO_VERSION_DIR}
#CRONO_PKG = ${OTHER_VERSION_PKG}/${CRONO_VERSION_DIR}
CRONO_PKG = ${OTHER_DEPENDS_PKG}/${CRONO_DEPENDS_DIR}
#CRONO_SRC = ${CRONO_PKG}/source/${BN_GROUP}/${BN_NAME}
CRONO_SRC = ${CRONO_PKG}/source
CRONO_BLD = ${CRONO_PKG}/${BLD}/${BUILD_TYPE}
CRONO_LIB = ${CRONO_BLD}/lib
CRONO_BIN = ${CRONO_BLD}/bin

# crono USRDEFINES
#
crono_USRDEFINES += \

# crono USRINCLUDES
#
crono_USRINCLUDES += \
-I${CRONO_SRC} \

# crono USRCXXFLAGS
#
crono_USRCXXFLAGS += \

# crono USRLIBDIRS
#
crono_USRLIBDIRS += \
-L${CRONO_LIB} \

# crono LIBS
#
crono_LIBS += \
-lcrono \

# crono FRAMEWORKS
#
crono_FRAMEWORKS += \

########################################################################
# cifra

# cifra USRDEFINES
#
cifra_USRDEFINES += \
${bn_USRDEFINES} \
${mp_USRDEFINES} \
${rostra_USRDEFINES} \
${nadir_USRDEFINES} \
${fila_USRDEFINES} \
${crono_USRDEFINES} \
${build_cifra_USRDEFINES} \

# cifra USRINCLUDES
#
cifra_USRINCLUDES += \
-I${CIFRA_SRC} \
-I${CIFRA_CRD_SRC} \
${crono_USRINCLUDES} \
${fila_USRINCLUDES} \
${nadir_USRINCLUDES} \
${rostra_USRINCLUDES} \
${mp_USRINCLUDES} \
${bn_USRINCLUDES} \
${build_cifra_USRINCLUDES} \

# cifra USRCXXFLAGS
#
cifra_USRCXXFLAGS += \
${bn_USRCXXFLAGS} \
${mp_USRCXXFLAGS} \
${rostra_USRCXXFLAGS} \
${nadir_USRCXXFLAGS} \
${fila_USRCXXFLAGS} \
${crono_USRCXXFLAGS} \
${build_cifra_USRCXXFLAGS} \

# cifra USRLIBDIRS
#
cifra_USRLIBDIRS += \
-L${CIFRA_LIB} \
${crono_USRLIBDIRS} \
${fila_USRLIBDIRS} \
${nadir_USRLIBDIRS} \
${rostra_USRLIBDIRS} \
${mp_USRLIBDIRS} \
${bn_USRLIBDIRS} \
${build_cifra_USRLIBDIRS} \

# cifra base LIBS
#
cifra_base_LIBS += \
-lcifra \
${crono_LIBS} \
${fila_LIBS} \
${nadir_LIBS} \
${rostra_LIBS} \

# cifra bn LIBS
#
cifra_bn_LIBS += \
${cifra_base_LIBS} \
${bn_LIBS} \
${build_cifra_LIBS} \

# cifra mp LIBS
#
cifra_mp_LIBS += \
${cifra_base_LIBS} \
${mp_LIBS} \
${build_cifra_LIBS} \

# cifra rsa LIBS
#
cifra_rsa_LIBS += \
${cifra_base_LIBS} \
${mp_LIBS} \
${bn_LIBS} \
${build_cifra_LIBS} \

# cifra LIBS
#
cifra_LIBS += \
${cifra_base_LIBS} \
${build_cifra_LIBS} \

########################################################################
