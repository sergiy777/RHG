#include "stdafx.h"
#include <iostream>//подрубает cin cout
using namespace std;//устанавливаем пространство имен std что бы не писать std:cin а писать просто cin
int main()//точка входа в прогу
{
int n=0,count =0, summ=0;//n - само считываемое число, count - количество прочитанных чисел, summ - сумма считанных чисел не включая 9999
do{//цикл с постусловием (то есть 1 раз в него мы по любому зайдём)
cin>>n;//читаем с клавиатуры n - наше число
if(n!=9999)//проверяем если n не равно 9999 (так как 9999 это выход и не должно учитываться)
{
summ+=n;//суммируем наше число со всеми предыдущими (summ= summ+n;)
count++;//считаем количество считанных чисел
}
}while(n!=9999);//тут проверяем завершать цикл или нет, если 9999 то выходим из цикла иначе повторяем все снова
cout<<(double)n/(double)count; //тут по формуле среднего арифметического сумму делим на количество. Но так как у нас все числа целые то деление целого на целое даёт целое что не есть хорошо, для этого преобразуем неявно числа из целых в представление с плавающей запятой double
system("pause");//вызываем системную команду пауза
return 0;
}
