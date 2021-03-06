#include <json.hpp>

using namespace nlohmann;

int main()
{
    // create JSON values
    json j_null;
    json j_boolean = true;
    json j_number_integer = 17;
    json j_number_float = 23.42;
    json j_object = {{"one", 1}, {"two", 2}};
    json j_array = {1, 2, 4, 8, 16};
    json j_string = "Hello, world";

    // call is_array()
    std::cout << std::boolalpha;
    std::cout << j_null.is_array() << '\n';
    std::cout << j_boolean.is_array() << '\n';
    std::cout << j_number_integer.is_array() << '\n';
    std::cout << j_number_float.is_array() << '\n';
    std::cout << j_object.is_array() << '\n';
    std::cout << j_array.is_array() << '\n';
    std::cout << j_string.is_array() << '\n';
}
