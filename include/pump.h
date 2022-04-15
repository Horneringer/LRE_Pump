#ifndef PUMP_H
#define PUMP_H

#include<QDebug>
#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<fstream>
#include<sstream>
#include<iterator>

//NOTE: работает только с типами данных std/STL (не Qt), далее возможно преобразование
#include "import/struct_mapping/struct_mapping.h"

//алиас для пространства имён библиотеки struct_mapping
namespace sm = struct_mapping;

using namespace std;

struct InputPumpParams
{
    //название компонента
    string component;

    //массовый расход (кг/с)
    double mass_flow;

    //давление на выходе из насоса (бар)
    double outlet_pressure_pump;

    //давление на входе в насос (бар)
    double inlet_pressure_pump;

    //давление насыщенного пара (бар)
    double steam_pressure;

    //температура рабочего тела на входе в насос (К)
    double fluid_temperature_pump;

    //плотность рабочей жидкости насоса (кг/м^3)
    double density_pump;

    //вязкость рабочей жидкости насоса (Па*с)
    double viscosity_pump;

};

struct InpMap{

    InputPumpParams inp;
};

class Pump
{

private:


public:

    //конструктор
    Pump();

    //диструктор
    ~Pump();

    //парсинг json-файла с исходными параметрами в структуру
    //принимает файл исходных данных
    void read_inicial_data(const string& input_data);


    //    // словарь коэффициентов/углов
    //    QMap<QString,QString> coeffs;

    //    // словарь параметров, зависящих от компонента
    //    QMap<QString,QString> comp_spec_params;

    //    // путь к файлу коэффициентов
    //    QString path_coeffs;

    //    // путь к файлу параметров, зависящих от компонента
    //    QString path_comp_spec_params;

    //    // список окислителя
    //    QVector<QString> oxidizer_list = {

    //        "АК",
    //        "Кислород",
    //        "Перекись водорода",
    //        "АТ",
    //        "АК-20",
    //        "АК-27",
    //    };

    //    // список горючего
    //    QVector<QString> fuel_list = {

    //        "Водород",
    //        "Гидразин",
    //        "Керосин",
    //        "Ксилидин",
    //        "Метан",
    //        "НДМГ",
    //        "Триэтиламин",
    //        "ТГ-02",
    //    };
};

#endif // PUMP_H
