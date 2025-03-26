# OOP
Repository with OOP materials and projects by "Programming Base" (2nd term)

Принципы работы контейнера std::vector из библиотеки  <vector>
Представление в памяти. ... . У вектора есть метод .size(), это количество реальных объектов; и .capacity(), это количество объектов, под которые зарезервирована память. …
 ![image](https://github.com/user-attachments/assets/f3acf217-c81e-447d-bb05-39fe9e3dc4ed)

Вставка. 
При добавлении элемента он копируется в выделенную память, увеличивает количество элементов и меняет их адреса.
Удаление.
Удаленный объект уничтожается, все элементы сдвигаются.
Сравнение с TVector. …
-При удалении не элементы не смещаются.
-При переполнении память всегда создается с фиксированным запасом.
-Присутствует вставка в центр.
-Наличие перемешивания.
-Наличие сортировки.
 ![image](https://github.com/user-attachments/assets/a2efc2e4-0959-4780-9061-bd88eb615b63)

Приложение А: проведение эксперимента
#include <iostream>
#include <vector>

void print_vector_info(std::vector<int> vec) {
    std::cout << vec.size() << " ";
    int cap = vec.capacity();
    std::cout << cap << std::endl;
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << "(" << &vec[i] << ") ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec(0);

    for (int i = 0; i < 20; i++) {
        vec.push_back(1 * (i + 1));
    }
    print_vector_info(vec);
    for (int i = 0; i < 2; i++) { vec.push_back(111 * (i + 1)); }
    print_vector_info(vec);
    vec.erase(vec.begin() + 4);
    print_vector_info(vec);
    system("pause");
    return 0;
}
![image](https://github.com/user-attachments/assets/15b2bd34-d85a-4215-b7b7-20b45045681f)

 
