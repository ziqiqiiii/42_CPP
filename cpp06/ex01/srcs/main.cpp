#include "../headers/serialize.hpp"

int main()
{
    Data Eva(1, "Eva", 60);
    Data John(2, "John", 70);

    uintptr_t returnEva = Serializer::serializer(&Eva);
    uintptr_t returnJohn = Serializer::serializer(&John);

    cout << "Return of Eva  :" << returnEva << endl;
    cout << "Return of John :" << returnJohn << endl;

    Data* original_Eva = Serializer::deserialize(returnEva);
    Data* original_John = Serializer::deserialize(returnJohn);

    cout << "id   : " << original_Eva->id << " ,";
    cout << "name : " << original_Eva->name << " ,";
    cout << "value: " << original_Eva->value << endl;

    cout << "id   : " << original_John->id << " ,";
    cout << "name : " << original_John->name << " ,";
    cout << "value: " << original_John->value << endl;

    return 0;
}