#include <stdio.h>

/*union tagTest{
    int m_iNum;
    float m_fRate;
   /* union  tagUTest * puninNext;
   
};

int main(){
union  tagTest U;

printf("%d",sizeof(U));

}*/
#pragma pack(1)
union tagMyData {
    int m_nValue;
    float m_fValue;
    char m_szText[25];
}/*__attribute((packed))*/;

int main(){
    union tagMyData data;
    
    data.m_fValue=5.5;
   
    printf("size of data :%d\n",sizeof(data));
    printf("nValue:%d,fValue:%f,Text:%s\n",data.m_nValue, data.m_fValue,data.m_szText);
}