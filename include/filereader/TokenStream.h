#ifndef TokenStream_H
#define TokenStream_H
#include "CharStream.h"
#include "Token.h"
class TokenStream{
private:
	CharStream & cs;
	Token nextToken;
	bool eofFlag;
public:
	TokenStream(CharStream & charStream);
	
	Token get(void);
	Token const & peek(void) const;

	bool bad(void) const;
	bool eof(void) const;
	operator bool(void) const;
};
#endif
