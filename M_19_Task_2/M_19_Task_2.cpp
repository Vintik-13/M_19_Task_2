/*Задание 2. Разработка просмотрщика текстовых файлов

Что нужно сделать
Разработайте простейший просмотрщик текстовых файлов. В начале программы
пользователь вводит путь к текстовому файлу, который требуется открыть и
просмотреть. Внутренности файла необходимо вывести в стандартный вывод.
Программа должна работать для любых текстовых файлов в формате TXT, но
вы можете создать и свой отдельный файл для теста. Главное, чтобы файл
был англоязычным, дабы избежать проблем с кодировками.*/

#include <iostream>
#include <fstream>

int main()
{
    const char* path = "D:\\Skillbox\\Module_19\\file.txt";    

    std::ifstream ifs(path, std::ios::binary);    

    char bufer[100]; //Считываем по 100 bytes и из бинарного файла

    if (!ifs.is_open()) {

        std::cout << "File not found";
    }
    else {

        while (!ifs.eof()) {

            ifs.read(bufer, sizeof(bufer));

            for (int i = 0; i < ifs.gcount(); i++) {

                std::cout << *(bufer + i);
            }             
        }
        std::cout << std::endl;
        std::cout << std::endl;        
    }
}

