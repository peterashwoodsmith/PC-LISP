

/*
 | PC-LISP (C) 1984-1989 Peter J.Ashwood-Smith
 */
#include <stdio.h>
#include <math.h>
#include "lisp.h"


/*************************************************************************
 ** buportp: Given a parameter return 't' if a port or 'nil otherwise.  **
 *************************************************************************/
struct conscell *buportp(form)
struct conscell *form;
{      if ((form != NULL)&&(form->cdrp == NULL)) {
           if ((form->carp != NULL) && (form->carp->celltype == FILECELL))
               return(LIST(thold));
           else
               return(NULL);
       }
       ierror("portp");  /*  doesn't return  */
       return NULL;   /*  keep compiler happy  */
}
