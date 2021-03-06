/* bbftp.h.  Generated automatically by configure.  */
/* ../includes/bbftp.h.in.  Generated automatically from configure.in by autoheader.  */
/*
 * includes/bbftp.h.in
 * Copyright (C) 1999, 2000, 2001, 2002 IN2P3, CNRS
 * bbftp@in2p3.fr
 * http://doc.in2p3.fr/bbftp
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/****************************************************************************



 This header contains all parameters that are configured
 by configure

 bbftp.h v 1.9.0  2000/08/17    - Header creation
         v 2.0.0  2000/03/20    - Add flag for readir call
         v 2.0.2  2000/05/07    - Add flag for RFIO and CASTOR
         v 2.2.0  2001/10/04    - Add flag HAVE_SSH for command ssh or ssf (cc)

*****************************************************************************/
/*<<<<<<<<<<<<<<<<<<< Authentication Mechanism >>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

/* USE_PAM :
**      use PAM as authentication
*/
/* #undef USE_PAM */

/* SHADOW_PASSWORD :
**      Define if we have everything to get the shadow pass
*/
/* #undef SHADOW_PASSWORD */

/* HAVE_SECURITY_PASS :
**      Define if we have using /etc/security/ files
*/
/* #undef HAVE_SECURITY_PASS */

/* USE_GETPASSPHRASE :
**      Use getpassphrase to enter the password (instead of getpass)
*/
/* #undef USE_GETPASSPHRASE */

/* AFS : Standard authentication thru AFS
**      Define if AFS is used for the standard authentication
*/
/* #undef AFS */

/* CERTIFICATE_AUTH
**      Globus certificates authentication mecanism
*/
/* #undef CERTIFICATE_AUTH */

/* PRIVATE_AUTH
**      User-defined authentication mecanism
*/
/* #undef PRIVATE_AUTH */

/*<<<<<<<<<<<<<<<<<<<<<<<< ARCHITECTURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

/*
** STANDART_FILE_CALL :
**      To know if we are going to use the standart calls to open, lseek, stat
**      or use open64, lseek64 and stat64
**
*/
#define STANDART_FILE_CALL 1
/*
** STANDART_READDIR_CALL :
**      To know if we are going to use the standart calls to readdir
**      or readdir64 (tihs is done only if not using standart file
**      call
**
*/
/* #undef STANDART_READDIR_CALL */

/* my64_t :
**      That a 64 bits type defined for me
**
*/
#define my64_t long long

/* LONG_LONG_FORMAT :
**      How to print a long long
**
*/
#define LONG_LONG_FORMAT "lld"

/* HAVE_NTOHLL
**      Have ntohll function
**
*/
/* #undef HAVE_NTOHLL */

/*<<<<<<<<<<<<<<<<<<<<<<< SIGNALS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

/* HAVE_SIGINFO :
**      Have siginfo structure
**
*/
#define HAVE_SIGINFO 1

/* HAVE_SA_NOCLDWAIT :
**      Have siginfo structure
**
*/
#define HAVE_SA_NOCLDWAIT 1

/* USE_STANDART_SIGNALS :
**      Use SIGHUP SIGUSR1 and SIGUSR2, if not defined use Real time signals
**
*/
#define USE_STANDART_SIGNALS 1

/*<<<<<<<<<<<<<<<<<<<<<<< EXTERNAL SOFTWARE >>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* WITH_RFIO :
**      Define if RFIO has been included and defines which version
*/
/* #undef WITH_RFIO */
/* #undef WITH_RFIO64 */

/* CASTOR :
**      Define if RFIO castor library is present
*/
/* #undef CASTOR */

/* WITH_GZIP
**      Define if compression has been included in building
*/
#define WITH_GZIP 1

/* WITH_SSL
**      Define if encoding has been included in building
*/
#define WITH_SSL 1

/* #undef PORT_RANGE */

/* Define if you have the <byteswap.h> header file. */
/* #undef HAVE_BYTESWAP_H */

/* Define if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define if you have the <glob.h> header file. */
/* #undef HAVE_GLOB_H */

/* Define if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the <limits.h> header file. */
/* #undef HAVE_LIMITS_H */

/* Define if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define if you have the `ntohll' function. */
/* #undef HAVE_NTOHLL */

/* Define if you have the <openssl/rsa.h> header file. */
#define HAVE_OPENSSL_RSA_H 1

/* Define if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define if you have the <shadow.h> header file. */
/* #undef HAVE_SHADOW_H */

/* Define if you have the <shift.h> header file. */
/* #undef HAVE_SHIFT_H */

/* Define if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define if you have the `stageclr_Path' function. */
/* #undef HAVE_STAGECLR_PATH */

/* #undef HAVE_STATFS */
/* #undef HAVE_STATVFS */
/* #undef HAVE_STATVFS64 */

/* #undef HAVE_STRUCT_STATVFS64 */
/* #undef HAVE_STRUCT_STATVFS */
/* #undef HAVE_STRUCT_STATFS */

/* #undef HAVE_SOCKLEN_T */

/* Define if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* #undef HAVE_STRUCT_STAT_ST_BLKSIZE */
/* #undef HAVE_STRUCT_STAT_ST_BLOCKS */
/* #undef HAVE_STRUCT_STAT_ST_RDEV */

/* Define if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1
/* #undef HAVE_SYS_STATVFS_H */

/* Define if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1
#define HAVE_TIME_H 1
#define TIME_WITH_SYS_TIME 1

/* Define if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* #undef HAVE_SYS_VFS_H */

/* Define if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if you have the <userpw.h> header file. */
/* #undef HAVE_USERPW_H */

/* Define if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1


/* Define if you have the <zconf.h> header file. */
#define HAVE_ZCONF_H 1

/* Define if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* The size of a `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of a `off64_t', as computed by sizeof. */
/* #undef SIZEOF_OFF64_T */

/* The size of a `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if your processor stores words with the most significant byte first
   (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */



/* Define the random routines */
/* #undef srandom */
/* #undef random */

#include <port_sys.h>

