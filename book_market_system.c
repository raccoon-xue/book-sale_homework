#include <stdio.h>
#include "book.h"
#include "marketSystem.h"

float this_book_price_now(bookPtr bp, int book_id,int book_kinds){
/*默认数据库中书的id已经升序排列*/
	int count=0;
	while((count<book_kinds)&&(book_id!=bp[count].book_id)){
		count++;
	}

	float discount_rate=0;

	if(count==book_kinds) {printf("error! the book book_id=%d is not found in system ,",book_id);

							return 0;
							}
	else if(bp[count].if_just_published=1) discount_rate=1.2;
	else if(bp[count].if_normal=1) discount_rate=1.0;
	else if(bp[count].if_unsalable=1) discount_rate=0.6;

	printf("book_id=%d		x1	原价：%f		折扣：%f		现价：%f",book_id,bp[count].book_price,discout_rate,bp[count].book_price*discout_rate);

	return bp[count].book_price*discout_rate;
}
void market_system(void){

	int num_of_book_kinds	=kinds_of_books( bookData_file_directory );
	bookPtr bp=(book*)malloc(	sizeof(book)	*	num_of_book_kinds	);
	read_book_data(	bookData_file_directory  ,	bp	, num_of_book_kinds	);

	int book_id=0;
	int count=0;
	float total_prices=0;

	printf("please input the book id,end with the integer number 0, just like 189 192 ... 0:");

	while(scanf("%d",&book_id)!=EOF){
		if(book_id=0){

			if(count!=0)printf("count:%d		total prices:%f\n",&count,&total_prices);
			total_prices=0;
			count=0;

			printf("please input the book id,end with the integer number 0, just like 189 192 ... 0:");

			
		}
		else {
			total_prices+=this_book_price_now(bp,  book_id, num_of_book_kinds);
			count++;
		}
		
	}
	return;
}
