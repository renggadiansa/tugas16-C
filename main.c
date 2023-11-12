#include <stdio.h>

int r, q = 7;
int go_crazy(int *pInt, int *pInt1);

int main() {

    int *ptr1 = &q;
    int *ptr2 = &q;
    r = go_crazy(ptr1, ptr2);
    printf("q=%d, r=%d, *ptr1=%d,*ptr2=%d\n",q,r,*ptr1,*ptr2);
    ptr2 = &r;
    go_crazy(ptr2, ptr1);
    printf("q=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2);

    printf("Alamat prt1 =%p\n", &ptr1);
    printf("Alamat ptr2 =%p\n", &ptr2);

    return 0;
}

int go_crazy(int *p1, int *p2){
    int x = 5;
    r = 12;
    *p2 = *p1 * 2;
    p1 = &x;
    printf("Alamat x =%p\n", &x);
    printf("Alamat r =%p\n", &r);
    printf("Alamat q =%p\n\n", &q);
    return *p1 * 3;
}


