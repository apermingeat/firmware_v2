/* Copyright 2017, Agustin Bassi.
 * All rights reserved.
 *
 * This file is part sAPI library for microcontrollers.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/* Date: 2017-30-10 */

#ifndef _SAPI_STDIO_BUFFER_H_
#define _SAPI_STDIO_BUFFER_H_

/*==================[inclusions]=============================================*/

#include <stdarg.h>

#include "sapi_datatypes.h"

/*==================[macros]=================================================*/

/** Maximo tamanio del buffer a formatear bajo el estilo printf (con argumentos). */
#define STDIO_BUFFER_MAX_SIZE	200

/*==================[typedef]================================================*/

typedef enum stdioBufferConfig {
	STDIO_BUFFER_INIT
} stdioBufferConfig_t;
/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

bool_t	stdioBufferConfig 	(stdioBufferConfig_t config);

char * 	stdioBufferRead 	(void);

void 	stdioBufferWrite	(const char *fmt, ...);

/*==================[end of file]============================================*/

#endif /* #ifndef _SAPI_STDIO_BUFFER_H_ */
