/*
 * Program:	Operating-system dependent routines -- DOS (B&W/Novell) version
 *
 * Author:	Mark Crispin
 *		Networks and Distributed Computing
 *		Computing & Communications
 *		University of Washington
 *		Administration Building, AG-44
 *		Seattle, WA  98195
 *		Internet: MRC@CAC.Washington.EDU
 *
 * Date:	11 May 1989
 * Last Edited:	24 October 2000
 * 
 * The IMAP toolkit provided in this Distribution is
 * Copyright 2000 University of Washington.
 * The full text of our legal notices is contained in the file called
 * CPYRIGHT, included with this Distribution.
 */

#define INADEQUATE_MEMORY

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys\types.h>
#include <io.h>

#define gethostid clock

#include "env_dos.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"
