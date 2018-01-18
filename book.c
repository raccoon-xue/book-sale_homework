#include <stdio.h>
#include "book.h"


int kinds_of_books(char* bookData_file_directory){

	FILE		*bookDataFILE;
	if((bookDataFILE=fopen(bookData_file_directory,"rb"))==NULL){
		printf("open bookData_file_directory fail!");
		return 0;
	}

	int num_of_book_kinds=0;
	fscanf( bookDataFILE, "kinds_of_books:%d",  &num_of_book_kinds);

	fclose(bookDataFILE);
	
	return	num_of_book_kinds;
}

void read_book_data(char* bookData_file_directory,bookPtr bp, int count){
	FILE		*bookDataFILE;
	if((bookDataFILE=fopen(bookData_file_directory,"rb"))==NULL){
		printf("open bookData_file_directory fail!");
		return;
	}
	int num_of_book_kinds=0;
	fscanf( bookDataFILE, "kinds_of_books:%d",  &num_of_book_kinds);
	int tmp_j,tmp_n,tmp_u;
	for(int i=0;i<count;i++){
		fscanf( bookDataFILE, "%d %f %d %d %d", &bp[i].book_id ,&bp[i].book_price,&bp[i].if_just_published, &bp[i].if_normal ,&bp[i].if_unsalable);

/*test*/
printf( "%d 	%f 	%d 	%d 	%d\n", bp[i].book_id ,bp[i].book_price,bp[i].if_just_published, bp[i].if_normal ,bp[i].if_unsalable);


	}
	
	fclose(bookDataFILE);
	return;
}


