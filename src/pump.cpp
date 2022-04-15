#include "pump.h"

// перегрузка << для вывода словарей разных типов
template<typename K, typename V>
ostream& operator<<(ostream& stream, map<K,V>& ex){

    for (auto const& item:ex){

        stream << item.first << ": " << item.second << endl;
    }

    return stream;
}

Pump::Pump()
{

}

Pump::~Pump(){


}

void Pump::read_inicial_data()
{
    InputPumpParams input_params;

    struct_mapping::reg(&InputPumpParams::strr, "XX");
//    struct_mapping::reg(&InputPumpParams::component, "AA");
//    struct_mapping::reg(&InputPumpParams::mass_flow, "NN");
//    struct_mapping::reg(&InputPumpParams::outlet_pressure_pump, "MM");
//    struct_mapping::reg(&InputPumpParams::inlet_pressure_pump, "QQ");
//    struct_mapping::reg(&InputPumpParams::steam_pressure, "BB");
//    struct_mapping::reg(&InputPumpParams::fluid_temperature_pump, "DD");
//    struct_mapping::reg(&InputPumpParams::density_pump, "RR");
//    struct_mapping::reg(&InputPumpParams::viscosity_pump, "PP");

    //QString inp_path = "inp_data.json";

    //std::istringstream inp_json_data(inp_path);


std::istringstream inp_json_data (R"json(

                   {
                                  "XX" : "adasdasdasd"


                   }




                   )json");


    struct_mapping::map_json_to_struct(input_params, inp_json_data);

std::cout << input_params.strr;




}
