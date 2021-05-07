//createItem() 
int createItem(Item *p){
        printf("날짜: ");
        scanf(" %d", &p -> date);
                
        printf("분류[교통비/문화생활/생활용품/식비/의류]: ");
        scanf(" %s", p -> cate);

        printf("가격: ");
        scanf(" %d", &p -> price);

        printf("내용: ");
        scanf(" %[^\n]s", p -> name);
	
	printf("추가되었습니다:-0\n");
        return 1;
}

//update 함수
int updateItem(Item *p){
        printf("날짜: ");
        scanf(" %d", &p -> date);

        printf("분류[교통비/문화생활/생활용품/식비/의류]: ");
        scanf(" %s", p -> cate);

        printf("가격: ");
        scanf(" %d", &p -> price);

        printf("내용: ");
        scanf(" %[^\n]s", p -> name);

	printf("수정되었습니다:-)\n");
	
	return 1;
}
//delete 함수
int deleteProduct(Item *p){
        p->price = -1;
        return 1;
} 

