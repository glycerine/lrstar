
#pragma once

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//    LGParser.h

/*    Generated by: LRSTAR 5.0.002 Professional
      Grammar:      LG.grm
      Skeleton:     LGParser.h.skl
      Output:       LGParser.h
*/               
		#include "LGLexer.h"

		#define TOKEN_ACTIONS
		#define PARSE_ACTIONS

   // Defined constants ...
      #undef  T_ERROR        
      #undef  T_ALPHA        
      #undef  T_LEXICAL      
      #undef  T_ESCAPE       
      #undef  T_LITERAL1     
      #undef  T_LITERAL2     
      #undef  T_INTEGER      
      #undef  T_EOF          
      #undef  T_ARROW        
      #undef  T_RETURN       
      #undef  T_LEFTP        
      #undef  T_RIGHTP       
      #undef  T_PLUS         
      #undef  T_STAR         
      #undef  T_QUEST        
      #undef  T_DOTS         
      #undef  T_BAR          
      #undef  T_DASH         
      #undef  T_IGNORE       
      #undef  T_REPEAT       
      #undef  T_LEFTB        
      #undef  T_RIGHTB       
      #undef  T_SEMI         

      #define T_ERROR             0 // 
      #define T_ALPHA             1 // 
      #define T_LEXICAL           2 // 
      #define T_ESCAPE            3 // 
      #define T_LITERAL1          4 // 
      #define T_LITERAL2          5 // 
      #define T_INTEGER           6 // 
      #define T_EOF               7 // 
      #define T_ARROW             8 // 
      #define T_RETURN            9 // 
      #define T_LEFTP            10 // 
      #define T_RIGHTP           11 // 
      #define T_PLUS             12 // 
      #define T_STAR             13 // 
      #define T_QUEST            14 // 
      #define T_DOTS             15 // 
      #define T_BAR              16 // 
      #define T_DASH             17 // 
      #define T_IGNORE           18 // 
      #define T_REPEAT           19 // 
      #define T_LEFTB            20 // 
      #define T_RIGHTB           21 // 
      #define T_SEMI             22 // 

      class LGParser : public LGLexer
		{
		   public:
		// Functions ...
			static void     initialize   (int);				
			static int      Parse        ();	
			static int      parse        ();	
			static void     terminate    ();	
			static void     syntax_error (int);

		// Variables ...
         static PStack*  PS;           	      // Parse Stack pointer.       
         static PStack*  PS_end;        	      // Parse Stack end.       

			static char     pact_arg[];		      // Parse-action argument index (for first arg).
			static char     nact_arg[];		      // Node-action argument index (for first arg).
			static uchar    arg_numb[];		      // Argument numbers.
			static char*    arg_text[];		      // Argument text (for string arguments).
	      static uchar    f_prod[];
		   static uchar    f_tail[];

			static char*    T_start;
			static char*    T_end; 
			static int      T_line;        

		   private:
		// Functions ...
			static int      nd_parse      (int*, int*, int*, int x, int t, int a);
			static int      apply         (int p); 
			static int      linkup			(int p);
			static void     rebuild		   ();                           
			static short    err_rec		   (short, short);
			static short    lookahead		(short t, short x);
			static void     get_list		(short);
			static void     prt_token		(short); 
			static void     prt_prod		(short); 
			static void     prt_stack		(); 
			static void     expecting		(); 
			static void     restore       ();
			static void	    collect		   (int x);
			static void	    reduce			(int p, int x);
			static void     prt_list      (int t);
			static char*    prt_line      (char* ls, int ln); 
			static void	    prt_pointer   (char* ls, int ln, char* token);

		// Variables ...
			static int      max_errs;				   // Maximum allowable errors.
         static RStack*  RS;           		   // Reduction Stack pointer.
			static char*    T_list;					   // Terminal symbol list (0 or 1).
			static char*    H_list;					   // Head symbol list (0 or 1).
			static int*     P_list;					   // Production list.
         static RStack   R_stack[];				   // Reduction stack.
         static PStack   P_stack[];				   // Parser stack.
			static PStack*  PStop;				      // Top pointer for Parser stack.
			static int      topstate;				   // Top state (before reductions start).
		};

