%{
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <DLists.h>
#include <Tokenizer.h>
#include <Trees.h>

extern TREENODE *root;
typedef struct {
    DNODE mynode;
    TREENODE *nodeptr;
} T_NODE;

%}
%union {
   TOKEN_INFO info;
   DLIST dlist;
}
%token <info>  STRING
%token <info>  END
%token <info>  UPTO
%token <info>  VAR
%token <info>  IDENTIFIER
%token <info>  CHR
%token <info>  POOL
%token <info>  IF
%token <info>  FUNCTION
%token <info>  READ
%token <info>  REPEAT
%token <info>  RANGE
%token <info>  ELSE
%token <info>  RETURN
%token <info>  UNTIL
%token <info>  FOR
%token <info>  THEN
%token <info>  SWAP
%token <info>  OF
%token <info>  NE
%token <info>  CHAR
%token <info>  MOD
%token <info>  GT
%token <info>  CASE
%token <info>  WHILE
%token <info>  OUTPUT
%token <info>  EQ
%token <info>  PROCEDURE
%token <info>  CONST
%token <info>  GTE
%token <info>  PRED
%token <info>  NOT
%token <info>  DO
%token <info>  BEGINX
%token <info>  INTEGER_NUM
%token <info>  ORD
%token <info>  AND
%token <info>  EOFX
%token <info>  EXP
%token <info>  LTE
%token <info>  LOOP
%token <info>  SUCC
%token <info>  TYPE
%token <info>  OR
%token <info>  LT
%token <info>  OTHERWISE
%token <info>  EXITX
%token <info>  ASSIGNMENT
%token <info>  PROGRAM
%token <info>  DOWNTO
%type <dlist> Statement_1_1_1_1_1_1_1_1
%type <dlist> Ints
%type <dlist> Tertiary
%type <dlist> Strs
%type <dlist> Statement_1_1
%type <dlist> Literals
%type <dlist> Statement_1_1_1_1_1
%type <dlist> Params_1
%type <dlist> Consts_1
%type <dlist> A_1
%type <dlist> Cl
%type <dlist> Enums_1
%type <dlist> CaseClause
%type <dlist> Typ
%type <dlist> Params_1_1_1
%type <dlist> Con
%type <dlist> Params
%type <dlist> Function
%type <dlist> Statement_1_1_1
%type <dlist> Literals_1
%type <dlist> Tiny
%type <dlist> Chrs
%type <dlist> Statement_1
%type <dlist> Body_1
%type <dlist> Constants
%type <dlist> Consts
%type <dlist> Dcln
%type <dlist> Statement
%type <dlist> Params_1_1
%type <dlist> Term
%type <dlist> Dcln_1
%type <dlist> Name
%type <dlist> OtherwiseClause_1
%type <dlist> OtherwiseClause
%type <dlist> RangeStuf
%type <dlist> MName
%type <dlist> Body
%type <dlist> Subprogs_1
%type <dlist> Dclns_1
%type <dlist> Statement_1_1_1_1_1_1
%type <dlist> Procedure
%type <dlist> Subprogs
%type <dlist> Statement_1_1_1_1
%type <dlist> A
%type <dlist> MExpression
%type <dlist> Enums
%type <dlist> Secondary
%type <dlist> Expression
%type <dlist> Subroutines
%type <dlist> Dclns
%type <dlist> Primary
%type <dlist> Statement_1_1_1_1_1_1_1
%%

Tiny     : PROGRAM  Name     ':'      Consts   Enums    Dclns    Subprogs Body     Name     '.'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		while (DCount(&$5) > 0)
		    DAddTail(&r,DRemHead(&$5));

		while (DCount(&$6) > 0)
		    DAddTail(&r,DRemHead(&$6));

		while (DCount(&$7) > 0)
		    DAddTail(&r,DRemHead(&$7));

		while (DCount(&$8) > 0)
		    DAddTail(&r,DRemHead(&$8));

		while (DCount(&$9) > 0)
		    DAddTail(&r,DRemHead(&$9));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		t->mynode = *(DHead(&r));
		root = t->nodeptr;

             }
         ;

Dclns    : VAR      Dclns_1  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Dclns_1  : Dcln     ';'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Dcln     ';'      Dclns_1  
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Dcln     : Dcln_1   
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"var",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Dcln_1   : Name     ':'      Name     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         | Name     ','      Dcln_1   
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Consts   : CONST    Consts_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"consts",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"consts",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Consts_1 : Con      ';'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Con      ';'      Consts_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Con      : Name     EQ       Constants 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"const",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Constants : Chrs     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Ints     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Name     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

Enums    : TYPE     Enums_1  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Enums_1  : Typ      ';'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Typ      ';'      Enums_1  
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Typ      : Name     EQ       Literals 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Literals : '('      Literals_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"lit",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Literals_1 : Name     ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Name     ','      Literals_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Subprogs : Subprogs_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"subprogs",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"subprogs",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Subprogs_1 : Subroutines 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Subroutines Subprogs_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

Subroutines : Function 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Procedure 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

