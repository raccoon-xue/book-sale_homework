#ifndef 	BOOK_H
#define   	BOOK_H
#include <stdio.h>


typedef struct BOOk{
  int 	book_id;
  float book_price;
  
  int 	if_just_published;
  int 	if_normal;
  int 	if_unsalable;
}book,*bookPtr;

int 	kinds_of_books(char* bookData_file_directory);
void 	read_book_data(char* bookData_file_directory,bookPtr bp, int count);

#endif
