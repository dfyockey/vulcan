/* yyerror.h -- part of vulcan
 *
 * This program is copyright (C) 2006 Mauro Persano, and is free
 * software which is freely distributable under the terms of the
 * GNU public license, included as the file COPYING in this
 * distribution.  It is NOT public domain software, and any
 * redistribution not permitted by the GNU General Public License is
 * expressly forbidden without prior written permission from
 * the author.
 *
 */

#ifndef YYERROR_H_
#define YYERROR_H_

extern int lineno;

void
yyerror(const char *str);

#endif /* YYERROR_H_ */
