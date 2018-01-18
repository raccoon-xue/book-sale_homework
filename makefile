
CC          = gcc

EXECNAME	= bookMarketSystem

OBJECTS     =main.o book.o market_System.o   

#Exec file 
##########################################
${EXECNAME}: ${OBJECTS}
	${CC} -o ${EXECNAME} ${OBJECTS} 
	
#
 
#Object file
##########################################

main.o:main.c 
	${CC} -c $<  -o $@ 
book.o:book.c 
	${CC} -c $<  -o $@ 
market_System.o:marketSystem.c
	${CC} -c $<  -o $@ 



#Clean files
##########################################
clean:
	rm *.o\
	&& rm ${EXECNAME}
#

#Exe 
#########################################
exe:
	./${EXECNAME}
