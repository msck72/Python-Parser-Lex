
%{
	#include "y.tab.h"
%}s

digits  	[1-9][0-9]*|[0-9]

%%

#.*\n		;
[ ][\t]*    ;

INDENT		return INDENT;
DEDENT		return DEDENT;

import[\t]* return IMPORT;
as[\t]*     return AS;
from[\t]* return FROM;
def[\t]*  return DEF;
class[\t]*    return CLASS;
in[\t]*     return IN;
return[\t]*     return RETURN;

while[\t]*  return WHILE;
for[\t]*  return FOR;
if[\t]*		return IF;
elif[\t]*		return ELIF;
else[\t]*		return ELSE;
:[\t]*  return BLOCKSTART;
\([\t]*   return OPENBRACE;
\)[\t]*     return CLBRACE;
\[[\t]*		return OPENLIST;
\][\t]*		return CLLIST;

[a-zA-Z_]+[a-zA-Z0-9]*[\t]* return IDENTIFIER;

==[\t]*|<=[\t]*|>=[\t]*|<[\t]*|>[\t]*   return REL_OP;

=[\t]*|\+=[\t]*|-=[\t]*|\*=[\t]*|@=[\t]*|\/=[\t]*|%=[\t]*|&=[\t]*|\|=[\t]*|^=[\t]*|<<=[\t]*|>>=[\t]*|\*\*=[\t]*|\/\/=[\t]*  return ASSIGNOPR;

\+[\t]*|-[\t]*|\*[\t]*|\/[\t]*|\*\*[\t]*|\/\/[\t]*|%[\t]*  	return ARTH_OP;

{digits}[\t]*|{digits}(\.{digits})?(E[+-]{digits})?[\t]*|{digits}\.{digits}?[\t]*   return NUMBER;

\n	return NEWLINE;
,	return COMA;

%%


int yywrap(){}



