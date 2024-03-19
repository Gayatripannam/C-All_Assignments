//print range of data type using limits.h

#include<stdio.h>
#include<limits.h>
#include <float.h>
int main(void)
{	
       printf("------------------------------------------------\n");
    printf("Data Type              FS      Size    range        \n");
    printf("------------------------------------------------\n");
	printf("\n char    	         %%c      %d     %d  to %d \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
    printf("\n unsigned char       %%c      %d     %d  to %d\n",sizeof(unsigned char),CHAR_MIN, UCHAR_MAX); 
    printf("\n short int	      %%hd     %d     %hd to %hd\n",sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n unsigned short int  %%hu     %d     %hu to %hu \n", sizeof(unsigned short int), SHRT_MIN, SHRT_MAX);
    printf("\n int                 %%d      %d     %d  to %d\n", sizeof(int), INT_MIN, SCHAR_MAX);
    printf("\n unsigned int        %%u      %d     %u  to %u\n", sizeof(unsigned int), INT_MIN, UINT_MAX);
    printf("\n long int            %%ld     %d     %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("\n unsigned long int   %%lu     %d     %lu to %lu\n", sizeof(unsigned long int), LONG_MIN, ULONG_MAX);

// Q 12

    printf("\n float               %%f     %d     %f to %f\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("\n float               %%g     %d     %g to %g\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("\n float               %%e     %d     %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("\n float               %%E     %d     %E to %E\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("\n double              %%lf     %d     %lf to %lf\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("\n long double         %%ld     %d     %ld to %ld\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
  



return 0;
}


