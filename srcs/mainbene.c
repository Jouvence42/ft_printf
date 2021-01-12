/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <bkany@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:37:07 by bkany             #+#    #+#             */
/*   Updated: 2021/01/05 17:56:25 by sothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libftprintf.h"
#include <stdio.h>

/*int main(void)
{
	//int	chiffre = -2147483648;
	int chiffre = 0;
	int chiffre1 = -12;
	
	printf("1abcblabla%.dhehe\n", chiffre);
	ft_printf("1abcblabla%.dhehe\n", chiffre);
	printf("1abcblabla%.dhehe\n", chiffre1);
	ft_printf("1abcblabla%.dhehe\n", chiffre1);
	printf("\n");
	
	printf("2abcblabla%.5dhehe\n", chiffre);    
	ft_printf("2abcblabla%.5dhehe\n", chiffre);
	printf("2abcblabla%.5dhehe\n", chiffre1);
	ft_printf("2abcblabla%.5dhehe\n", chiffre1);
	printf("\n");
	
	printf("3abcblabla%+.5dhehe\n", chiffre);  
	ft_printf("3abcblabla%+.5dhehe\n", chiffre);
	printf("3abcblabla%+.5dhehe\n", chiffre1);  
	ft_printf("3abcblabla%+.5dhehe\n", chiffre1);
	printf("\n");
	
	printf("4abcblabla%5dhehe\n", chiffre);
	ft_printf("4abcblabla%5dhehe\n", chiffre);
	printf("4abcblabla%5dhehe\n", chiffre1);
	ft_printf("4abcblabla%5dhehe\n", chiffre1);
	printf("\n");
	
	printf("5abcblabla%+5dhehe\n", chiffre);     
	ft_printf("5abcblabla%+5dhehe\n", chiffre);
	printf("5abcblabla%+5dhehe\n", chiffre1);     
	ft_printf("5abcblabla%+5dhehe\n", chiffre1);
	printf("\n");
	
	printf("6abcblabla%-5dhehe\n", chiffre);
	ft_printf("6abcblabla%-5dhehe\n", chiffre);
	printf("6abcblabla%-5dhehe\n", chiffre1);
	ft_printf("6abcblabla%-5dhehe\n", chiffre1);	
	printf("\n");
	
	printf("7abcblabla% dhehe\n", chiffre);
	ft_printf("7abcblabla% dhehe\n", chiffre);
	printf("7abcblabla% dhehe\n", chiffre1);
	ft_printf("7abcblabla% dhehe\n", chiffre1);
	printf("\n");
	
	printf("8abcblabla% 5dhehe\n", chiffre);
	ft_printf("8abcblabla% 5dhehe\n", chiffre);
	printf("8abcblabla% 5dhehe\n", chiffre1);
	ft_printf("8abcblabla% 5dhehe\n", chiffre1);
	printf("\n");
	
	printf("9abcblabla%+5.8dhehe\n", chiffre);  
	ft_printf("9abcblabla%+5.8dhehe\n", chiffre);
	printf("9abcblabla%+5.8dhehe\n", chiffre1);  
	ft_printf("9abcblabla%+5.8dhehe\n", chiffre1);
	printf("\n");
	
	printf("10abcblabla%05dhehe\n", chiffre);  
	ft_printf("10abcblabla%05dhehe\n", chiffre);	
	printf("10abcblabla%05dhehe\n", chiffre1);  
	ft_printf("10abcblabla%05dhehe\n", chiffre1);	
	printf("\n");
	
	printf("11abcblabla%+05dhehe\n", chiffre);   
	ft_printf("11abcblabla%+05dhehe\n", chiffre);
	printf("11abcblabla%+05dhehe\n", chiffre1);   
	ft_printf("11abcblabla%+05dhehe\n", chiffre1);	
	printf("\n");
	
	printf("12abcblabla% 5.8dhehe\n", chiffre);  
	ft_printf("12abcblabla% 5.8dhehe\n", chiffre);	
	printf("12abcblabla% 5.8dhehe\n", chiffre1);  
	ft_printf("12abcblabla% 5.8dhehe\n", chiffre1);	
	printf("\n");
	
	printf("13abcblabla%-15.8dhehe\n", chiffre);  
	ft_printf("13abcblabla%-15.8dhehe\n", chiffre);
	printf("13abcblabla%-15.8dhehe\n", chiffre1); 
	ft_printf("13abcblabla%-15.8dhehe\n", chiffre1);	
	printf("\n");
	
	printf("14abcblabla%+15.8dhehe\n", chiffre);   
	ft_printf("14abcblabla%+15.8dhehe\n", chiffre);
	printf("14abcblabla%+15.8dhehe\n", chiffre1);   
	ft_printf("14abcblabla%+15.8dhehe\n", chiffre1);	
	printf("\n");
	
	printf("15abcblabla%+-15.8dhehe\n", chiffre);
	ft_printf("15abcblabla%+-15.8dhehe\n", chiffre);  
	printf("15abcblabla%+-15.8dhehe\n", chiffre1);
	ft_printf("15abcblabla%+-15.8dhehe\n", chiffre1);  
	printf("\n");
	
	printf("16abcblabla%15.8dhehe\n", chiffre);  
	ft_printf("16abcblabla%15.8dhehe\n", chiffre);
	printf("16abcblabla%15.8dhehe\n", chiffre1);  
	ft_printf("16abcblabla%15.8dhehe\n", chiffre1);	
	printf("\n");
	
	printf("17abcblabla%+15.*dhehe\n", 8, chiffre);   
	ft_printf("17abcblabla%+15.*dhehe\n", 8, chiffre);
	printf("17abcblabla%+15.*dhehe\n", 8, chiffre1);   
	ft_printf("17abcblabla%+15.*dhehe\n", 8, chiffre1);	
	printf("\n");
	
	return (0);
}

*/
// TEST ENTIER D

