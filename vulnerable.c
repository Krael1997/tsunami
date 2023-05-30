/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vulnerable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:50:12 by abelrodr          #+#    #+#             */
/*   Updated: 2023/05/12 18:51:20 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char buffer[64];

    if (argc < 2)
    {
        printf("Introduce one argument\n");
        return (0);
    }
    strcpy(buffer, argv[1]);
    return (0);
}
