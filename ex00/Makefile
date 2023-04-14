# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 17:30:50 by plau              #+#    #+#              #
#    Updated: 2023/04/13 20:56:30 by plau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= 	brainz
CXX				= 	c++
RM				= 	rm -rf
MKDIR			= 	mkdir -p
CXXFLAGS		= 	-Wall -Wextra -Werror -std=c++98 -pedantic
SRCS_FILES		= 	main \
			 	 	Zombie \
			  		newZombie \
			  		randomChump
SRCS			= 	$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRCS_FILES)))
OBJS			= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))
SRCS_DIR		= 	srcs/
OBJS_DIR		= 	objs/

all:
			  		$(MKDIR) $(OBJS_DIR)
			  		make $(NAME)

$(OBJS_DIR)%.o: 	$(SRCS_DIR)%.cpp
					$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):			$(OBJS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)	

clean:
					$(RM) $(OBJS_DIR)

fclean: 			clean
					$(RM) $(NAME)

re: 				fclean all

.PHONY:				all clean fclean re