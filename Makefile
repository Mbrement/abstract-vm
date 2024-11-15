SRCS	=	main.cpp\
			VM.cpp\
			int8.cpp\
				

DIR_SRCS = src/

DIR_HEAD = header/

DIR_OBJS = .objs/

OBJS	=	${SRCS:%.cpp=${DIR_OBJS}%.o}

CC++	=	c++

MKDIR	=	mkdir -p

HEADERS	=	VM.hpp\
			IOperand.hpp\
			int8.hpp\
			

NAME	=	abstractVM


C++FLAGS	= -Wall -Wextra -Werror -g3
 
all :		${NAME}

clean :		
			rm -rf ${DIR_OBJS}

fclean :	clean
			rm -rf ${NAME}

re :		fclean
			$(MAKE) all


${DIR_OBJS}%.o:		${DIR_SRCS}%.cpp    ${addprefix ${DIR_HEAD}, ${HEADERS}} | ${DIR_OBJS}
					${CC++} ${C++FLAGS} -I ${DIR_HEAD} -c $< -o $@

${DIR_OBJS}			:
					${MKDIR} ${DIR_OBJS}

${NAME}	:	${OBJS}
			${CC++} ${C++FLAGS} -o ${NAME} ${OBJS}


.PHONY:		all clean fclean re