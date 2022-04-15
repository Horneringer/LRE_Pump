#include "pump.h"

Pump::Pump()
{

}

Pump::~Pump(){


}

void Pump::read_inicial_data(const string& input_data)
{
    InpMap inp;

    //записать в поле component структуры InputPumpParams значение соответствующее ключу "Название компонента" в json и т.д
    sm::reg(&InputPumpParams::component, "Название компонента");
    sm::reg(&InputPumpParams::mass_flow, "Расход через насос (кг/сек)");
    sm::reg(&InputPumpParams::outlet_pressure_pump, "Давление на выходе из насоса (бар)");
    sm::reg(&InputPumpParams::inlet_pressure_pump, "Давление на входе в насос (бар)");
    sm::reg(&InputPumpParams::steam_pressure, "Давление насыщенного пара рабочего тела (бар)");
    sm::reg(&InputPumpParams::fluid_temperature_pump, "Температура рабочего тела на входе в насос (K)");
    sm::reg(&InputPumpParams::density_pump, "Плотность рабочей жидкости насоса (кг/м3)");
    sm::reg(&InputPumpParams::viscosity_pump, "Вязкость рабочей жидкости насоса (Па*с)");

    sm::reg(&InpMap::inp, "input_data");

    //файл json считывается в stringstream, который парсится в структуру
    ifstream inp_path(input_data);

    stringstream ss;

    if(inp_path){

        ss << inp_path.rdbuf();
        inp_path.close();
    }

//из json в структуру
//в параметрах экземпляр структуры и строковый поток
sm::map_json_to_struct(inp, ss);

//объект потока вывода
std::ostringstream out_json;

//из структуры в json
sm::map_struct_to_json(inp, out_json, " ");

std::cout << out_json.str() << std::endl;


}