int main(void)
{
//	char var = 'z';
	int	chiffre = 42;
	int chiffre1 = -42;
	
	printf("1abcblabla%.dhehe\n", chiffre);
	ft_printf("1abcblabla%.dhehe\n", chiffre);
//	printf("1abcblabla%.dhehe\n", chiffre1);
//	ft_printf("1abcblabla%.dhehe\n", chiffre1);
	printf("\n");
	
	printf("2abcblabla%.24dhehe\n", chiffre);    
	ft_printf("2abcblabla%.24dhehe\n", chiffre);
//	printf("2abcblabla%.5dhehe\n", chiffre1);
//	ft_printf("2abcblabla%.5dhehe\n", chiffre1);
	printf("\n");
	
	printf("3abcblabla%dhehe\n", chiffre);
	ft_printf("3abcblabla%dhehe\n", chiffre);
//	printf("3abcblabla%dhehe\n", chiffre1);
//	ft_printf("3abcblabla%dhehe\n", chiffre1);
	printf("\n");
	
	printf("4abcblabla%5dhehe\n", chiffre);
	ft_printf("4abcblabla%5dhehe\n", chiffre);
//	printf("4abcblabla%5dhehe\n", chiffre1);
//	ft_printf("4abcblabla%5dhehe\n", chiffre1);
	printf("\n");
	
	printf("6abcblabla%-5dhehe\n", chiffre);
	ft_printf("6abcblabla%-5dhehe\n", chiffre);
//	printf("6abcblabla%-5dhehe\n", chiffre1);
//	ft_printf("6abcblabla%-5dhehe\n", chiffre1);	
	printf("\n");
	/*
	ft_printf("10abcblabla%05dhehe\n", chiffre1);	
	printf("10abcblabla%05dhehe\n", chiffre); 
	printf("\n"); 
	printf("10abcblabla%05dhehe\n", chiffre1);  
	printf("\n");
	
	printf("13abcblabla%-15.8dhehe\n", chiffre);  
	ft_printf("13abcblabla%-15.8dhehe\n", chiffre);
	printf("13abcblabla%-15.8dhehe\n", chiffre1); 
	ft_printf("13abcblabla%-15.8dhehe\n", chiffre1);	
	printf("\n");
	
	
	printf("16abcblabla%15.8dhehe\n", chiffre);  
	ft_printf("16abcblabla%15.8dhehe\n", chiffre);
	printf("16abcblabla%15.8dhehe\n", chiffre1);  
	ft_printf("16abcblabla%15.8dhehe\n", chiffre1);	
	printf("\n");
	
	printf("17abcblabla%15.*dhehe\n", 8, chiffre);   
	ft_printf("17abcblabla%+15.*dhehe\n", 8, chiffre);
	printf("17abcblabla%15.*dhehe\n", 8, chiffre1);   
	ft_printf("17abcblabla%+15.*dhehe\n", 8, chiffre1);	
	printf("\n");
	*/
	
	return (0);
}

