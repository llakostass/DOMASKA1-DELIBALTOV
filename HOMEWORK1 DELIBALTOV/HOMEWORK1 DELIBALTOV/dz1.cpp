﻿//Напишите программу-кулькулятор комплексных чисел. Для реализации необходимо разработать абстрактный тип данных комплексное число. Программа должна реализовывать арифметические операции над комплексными числами. Программа должна быть представлена в виде многофайлового проекта, все прототипы функций, объялвения структур должны быть внесены в заголовочный файл с соотвестсвующим названием. Всего должно быть три файла:1 домашка, y.txt,Complex.ccp.
#include "Complex.h"
int main()
{
	//1 часть
	setlocale(0, "");
	Complexnoechislo   a{ 9,5 }, b{ 35, -3 };
	a.pervonachalnui_vuvod(b);//вывод в алгебраической форме комплексных чисел
	a.summa(b);//функция суммы комплексных чисел
	a.vuchitanie(b);//функция вычитания комплексных чисел
	a.umnojenie(b);//умножение комплексных чисел
	a.delenie(b);//деление комплексных чисел
	a.modul(b);//вычисление модуля комплексных чисел
	cout << "------------------------------------------------------------" << endl;
	//2 часть
	//Наоснове разработанного в предыдущем задании типа данных комплексное число написать программу,к которая считывает информацию из файла y.txt- количество комплексных чисел в переменную m, а сами комплексные числа в массив P. Затем происходит посик комплексного числа с максимальным модулем в массиве p
	chtenie("C:\\Users\\user\\Desktop\\ооп\\1 домашка\\1 домашка\\y.txt");//чтение из файла и анализ информации
}