/**
* \file taxes.h
* \author Чихичин Cтанислав Сергеевич
* \version 1.0
* \date 10.01.2022
* \brief Файл h, который отвечает за объявление структуры и переменных для хранения информации
* из файла taxes.txt.
* \details Данный файл содержит структуру resource, в которой содержится
* информация о наименовании каждого ресурса, месячном тарифе за данный ресурс
* и зарезервированном значении k. Также файл содержит объявление глобальной переменной Q,
* которая содержит информацию о количестве ресурсов.
*/

#pragma once

/**
* \brief Объявление структуры для хранения данных из файла taxes.txt.
* \details Структура содержит инфомацию о наименовании каждого ресурса, 
* месячном тарифе за его использование, зарезервированном значении k, а
* также id каждого ресурса.
*/
struct resource
{
	char res[15];
	int idres;
	int tarif, k;
};

/**
* \brief Объявление глобальной переменной, отвечающей за 1 из значений из файла taxes.txt.
* \details Переменная содержит инфомацию о количестве ресурсов.
*/
extern int Q;
extern struct resource* res1;

int numberResourceInput();
resource* resourceInput();
