                                                                                                                                                                                                                                                    
#ifndef c_lexer_h
#define c_lexer_h

/* Original source code with tab = 3 */
/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//    c_lexer.h

/*    Generated by: DFASTAR 6.3.006
      Grammar:      c.lgr
      Skeleton:     ..\..\skl\lexer.h.skl
      Output:       c_lexer.h
*/               
		#define uchar  unsigned char
		#define ushort unsigned short
		#define uint   unsigned int

		#define c_lexer c_lexer

		class Token
		{
			public:
			char* start;	   // Start of token.
			char* end;		   // End   of token (character following token).
			int   linenumb;	// Input line number.
			int   colnumb;		// Input column number.
			int   sti;			// Symbol table index.
		};

		class c_lexer 
		{
			public:
         static Token  token;
			static int    tab;
			static int    linenumb;
			static int    colnumb;

			static char*  string[];					// Strings, if strings were used instead of numbers
			static char*  token_name[];			// Token names, if names were used instead of numbers.

			static int    get_token ();
			static void   lexer_init (char*);

			private:

			static uchar  Tm[];			// Terminal transition matrix (gives next state or reduction).
			static ushort Tr[];			// Terminal transition matrix row (base).
			static uchar  Tc[];			// Terminal transition matrix column (displacement).

			static char   terminal[];	// Terminal-symbol number for symbol recognized.
		};

#endif

