#include <stdio.h>
#include <stdlib.h>
int selectMenu(){
        int menu;
        printf("\n*** HOUSE KEEPER BOOK ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("5. 파일저장\n");
        printf("6. 이름검색\n");
        printf("7. 분류검색\n");
        printf("8. 가격검색\n");
        printf("0. 종료\n\n");
        printf("=> 원하는 번호를 입력하세요: ");
        scanf(" %d", &menu);

        return menu;
}