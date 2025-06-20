/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:19:19 by mklevero          #+#    #+#             */
/*   Updated: 2025/06/18 13:49:27 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				num;
	int				pos;
	int				push_price;
	bool			above_mid;
	bool			cheapest;

	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*previous;

}					t_node;

// check_functions
void				check_empty_input(char **av);
void				check_validity(char **av, int i, t_node **a_stack,
						bool splitted);
void				check_duplicate(char **av, t_node **a_stack, long nbr,
						bool splitted);
void				check_sort(t_node **a_stack, t_node **b_stack);
bool				is_sorted(t_node *stack);

// free
void				free_splitted(char **arr);
void				free_stack(t_node **stack);
void				free_and_error(t_node **a_stack, char **av, bool splitted);
void				error_exit(void);

// ft_basic_utils
int					ft_isspace(int c);
int					ft_isdigit(int c);
int					ft_new_ac_count(char **av);
int			ft_atoi_and_overflow(const char *nptr,t_node **a_stack, char **av, bool splitted);

// split
char				**ft_split(char const *s, char c);

// main
int					main(int ac, char **av);

// stack_op
t_node				*ft_stack_last(t_node *stack);
void				ft_add_node(t_node **stack, int nbr, char **av,
						bool splitted);
void				ft_create_stack(int ac, char **av, t_node **a_stack,
						bool splitted);
int					stack_len(t_node *stack);
t_node				*find_big_num(t_node *stack);
t_node				*find_small_num(t_node *stack);

// movement
void				swap_a_stack(t_node **a_stack);
void				swap_b_stack(t_node **b_stack);
void				swap_both(t_node **a_stack, t_node **b_stack);
void				rotate_a_stack(t_node **a_stack);
void				rotate_b_stack(t_node **b_stack);
void				rotate_both(t_node **a_stack, t_node **b_stack);
void				rev_rotate_a_stack(t_node **a_stack);
void				rev_rotate_b_stack(t_node **b_stack);
void				rev_rotate_both(t_node **a_stack, t_node **b_stack);
void				push_a_stack(t_node **a_stack, t_node **b_stack);
void				push_b_stack(t_node **b_stack, t_node **a_stack);

// sorting
void				sort_three(t_node **a_stack);
void				prep_nodes(t_node *a_stack, t_node *b_stack);
void				set_pos(t_node *stack);
void				set_target(t_node *a_stack, t_node *b_stack);
void				turk_sort(t_node **a_stack, t_node **b_stack);

void				prep_nodes(t_node *a_stack, t_node *b_stack);
void				set_pos(t_node *stack);
void				set_target(t_node *a_stack, t_node *b_stack);
void				set_price(t_node *a_stack, t_node *b_stack);
void				set_cheapest(t_node *b_stack);
void				push_back(t_node **a_stack, t_node **b_stack);
void				final_touch(t_node **a_stack, t_node **b_stack,
						t_node *cheapest, t_node *tg_in_a);
t_node				*find_cheapest(t_node *stack);
int					calculate_price(t_node *b_stack, int len_a, int len_b);

#endif
