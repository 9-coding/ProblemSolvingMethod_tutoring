#include <stdio.h>
struct Score {
    int kor; //국어성적
    int mat; //수학성적
    int eng; //영어성적
    struct Score *link1; //자기참조 구조체 선언
    struct sub_Score *link2; //외부참조 구조체 선언
};

struct sub_Score {
    int soc; //사회성적
    int sci; //과학성적
};


int main()
{
    struct Score s1 = { 100,100,100,NULL,NULL};
    struct Score s2 = { 50,50,50,NULL,NULL };
    struct Score s3 = { 0,0,0,NULL,NULL };

    s1.link1 = &s2; //s1 -> s2 자기 참조
    s2.link1 = &s3; //s2 -> s3 자기 참조

    printf("국어 : %d 수학 : %d 영어 : %d \n", s1.kor, s1.mat, s1.eng);
    printf("국어 : %d 수학 : %d 영어 : %d \n", s1.link1->kor, s1.link1->mat, s1.link1->eng);
    printf("국어 : %d 수학 : %d 영어 : %d \n", s1.link1->link1->kor, s1.link1->link1->mat, s1.link1->link1->eng);
    
    struct sub_Score sub1 = { 100,100 };
    struct sub_Score sub2 = { 50,50 };
    struct sub_Score sub3 = { 0,0 };

    s1.link2 = &sub1; //s1 -> sub2 외부 참조
    s2.link2 = &sub2; //s2 -> sub3 외부 참조
    s3.link2 = &sub3; //s2 -> sub3 외부 참조

    printf("사회 : %d 과학 : %d \n", s1.link2->soc, s1.link2->sci);
    printf("사회 : %d 과학 : %d \n", s2.link2->soc, s2.link2->sci);
    printf("사회 : %d 과학 : %d \n", s3.link2->soc, s3.link2->sci);

    return 0;
}