Function : FUNCTION Name     '('      Params   ')'      ':'      Name     ';'      Consts   Enums    Dclns    Body     Name     ';'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		while (DCount(&$7) > 0)
		    DAddTail(&r,DRemHead(&$7));

		while (DCount(&$9) > 0)
		    DAddTail(&r,DRemHead(&$9));

		while (DCount(&$10) > 0)
		    DAddTail(&r,DRemHead(&$10));

		while (DCount(&$11) > 0)
		    DAddTail(&r,DRemHead(&$11));

		while (DCount(&$12) > 0)
		    DAddTail(&r,DRemHead(&$12));

		while (DCount(&$13) > 0)
		    DAddTail(&r,DRemHead(&$13));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"function",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Procedure : PROCEDURE Name     '('      Params   ')'      ';'      Consts   Enums    Dclns    Body     Name     ';'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		while (DCount(&$7) > 0)
		    DAddTail(&r,DRemHead(&$7));

		while (DCount(&$8) > 0)
		    DAddTail(&r,DRemHead(&$8));

		while (DCount(&$9) > 0)
		    DAddTail(&r,DRemHead(&$9));

		while (DCount(&$10) > 0)
		    DAddTail(&r,DRemHead(&$10));

		while (DCount(&$11) > 0)
		    DAddTail(&r,DRemHead(&$11));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"procedure",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Params   : Params_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"params",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Params_1 : Params_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Params_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

Params_1_1_1 : Dcln     Params_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         | Dcln     ';'      Params_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Params_1_1 : Dcln     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Dcln     ';'      Params_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Body     : BEGINX   Body_1   
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"block",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Body_1   : Statement END      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | Statement ';'      Body_1   
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement : Name     ASSIGNMENT Expression 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"assign",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Name     SWAP     Name     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"swap",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | OUTPUT   '('      Statement_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"output",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | IF       Expression THEN     Statement Statement_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		while (DCount(&$5) > 0)
		    DAddTail(&r,DRemHead(&$5));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | WHILE    Expression DO       Statement 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"while",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | REPEAT   Statement_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"repeat",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | LOOP     Statement_1_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"loop",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | EXITX    
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exit",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | FOR      Name     ASSIGNMENT Expression UPTO     Expression DO       Statement 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		if ($5.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$5.string,
		                                TREETAG_LINE,$5.line,
		                                TREETAG_COLUMN,$5.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$6) > 0)
		    DAddTail(&r,DRemHead(&$6));

		if ($7.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$7.string,
		                                TREETAG_LINE,$7.line,
		                                TREETAG_COLUMN,$7.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$8) > 0)
		    DAddTail(&r,DRemHead(&$8));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"upto",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | FOR      Name     ASSIGNMENT Expression DOWNTO   Expression DO       Statement 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		if ($5.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$5.string,
		                                TREETAG_LINE,$5.line,
		                                TREETAG_COLUMN,$5.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$6) > 0)
		    DAddTail(&r,DRemHead(&$6));

		if ($7.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$7.string,
		                                TREETAG_LINE,$7.line,
		                                TREETAG_COLUMN,$7.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$8) > 0)
		    DAddTail(&r,DRemHead(&$8));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"downto",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | CASE     Expression OF       Statement_1_1_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | READ     '('      Statement_1_1_1_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Name     '('      Statement_1_1_1_1_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"call",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | RETURN   '('      Expression ')'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"return",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Body     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Statement_1_1_1_1_1_1_1 : Expression ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Expression ','      Statement_1_1_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1_1_1_1_1 : MName    ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | MName    ','      Statement_1_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1_1_1_1 : CaseClause Statement_1_1_1_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         | CaseClause Statement_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

Statement_1_1_1_1_1_1_1_1 : END      
             {
		DLIST r;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | OtherwiseClause END      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         ;

Statement_1_1_1_1 : Statement POOL     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | Statement ';'      Statement_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1_1 : Statement UNTIL    Expression 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         | Statement ';'      Statement_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1 : 
             {
		DLIST r;

		InitDList(&r);

		$$ = r;

             }
         | ELSE     Statement 
             {
		DLIST r;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

Statement_1 : MExpression ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | MExpression ','      Statement_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

MName    : Name     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type_disambiguation",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

MExpression : Expression 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type_disambiguation",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Strs     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type_disambiguation",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

CaseClause : Cl       ':'      Statement ';'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case_clause",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Cl       : RangeStuf RANGE    RangeStuf 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"range",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | RangeStuf 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

RangeStuf : Name     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Chrs     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Ints     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

OtherwiseClause : OTHERWISE Statement OtherwiseClause_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"otherwise",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

OtherwiseClause_1 : 
             {
		DLIST r;

		InitDList(&r);

		$$ = r;

             }
         | ';'      
             {
		DLIST r;

		InitDList(&r);

		$$ = r;

             }
         ;

Expression : Term     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Term     LTE      Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<=",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     EQ       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"=",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     NE       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<>",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     GTE      Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">=",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     LT       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     GT       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Term     : Primary  
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Term     '+'      Primary  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     '-'      Primary  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     OR       Primary  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"or",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Primary  : Secondary 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Primary  '*'      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"*",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Primary  '/'      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"/",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Primary  AND      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"and",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Primary  MOD      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"mod",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Secondary : '-'      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | '+'      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | NOT      Secondary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"not",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Tertiary 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

Tertiary : A        EXP      Tertiary 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exp",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | A        
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         ;

A        : EOFX     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"eof",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Name     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Ints     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Chrs     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | SUCC     '('      Expression ')'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"succ",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | PRED     '('      Expression ')'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pred",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | ORD      '('      Expression ')'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"ord",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | CHR      '('      Expression ')'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"chr",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Name     '('      A_1      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"call",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | '('      Expression ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

A_1      : Expression ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Expression ','      A_1      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Name     : IDENTIFIER 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Ints     : INTEGER_NUM 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Chrs     : CHAR     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<char>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Strs     : STRING   
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<string>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