/*

// TEST CHAR C
int main(void)
{
//	char var = 'z';
	char	chiffre = 'T'; 

//	printf("1abcblabla%.chehe\n", chiffre); // PAS D'EFFET ON AFFICHE C NORMALEMENT // LE POINT N'A PAS D'EFFET
//	ft_printf("1abcblabla%.chehe\n", chiffre);
//	printf("\n");
//	printf("2abcblabla%.5chehe\n", chiffre); // PAS D'EFFET ON AFFICHE C NORMALEMENT // LE POINT N'A PAS D'EFFET
//	ft_printf("2abcblabla%.5chehe\n", chiffre);
//	printf("\n");
//	printf("3abcblabla%+.5chehe\n", chiffre); // PAS D'EFFET ON AFFICHE C NORMALEMENT // LE PLUS N'A PAS D'EFFET
//	ft_printf("3abcblabla%+.5chehe\n", chiffre);
//	printf("\n");	
	printf("4abcblabla%5chehe\n", chiffre); // ON MET 5 - 1 ESPACES DEVANT
	ft_printf("4abcblabla%5chehe\n", chiffre);
	printf("\n");
//	printf("5abcblabla%+5chehe\n", chiffre); // ON MET 5 - 1 ESPACES DEVANT // LE PLUS N'A PAS D'EFFET
//	ft_printf("5abcblabla%+5chehe\n", chiffre);
//	printf("\n");	
	printf("6abcblabla%-5chehe\n", chiffre); // ON MET 5 - 1 ESPACES DERRIERE 
	ft_printf("6abcblabla%-5chehe\n", chiffre);
	printf("\n");	
//	printf("7abcblabla% chehe\n", chiffre); // PAS D'EFFET ON AFFICHE C NORMALEMENT // L'ESPACE N'A PAS D'EFFET
//	ft_printf("7abcblabla% chehe\n", chiffre);
//	printf("\n");
//	printf("8abcblabla% 5chehe\n", chiffre); // ON MET 5 - 1 ESPACES DEVANT 
//	ft_printf("8abcblabla% 5chehe\n", chiffre);
//	printf("\n");
//	printf("9abcblabla% 5.8chehe\n", chiffre); // ON MET 5 - 1 ESPACES DEVANT  // LE POINT N'A PAS D'EFFET
//	ft_printf("9abcblabla% 5.8chehe\n", chiffre);
//	printf("\n");
//	printf("10abcblabla%05chehe\n", chiffre);  // ON MET 5 - 1 ESPACES DEVANT  // LE ZERO N'A PAS D'EFFET
//	ft_printf("10abcblabla%05chehe\n", chiffre);	
//	printf("\n");
//	printf("11abcblabla%+05chehe\n", chiffre);  // ON MET 5 - 1 ESPACES DEVANT  // LE ZERO ET LE PLUS N'ONT PAS D'EFFET
//	ft_printf("11abcblabla%+05chehe\n", chiffre);
//	printf("\n");	
//	printf("12abcblabla% 5.8chehe\n", chiffre);  
//	ft_printf("12abcblabla% 5.8chehe\n", chiffre);	
//	printf("\n");
//	printf("13abcblabla%-15.8chehe\n", chiffre);  
//	ft_printf("13abcblabla%-15.8chehe\n", chiffre);
//	printf("\n");	
//	printf("14abcblabla%+15.8chehe\n", chiffre);   
//	ft_printf("14abcblabla%+15.8chehe\n", chiffre);	
//	printf("\n");
//	printf("15abcblabla%+-15.8chehe\n", chiffre);
//	ft_printf("15abcblabla%+-15.8chehe\n", chiffre); 
//	printf("\n");
//	printf("16abcblabla%15.8chehe\n", chiffre);  
//	ft_printf("16abcblabla%15.8chehe\n", chiffre);
//	printf("\n");
//	printf("17abcblabla%+15.*chehe\n", 8, chiffre);   
//	ft_printf("17abcblabla%+15.*chehe\n", 8, chiffre);
//	printf("\n");
	
	return (0);
}




// TEST CHAR *S

int main(void)
{
//	char var = 'z';
	char *chiffre = "ZZZ"; 
	
	printf("1abcblabla%.shehe\n", chiffre);  // PAS D'EFFET ON AFFICHE C NORMALEMENT // LE POINT N'A PAS D'EFFET
	ft_printf("1abcblabla%.shehe\n", chiffre);
	
	printf("2abcblabla%.5shehe\n", chiffre);  // PAS D'EFFET ON AFFICHE C NORMALEMENT // LE POINT N'A PAS D'EFFET
	ft_printf("2abcblabla%.5shehe\n", chiffre);
	
//	printf("3abcblabla%+.5shehe\n", chiffre);  // PAS D'EFFET ON AFFICHE C NORMALEMENT // LE POINT N'A PAS D'EFFET
//	ft_printf("3abcblabla%+.5shehe\n", chiffre);
	
	printf("4abcblabla%5shehe\n", chiffre);  // ON MET 5 - 2 ESPACES DEVANT
	ft_printf("4abcblabla%5shehe\n", chiffre);

//	printf("5abcblabla%+5shehe\n", chiffre);  // ON MET 5 - 2 ESPACES DEVANT // LE PLUS N'A PAS D'EFFET
//	ft_printf("5abcblabla%+5shehe\n", chiffre);
	
	printf("6abcblabla%-5shehe\n", chiffre);  // ON MET 5 - 2 ESPACES DERRIERE
	ft_printf("6abcblabla%-5shehe\n", chiffre);
	
//	printf("7abcblabla% shehe\n", chiffre);  // PAS D'EFFET ON AFFICHE C NORMALEMENT // L'ESPACE N'A PAS D'EFFET
//	ft_printf("7abcblabla% shehe\n", chiffre);

//	printf("8abcblabla% 5shehe\n", chiffre); // ON MET 5 - 2 ESPACES DEVANT 
//	ft_printf("8abcblabla% 5shehe\n", chiffre);

//	printf("9abcblabla% 5.8shehe\n", chiffre); // ON MET 5 - 2 ESPACES DEVANT  // LE POINT N'A PAS D'EFFET
//	ft_printf("9abcblabla% 5.8shehe\n", chiffre);

//	printf("10abcblabla%05shehe\n", chiffre); // ON MET 5 - 2 ESPACES DEVANT  // LE ZERO N'A PAS D'EFFET
//	ft_printf("10abcblabla%05shehe\n", chiffre);	

//	printf("11abcblabla%+05shehe\n", chiffre);  // ON MET 5 - 2 ESPACES DEVANT  // LE ZERO ET LE PLUS N'ONT PAS D'EFFET
//	ft_printf("11abcblabla%+05shehe\n", chiffre);
	
	printf("12abcblabla%4shehe\n", chiffre);  
	ft_printf("12abcblabla%4shehe\n", chiffre);
	
	return (0);
}

// TEST ENTIER X // PAS DE SIGNE + NI D'ESPACE

int main(void)
{
//	char var = 'z';
	int	chiffre = 42;
	int chiffre1 = -42;
	
	printf("1abcblabla%.xhehe\n", chiffre);
	ft_printf("1abcblabla%.xhehe\n", chiffre);
	printf("1abcblabla%.xhehe\n", chiffre1);
	ft_printf("1abcblabla%.xhehe\n", chiffre1);
	printf("\n");
	
	printf("2abcblabla%.5xhehe\n", chiffre);    
	ft_printf("2abcblabla%.5xhehe\n", chiffre);
	printf("2abcblabla%.5xhehe\n", chiffre1);
	ft_printf("2abcblabla%.5xhehe\n", chiffre1);
	printf("\n");
	
	printf("4abcblabla%5xhehe\n", chiffre);
	ft_printf("4abcblabla%5xhehe\n", chiffre);
	printf("4abcblabla%5xhehe\n", chiffre1);
	ft_printf("4abcblabla%5xhehe\n", chiffre1);
	printf("\n");
	
	printf("6abcblabla%-5xhehe\n", chiffre);
	ft_printf("6abcblabla%-5xhehe\n", chiffre);
	printf("6abcblabla%-5xhehe\n", chiffre1);
	ft_printf("6abcblabla%-5xhehe\n", chiffre1);	
	printf("\n");
	
	printf("10abcblabla%05xhehe\n", chiffre);  
	ft_printf("10abcblabla%05xhehe\n", chiffre);	
	printf("10abcblabla%05xhehe\n", chiffre1);  
	ft_printf("10abcblabla%05xhehe\n", chiffre1);	
	printf("\n");
	
	printf("13abcblabla%-15.8xhehe\n", chiffre);  
	ft_printf("13abcblabla%-15.8xhehe\n", chiffre);
	printf("13abcblabla%-15.8xhehe\n", chiffre1); 
	ft_printf("13abcblabla%-15.8xhehe\n", chiffre1);	
	printf("\n");
	
	printf("16abcblabla%15.8xhehe\n", chiffre);  
	ft_printf("16abcblabla%15.8xhehe\n", chiffre);
	printf("16abcblabla%15.8xhehe\n", chiffre1);  
	ft_printf("16abcblabla%15.8xhehe\n", chiffre1);	
	printf("\n");
	
	return (0);
}



// PERCENT 

int main(void)
{
	printf("1abcblabla%%hehe\n");
	ft_printf("1abcblabla%%hehe\n");
	printf("\n");

	printf("1abcblabla%5%hehe\n");
	ft_printf("1abcblabla%5%hehe\n");
	printf("\n");

	printf("1abcblabla%012%hehe\n");
	ft_printf("1abcblabla%012%hehe\n");
	printf("\n");

	printf("1abcblabla%-12%hehe\n");
	ft_printf("1abcblabla%-12%hehe\n");
	printf("\n");

	return (0);

}
*/
