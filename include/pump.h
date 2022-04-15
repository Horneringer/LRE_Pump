#ifndef PUMP_H
#define PUMP_H

#include<QDebug>
#include<QMap>
#include<QVector>
#include<QPair>
#include<QTextStream>
#include<QFile>
#include<QDir>
#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<fstream>
#include <sstream>

#include "import/struct_mapping/struct_mapping.h"

using namespace std;

//WARNING поменять способ хранения параметров насоса
struct InputPumpParams
{
    string strr;
    //название компонента
    map<string, string> component;

    //массовый расход (кг/с)
    map<string,double> mass_flow;

    //давление на выходе из насоса (бар)
    map<string,double> outlet_pressure_pump;

    //давление на входе в насос (бар)
    map<string,double> inlet_pressure_pump;

    //давление насыщенного пара (бар)
    map<string,double> steam_pressure;

    //температура рабочего тела на входе в насос (К)
    map<string,double> fluid_temperature_pump;

    //плотность рабочей жидкости насоса (кг/м^3)
    map<string,double> density_pump;

    //вязкость рабочей жидкости насоса (Па*с)
    map<string,double> viscosity_pump;
};


class Pump
{

private:


// словарь исходных параметров
//    map<string,string> inputPumpParams;
//    string descr;
//    string value;


public:

    //конструктор
    Pump();

    //диструктор
    ~Pump();

    //заполнение структуры исходных параметров из файла
    void read_inicial_data();


    //    // словарь коэффициентов/углов
    //    QMap<QString,QString> coeffs;

    //    // словарь параметров, зависящих от компонента
    //    QMap<QString,QString> comp_spec_params;

    //    // путь к файлу с исходными параметрами
    //    QString path;

    //    // путь к файлу коэффициентов

    //    QString path_coeffs;

    //    // путь к файлу параметров, зависящих от компонента

    //    QString path_comp_spec_params;

    //    // переменные для считывания описания и значения
    //    QString descr, value;

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
