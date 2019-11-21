/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "math.h"

int *
add_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;
    printf("Add %d and %d\n",argp->a,argp->b);
	result= argp->a + argp->b;
	 
	 

	return &result;
}

int *
multiply_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Multiply %d and %d\n",argp->a,argp->b);
	result= argp->a * argp->b;
	 

	return &result;
}

int *
cube_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;
    printf("Cube %d\n",*argp);
    result = (*argp)*(*argp)*(*argp);

	return &result;
}
