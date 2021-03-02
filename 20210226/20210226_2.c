#include <stdio.h>
typedef long long int ll_testT;

int main(){
    ll_testT num=1234567891011234567;
    printf("%lld\n",num);
    printf("%d\n",sizeof(num));
    typedef ll_testT* t_ptr;
    t_ptr ptrnum=&num;
    printf("%lld\n",*ptrnum);

}