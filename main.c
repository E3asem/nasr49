
int main () {

   char *p = {"eman"};
       char a[] = {"eman"};

    printf(" a=%d  p=%d\n", sizeof(a), sizeof(p) );
    printf(" a=%p  p=%p\n", a, p );
    printf(" a=%p  p=%p\n", &a, &p );


   return 0;
}
//version1