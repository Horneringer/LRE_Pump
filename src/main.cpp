#include<pump.h>

// вектор с описанием переменных

//vector<string> descr_vec = {

//    "Название компонента",
//    "Расход через насос (кг/сек)",
//    "Давление на выходе из насоса (бар)",
//    "Давление на входе в насос (бар)",
//    "Давление насыщенного пара рабочего тела (бар)",
//    "Температура рабочего тела на входе в насос (K)",
//    "Плотность рабочей жидкости насоса (кг/м3)",
//    "Вязкость рабочей жидкости насоса (Па*с)"

//};

//ostream& operator<<(ostream& stream, const vector<string>& descr_vec){

//    for (auto const& item:descr_vec){

//        stream << item << ": " << endl;
//    }

//    return stream;
//}

// расчетные блоки будут хранится каждый в своём словаре

// блок "Определение угловой скорости и диаметра шнека"

//map<string, double> angular_vel_diam_screw;


//class TestClass{

//public:

//    // коструктор получает на вход файл исходных параметров и файл коэффициентов, а затем создаёт объект
//    TestClass(const string& path, const string& path_coeffs, const string& path_comp_spec_params) {

//        // NOTE поток ifstream - чтение ИЗ файла || поток ofstream - запись В файл


//        cout <<"----------------------Основные исходные параметры------------------------" << endl << endl;


//        // открытие файла для чтения
//        ifstream in(path);

//        if(!in.is_open()){

//            cout << "Error File open!" << endl;
//        }

//        // пока есть что считывать
//        while (in.good()) {

//            getline(in, descr, ',');
//            getline(in, value, '\n');

//            // создание новой пары в словаре
//            this->ex[descr] = value;
//        }

//        in.close();

//        // последняя строка считывается 2 раза с пустым ключом, удаляем её
//        this->ex.erase("");

//        cout << this->ex << endl;

//        cout <<"----------------------Коэффициенты/углы----------------------------" << endl << endl;

//        // открытие файла для чтения
//        ifstream in1(path_coeffs);

//        if(!in1.is_open()){

//            cout << "Error File open!" << endl;
//        }

//        while (in1.good()) {

//            getline(in1, descr, ',');
//            getline(in1, value, '\n');

//            this->coeffs[descr] = value;
//        }

//        in1.close();

//        this->coeffs.erase("");

//        cout << this->coeffs << endl;

//        cout <<"----------------------Параметры, зависящие от компонента----------------------------" << endl << endl;

//        // открытие файла для чтения
//        ifstream in2(path_comp_spec_params);

//        if(!in2.is_open()){

//            cout << "Error File open!" << endl;
//        }

//        while (in2.good()) {

//            getline(in2, descr, ',');
//            getline(in2, value, '\n');

//            this->comp_spec_params[descr] = value;
//        }

//        in2.close();

//        this->comp_spec_params.erase("");

//        cout << this->comp_spec_params << endl;
//    }

//    // функция расчета эквивалентного диаметра шнека в зависимости от выбранного компонента
//    double eq_coeff_of_auger_diam(){

//        if (find(oxidizer_list.begin(), oxidizer_list.end(), ex["component"]) != oxidizer_list.end()){

//            angular_vel_diam_screw["eq_coeff_of_auger_diam"] = 9.8 - 0.04 * stod(comp_spec_params["ox_speed_coefficient"]);

//            return angular_vel_diam_screw["eq_coeff_of_auger_diam"];


//        }

//        else if (find(fuel_list.begin(), fuel_list.end(), ex["component"]) != fuel_list.end()) {

//            angular_vel_diam_screw["eq_coeff_of_auger_diam"] = 8.6 - 0.04 * stod(comp_spec_params["fuel_speed_coefficient"]);


//            return angular_vel_diam_screw["eq_coeff_of_auger_diam"];

//        }

//        else {

//            cout << "Неверный компонент!" << endl;
//        }
//    }

//private:
//    //исходные и расчитаные параметры будут хранится в словарях

//    // словарь исходных параметров
//    map<string,string> ex;

//    // словарь коэффициентов/углов
//    map<string,string> coeffs;

//    // словарь параметров, зависящих от компонента
//    map<string,string> comp_spec_params;

//    // путь к файлу с исходными параметрами
//    string path;

//    // путь к файлу коэффициентов

//    string path_coeffs;

//    // путь к файлу параметров, зависящих от компонента

//    string path_comp_spec_params;

//    // переменные для считывания описания и значения
//    string descr, value;

//    // список окислителя
//    vector<string> oxidizer_list = {

//        "АК",
//        "Кислород",
//        "Перекись водорода",
//        "АТ",
//        "АК-20",
//        "АК-27",
//    };

//    // список горючего
//    vector<string> fuel_list = {

//        "Водород",
//        "Гидразин",
//        "Керосин",
//        "Ксилидин",
//        "Метан",
//        "НДМГ",
//        "Триэтиламин",
//        "ТГ-02",
//    };
//};


int main(){

//    TestClass test(
//                "/home/vadim/EclipseC++Projects/Программирование Qt 5.10 С++/Calculation of liquid rocket engine units/input_data.csv",
//                "/home/vadim/EclipseC++Projects/Программирование Qt 5.10 С++/Calculation of liquid rocket engine units/user_input_consts.csv",
//                "/home/vadim/EclipseC++Projects/Программирование Qt 5.10 С++/Calculation of liquid rocket engine units/component_specific_parameters.csv");

//    cout << test.eq_coeff_of_auger_diam() << endl;

//    cout << angular_vel_diam_screw;

    Pump pump;

    pump.read_inicial_data();

    //auto rrr = pump.read_inicial_data("input_params.csv");

    //cout << rrr.at(2);
    return 0;
}
