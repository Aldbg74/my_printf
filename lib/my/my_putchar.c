/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** my_putchar.c
*/
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
