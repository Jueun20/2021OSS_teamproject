typedef struct{
    char name[50]; //제품명
    char cate[50]; //소비 분류
    int price; //소비 제품 가격
    int data; //소비 날짜
} Item;

int createItem(Item *p); //2. 제품 추가하기_C
void readItem(Item p); //제품 한줄 출력하기_R
int updateItem(Item *p); //3. 제품 수정하기_U
int deleteItem(Item *p); //4. 제품 삭제하기_D

int selectMenu();
int loadData(Item *p); //데이터 불러오기
void listItem(Item *p, int count); //1. 제품 list 조회하기_R
int selectDataNum(Item *p, int count); //번호 고르기
void saveData(Item *p, int count); //5. 제품 파일에 저장하기

void searchName(Item *p, int count); //6. 제품 검색하기_이름
void searchCate(Item *p, int count); //7. 제품 검색하기_분류
void searchData(Item *p, int count); //8. 제품 검색하기_날짜
