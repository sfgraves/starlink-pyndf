void ndf1BppD( size_t el, const double array[], int *bad, int *status );
void ndf1AwiD( hdsdim lbnd, hdsdim ubnd, const double data[], double width[], int *status );
void ndf1V2sD( int bad, size_t el, double array[], int *dce, int *status );
void ndf1SqLimitD( double *result );
void ndf1AdiD( hdsdim lbnda, hdsdim ubnda, double adata[], int *status );
void ndf1S2vD( int bad, size_t el, double array[], int *dce, int *status );
void ndf1AdeD( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, double adata[], int *status );
void ndf1QmaD( int el, const unsigned char qual[], unsigned char badbit, int narray,double array1[], double array2[],double array3[], double array4[],int *bad, int *status );
void ndf1AveD( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, double avar[], int *status );
void ndf1AweD( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, double awidth[], int *status );
void ndf1AdiD( hdsdim lbnda, hdsdim ubnda, double adata[], int *status );
void ndf1CvtD( int bad, size_t n, const char *type, void *pntr, double *result, int *dce, int *status );
void ndf1BppF( size_t el, const float array[], int *bad, int *status );
void ndf1AwiF( hdsdim lbnd, hdsdim ubnd, const double data[], float width[], int *status );
void ndf1V2sF( int bad, size_t el, float array[], int *dce, int *status );
void ndf1SqLimitF( float *result );
void ndf1AdiF( hdsdim lbnda, hdsdim ubnda, float adata[], int *status );
void ndf1S2vF( int bad, size_t el, float array[], int *dce, int *status );
void ndf1AdeF( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, float adata[], int *status );
void ndf1QmaF( int el, const unsigned char qual[], unsigned char badbit, int narray,float array1[], float array2[],float array3[], float array4[],int *bad, int *status );
void ndf1AveF( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, float avar[], int *status );
void ndf1AweF( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, float awidth[], int *status );
void ndf1AdiF( hdsdim lbnda, hdsdim ubnda, float adata[], int *status );
void ndf1CvtF( int bad, size_t n, const char *type, void *pntr, float *result, int *dce, int *status );
void ndf1BppI( size_t el, const int array[], int *bad, int *status );
void ndf1AwiI( hdsdim lbnd, hdsdim ubnd, const double data[], int width[], int *status );
void ndf1V2sI( int bad, size_t el, int array[], int *dce, int *status );
void ndf1SqLimitI( int *result );
void ndf1AdiI( hdsdim lbnda, hdsdim ubnda, int adata[], int *status );
void ndf1S2vI( int bad, size_t el, int array[], int *dce, int *status );
void ndf1AdeI( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, int adata[], int *status );
void ndf1QmaI( int el, const unsigned char qual[], unsigned char badbit, int narray,int array1[], int array2[],int array3[], int array4[],int *bad, int *status );
void ndf1AveI( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, int avar[], int *status );
void ndf1AweI( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, int awidth[], int *status );
void ndf1AdiI( hdsdim lbnda, hdsdim ubnda, int adata[], int *status );
void ndf1CvtI( int bad, size_t n, const char *type, void *pntr, int *result, int *dce, int *status );
void ndf1BppW( size_t el, const short int array[], int *bad, int *status );
void ndf1AwiW( hdsdim lbnd, hdsdim ubnd, const double data[], short int width[], int *status );
void ndf1V2sW( int bad, size_t el, short int array[], int *dce, int *status );
void ndf1SqLimitW( short int *result );
void ndf1AdiW( hdsdim lbnda, hdsdim ubnda, short int adata[], int *status );
void ndf1S2vW( int bad, size_t el, short int array[], int *dce, int *status );
void ndf1AdeW( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, short int adata[], int *status );
void ndf1QmaW( int el, const unsigned char qual[], unsigned char badbit, int narray,short int array1[], short int array2[],short int array3[], short int array4[],int *bad, int *status );
void ndf1AveW( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, short int avar[], int *status );
void ndf1AweW( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, short int awidth[], int *status );
void ndf1AdiW( hdsdim lbnda, hdsdim ubnda, short int adata[], int *status );
void ndf1CvtW( int bad, size_t n, const char *type, void *pntr, short int *result, int *dce, int *status );
void ndf1BppUW( size_t el, const unsigned short int array[], int *bad, int *status );
void ndf1AwiUW( hdsdim lbnd, hdsdim ubnd, const double data[], unsigned short int width[], int *status );
void ndf1V2sUW( int bad, size_t el, unsigned short int array[], int *dce, int *status );
void ndf1SqLimitUW( unsigned short int *result );
void ndf1AdiUW( hdsdim lbnda, hdsdim ubnda, unsigned short int adata[], int *status );
void ndf1S2vUW( int bad, size_t el, unsigned short int array[], int *dce, int *status );
void ndf1AdeUW( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, unsigned short int adata[], int *status );
void ndf1QmaUW( int el, const unsigned char qual[], unsigned char badbit, int narray,unsigned short int array1[], unsigned short int array2[],unsigned short int array3[], unsigned short int array4[],int *bad, int *status );
void ndf1AveUW( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, unsigned short int avar[], int *status );
void ndf1AweUW( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, unsigned short int awidth[], int *status );
void ndf1AdiUW( hdsdim lbnda, hdsdim ubnda, unsigned short int adata[], int *status );
void ndf1CvtUW( int bad, size_t n, const char *type, void *pntr, unsigned short int *result, int *dce, int *status );
void ndf1BppB( size_t el, const char array[], int *bad, int *status );
void ndf1AwiB( hdsdim lbnd, hdsdim ubnd, const double data[], char width[], int *status );
void ndf1V2sB( int bad, size_t el, char array[], int *dce, int *status );
void ndf1SqLimitB( char *result );
void ndf1AdiB( hdsdim lbnda, hdsdim ubnda, char adata[], int *status );
void ndf1S2vB( int bad, size_t el, char array[], int *dce, int *status );
void ndf1AdeB( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, char adata[], int *status );
void ndf1QmaB( int el, const unsigned char qual[], unsigned char badbit, int narray,char array1[], char array2[],char array3[], char array4[],int *bad, int *status );
void ndf1AveB( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, char avar[], int *status );
void ndf1AweB( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, char awidth[], int *status );
void ndf1AdiB( hdsdim lbnda, hdsdim ubnda, char adata[], int *status );
void ndf1CvtB( int bad, size_t n, const char *type, void *pntr, char *result, int *dce, int *status );
void ndf1BppUB( size_t el, const unsigned char array[], int *bad, int *status );
void ndf1AwiUB( hdsdim lbnd, hdsdim ubnd, const double data[], unsigned char width[], int *status );
void ndf1V2sUB( int bad, size_t el, unsigned char array[], int *dce, int *status );
void ndf1SqLimitUB( unsigned char *result );
void ndf1AdiUB( hdsdim lbnda, hdsdim ubnda, unsigned char adata[], int *status );
void ndf1S2vUB( int bad, size_t el, unsigned char array[], int *dce, int *status );
void ndf1AdeUB( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, unsigned char adata[], int *status );
void ndf1QmaUB( int el, const unsigned char qual[], unsigned char badbit, int narray,unsigned char array1[], unsigned char array2[],unsigned char array3[], unsigned char array4[],int *bad, int *status );
void ndf1AveUB( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, unsigned char avar[], int *status );
void ndf1AweUB( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, unsigned char awidth[], int *status );
void ndf1AdiUB( hdsdim lbnda, hdsdim ubnda, unsigned char adata[], int *status );
void ndf1CvtUB( int bad, size_t n, const char *type, void *pntr, unsigned char *result, int *dce, int *status );
void ndf1BppK( size_t el, const int64_t array[], int *bad, int *status );
void ndf1AwiK( hdsdim lbnd, hdsdim ubnd, const double data[], int64_t width[], int *status );
void ndf1V2sK( int bad, size_t el, int64_t array[], int *dce, int *status );
void ndf1SqLimitK( int64_t *result );
void ndf1AdiK( hdsdim lbnda, hdsdim ubnda, int64_t adata[], int *status );
void ndf1S2vK( int bad, size_t el, int64_t array[], int *dce, int *status );
void ndf1AdeK( double scale, double zero, int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, int64_t adata[], int *status );
void ndf1QmaK( int el, const unsigned char qual[], unsigned char badbit, int narray,int64_t array1[], int64_t array2[],int64_t array3[], int64_t array4[],int *bad, int *status );
void ndf1AveK( int upper, hdsdim pix0, hdsdim lbnda, hdsdim ubnda, int64_t avar[], int *status );
void ndf1AweK( int upper, hdsdim pix0, double width, hdsdim lbnd, hdsdim ubnd, int64_t awidth[], int *status );
void ndf1AdiK( hdsdim lbnda, hdsdim ubnda, int64_t adata[], int *status );
void ndf1CvtK( int bad, size_t n, const char *type, void *pntr, int64_t *result, int *dce, int *status );