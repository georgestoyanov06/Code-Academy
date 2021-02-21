#include<stdio.h>
#include<string.h>
struct  tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAutor[64];
    char m_szSubject[256];
};

int main() {
    struct tagPaper stPaper;
    stPaper.m_nBookId = 123456;
    strcpy( stPaper.m_szTitle, "Paper title");
    strcpy( stPaper.m_szAutor, "Autor");
    strcpy( stPaper.m_szSubject, "paper subject");
    printf( "Paper id : %d\n", stPaper.m_nBookId);
    printf( "Paper title : %s\n", stPaper.m_szTitle);
    printf( "Paper author : %s\n", stPaper.m_szAutor);
    printf( "Paper subject : %s\n", stPaper.m_szSubject);
    struct tagPaper book10={.m_szTitle="one way",.m_szSubject="sub2",.m_nBookId=1020,.m_szAutor="me"};
    printf( "Paper id : %d\n", book10.m_nBookId);
    printf( "Paper title : %s\n", book10.m_szTitle);
    printf( "Paper author : %s\n", book10.m_szAutor);
    printf( "Paper subject : %s\n", book10.m_szSubject);
    
    return 0;
}