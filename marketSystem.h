#ifndef 	BOOK_MARKET_SYSTEM_H
#define 	BOOK_MARKET_SYSTEM_H

#include 	"book.h"

float 	this_book_price_now(bookPtr bp, int book_id,int book_kinds);
void 	market_system(char* bookData_file_directory);

#endif
