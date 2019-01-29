/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_buf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 23:28:47 by wahasni           #+#    #+#             */
/*   Updated: 2019/01/29 17:43:48 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Foncton qui initialise le buffer
void	ft_bufset(char *buffer)
{
	int i;

	i = 0;
	while (i < BUF_SIZE)
	{
		buffer[i] = '\0';
		i++;
	}
}

//Fonction qui affiche le buffer
void	ft_display_buf(char *buff)
{
	ft_putstr(buff);
	ft_bzero(str, BUF_SIZE); // Vider buffer
}

//Fonction qui fais afficher le buffer si le buffer est plein
void	ft_buf_full(char *buffer)
{
	//incrementation
	if (taille actuel == BUF_SIZE)
		ft_display_buf();
}

//Fonction qui mets dans le buffer
void	ft_concat_buf(char *str)
{
	// strcat buffer et la chaine et on incremente un int a chque fois qui pourrait etre defini en macro
	int i;

	i = 0;
	while (*str)
	{
		if (i == BUF_SIZE)
			ft_display_buf();
		

}
