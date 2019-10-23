#include<stdio.h>

void user_function_1()
 {
 printf("Pirmā funkcija..............- OK\n");
 }

void user_function_2();

void user_function_3();

void main()
 {
 printf("Funkciju rakstīšana : \n");
 user_function_1();
 user_function_2();
 user_function_3();
 }

void user_function_2()
 {
 printf("Otrā funkcija..............- OK\n");
 }

void user_function_3()
 {
 printf("Ieprekšējas funkcijas atkārtošana : \n");
 user_function_1();
 user_function_2();
 }
